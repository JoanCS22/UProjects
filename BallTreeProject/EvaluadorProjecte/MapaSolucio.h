
#ifndef MAPASOLUCIO_H
#define MAPASOLUCIO_H

#include "MapaBase.h"
#include "PuntDeInteresBotigaSolucio.h"
#include "PuntDeInteresRestaurantSolucio.h"
#include "CamiSolucio.h"

#include "Util.h"
#include "BallTree.h"
#include "GrafSolucio.h"

// Pots esborrar tot aquest fitxer i reemplacarlo pel teu si ho veus oportu.

class MapaSolucio : public MapaBase {
public:
    MapaSolucio() {

    }

    ~MapaSolucio() {

    }

    // Metodes a implementar de la primera part
    void getPdis(std::vector<PuntDeInteresBase*>&);
    void getCamins(std::vector<CamiBase*>&);
    void parsejaXmlElements(std::vector<XmlElement>& xmlElements);

    void construeixGraf();

    // Metode a implementar de la segona part
    CamiBase* buscaCamiMesCurt(PuntDeInteresBase* desde, PuntDeInteresBase* a);

private:
    // TODO: Afegeix els atributs que creguis necessaris per aquest MapaSolucio
    std::vector<PuntDeInteresBase*> m_pdisList;
    std::vector<CamiBase*> m_caminsList;
    std::vector<std::string> m_id;
    std::vector<Coordinate> m_caminsNode;

    GrafSolucio m_graf;
};



#endif 
