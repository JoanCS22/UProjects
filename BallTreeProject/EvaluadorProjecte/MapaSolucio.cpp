
#include "MapaSolucio.h"

// Pots esborrar tot aquest fitxer i reemplacarlo pel teu si ho veus oportu.

void MapaSolucio::getPdis(std::vector<PuntDeInteresBase*>& pdis)
{
    pdis.clear(); // Natejar el vector pdis per començar des de zero.

    // Recorrem la llista de PuntDeInteresBase en m_pdisList
    for (auto it = m_pdisList.begin(); it < m_pdisList.end(); it++)
    {
        // Comprovem si el nom no està buit i no es "isatrap" ni "itsatrap"
        if (!(*it)->getName().empty() && (*it)->getName() != "isatrap" && (*it)->getName() != "itsatrap")
            pdis.push_back((*it)); // Si cumpleix les condicions anteriors, afegix l'element a la llista pdis
    }
}

void MapaSolucio::getCamins(std::vector<CamiBase*>& camins)
{
    // Assignem el contingut de m_caminsList al vector camins
    camins = m_caminsList;
}

void MapaSolucio::parsejaXmlElements(std::vector<XmlElement>& xmlElements)
{
    // Netejar les llistes existents per començar des de zero (aixo es pel caronte)
    m_pdisList.clear();
    m_caminsList.clear();
    m_id.clear();

    // Iterem a través dels elements XML proporcionats
    for (auto it = xmlElements.begin(); it < xmlElements.end(); it++)
    {
        if ((*it).id_element == "node")
        {
            double lat = 0;
            double lon = 0;

            std::string id = "";

            // Analitzem els atributs del node
            for (int i = 0; i < (*it).atributs.size(); i++)
            {
                if ((*it).atributs[i].first == "id")
                    id = (*it).atributs[i].second;
                if ((*it).atributs[i].first == "lat")
                    lat = std::stod((*it).atributs[i].second);
                if ((*it).atributs[i].first == "lon")
                    lon = std::stod((*it).atributs[i].second);
            }

            std::string name = "";
            std::string shopTag = "";
            std::string cuisine = "";
            std::string openingHour = "";

            bool wheelchair = false;
            bool shop = false;
            bool restaurant = false;

            // Procesem els elements fills del node
            for (int i = 0; i < (*it).fills.size(); i++)
            {
                if ((*it).fills[i].first == "tag")
                {
                    std::pair<std::string, std::string> valorTag = Util::kvDeTag((*it).fills[i].second);

                    // Extrallem informació rellevant de les etiquetes (tag)
                    if (valorTag.first == "name")
                        name = valorTag.second;
                    if (valorTag.first == "wheelchair")
                        wheelchair = (valorTag.second == "yes") ? true : false;
                    if (valorTag.first == "cuisine")
                        cuisine = valorTag.second;
                    if (valorTag.first == "opening_hours")
                        openingHour = valorTag.second;
                    if (valorTag.first == "amenity")
                    {
                        if (valorTag.second == "restaurant")
                            restaurant = true;
                    }
                    if (valorTag.first == "shop")
                    {
                        shopTag = valorTag.second;
                        shop = true;
                    }
                }
            }

            // Emmagatzemar l'ID del node
            m_id.push_back(id);

            // Segons les condicions, creem instàncies dels objectes apropiats
            // (PuntDeInteresRestaurantSolucio, PuntDeInteresBotigaSolucio o PuntDeInteresBase)
            // i les afegim a la llista corresponent

            if (restaurant)
                m_pdisList.push_back(new PuntDeInteresRestaurantSolucio({ lat, lon }, name, cuisine, wheelchair));
            else if (shop)
                m_pdisList.push_back(new PuntDeInteresBotigaSolucio({ lat, lon }, name, shopTag, openingHour, wheelchair));
            else if (!restaurant && !shop)
                m_pdisList.push_back(new PuntDeInteresBase({ lat, lon }, name));
        }
        else if ((*it).id_element == "way")
        {
            // Creem un vector per emmagatzemar els nodes relacionats (PuntDeInteresBase) d'aqeust cami 
            std::vector<PuntDeInteresBase*> nd;

            // Iterem a través dels elements fills del cami
            for (int i = 0; i < (*it).fills.size(); i++)
            {
                if ((*it).fills[i].first == "nd")
                {
                    int j = 0;
                    bool trobat = false;

                    while (j < m_id.size() && !trobat)
                    {
                        // Busquem els nodes relacionats pel seu ID en el vector m_id
                        if (m_id[j] == (*it).fills[i].second[0].second)
                        {
                            // Afegim el node relacionat al vector nd
                            nd.push_back(m_pdisList[j]);
                            trobat = true;
                        }
                        else
                            j++;
                    }
                }
                else if ((*it).fills[i].first == "tag")
                {
                    std::vector<Coordinate> coords;
                    std::pair<std::string, std::string> valorTag = Util::kvDeTag((*it).fills[i].second);

                    if (valorTag.first == "highway")
                    {
                        // Recorrem els nodes relacionats (PuntDeInteresBase) i extrallem les seves coordenades
                        for (auto aux = nd.begin(); aux != nd.end(); aux++)
                        {
                            coords.push_back((*aux)->getCoord());
                        }

                        // Creem un objecte de tipus CamiSolucio amb les coordenades i el que afegim a la llista de camins
                        CamiSolucio* c = new CamiSolucio(coords);

                        m_caminsList.push_back(c);
                    }
                }
            }
        }
    }
}

void MapaSolucio::construeixGraf()
{
    m_graf.clear();

    for (size_t i = 0; i < m_caminsList.size(); i++)
    {
        std::vector<Coordinate> coords = m_caminsList[i]->getCamiCoords();

        for (size_t j = 0; j < coords.size(); j++)
        {
            bool existeix = false;

            for (const Coordinate& uniqueNode : m_caminsNode)
            {
                if (uniqueNode.lat == coords[j].lat && uniqueNode.lon == coords[j].lon)
                {
                    existeix = true;
                    break;
                }
            }

            if (!existeix)
                m_caminsNode.push_back(coords[j]);
        }
    }

    for (size_t i = 0; i < m_caminsNode.size(); i++)
    {
        m_graf.afegirNode(m_caminsNode[i]);
    }

    for (size_t i = 0; i < m_caminsList.size(); i++)
    {
        std::vector<Coordinate> coords = m_caminsList[i]->getCamiCoords();

        for (size_t j = 0; j < coords.size() - 1; j++)
            m_graf.afegirAresta(coords[j], coords[j + 1]);
    }
}


CamiBase* MapaSolucio::buscaCamiMesCurt(PuntDeInteresBase* desde, PuntDeInteresBase* a)
{
    construeixGraf();

    Coordinate coordDesde = desde->getCoord();
    Coordinate coordA = a->getCoord();

    Coordinate QDesde, QA;

    BallTree* ballTree = new BallTree();
    ballTree->construirArbre(m_caminsNode);
    ballTree->nodeMesProper(coordDesde, QDesde, ballTree->getArrel());
    ballTree->nodeMesProper(coordA, QA, ballTree->getArrel());

    std::stack<Coordinate> coords;

    m_graf.camiMesCurt(QDesde, QA, coords);

    std::vector<Coordinate> way;
    size_t tamany = coords.size();

    for (size_t i = 0; i < tamany; i++)
    {
        way.push_back(coords.top());
        coords.pop();
    }

    CamiSolucio* cami = new CamiSolucio(way);

    return cami;
}