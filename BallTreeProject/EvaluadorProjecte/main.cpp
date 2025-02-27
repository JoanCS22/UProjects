#include <algorithm>
#include <iostream>
#include <map>
#include <iomanip>

#include "XML4OSMUtilModificat.h"
#include "MapaBase.h"
#include "AvaluadorBallTree.h"
#include "MapaSolucio.h"

// POSA A 'true' PER VEURE ELS DETALLS DEL TESTS
// POSA A 'false' PER VEURE DIRECTAMENT NUMERO ESTUDIANTS I NOTA
bool mostraDetalls = true;

// Comprova que el inOrdre, preOrdre i postOrdre estiguin per tamanys
// i coordenades de cadascu pel primer conjunt de dades.
double primerTestTasca2(); // 10/10. Maxima puntuacio a obtenir: 10 (3.5 + 3.5 + 3)

// Comprova que la coordenada del punt de interes especificat correspongui al node-cami
// assignat, per cinc punts de interes diferents pel tercer conjunt de dades.
double primerTestTasca3(); // 10/10. Maxima puntuacio a obtenir: 10 (2 per cada)

// Comprova que el cami entre dos punts de interes especificats es correcte,
// per dues parelles diferents pel primer conjunt de dades.
double primerTestTasca4(MapaBase* mapaBase);

int main() {
    double grade1 = 0.0;
    double grade2 = 0.0;
    double grade3 = 0.0;

    double grade = 0.0;

    std::vector<XmlElement> vectorElements = {};
    XML4OSMUtilModificat xml4OsmModificat;

    // TODO: Assignar memoria per mapaSolucio amb la classe MapaSolucio definida
    MapaBase* mapaSolucio = new MapaSolucio();

    if (mapaSolucio == nullptr) {
        std::cout << "Comment :=>> No s'ha instanciat correctament mapaSolucio" << std::endl;
        std::cout << "Comment :=>> No es pot procedir en l'execucio dels tests" << std::endl;
        return -1;
    }


    grade1 = primerTestTasca2();
    grade2 = primerTestTasca3();

    xml4OsmModificat.retornaConjuntTest1(vectorElements);
    mapaSolucio->parsejaXmlElements(vectorElements);

    grade3 = primerTestTasca4(mapaSolucio);

    grade = (grade1 + grade2 + grade3) / 3;

    if (mostraDetalls) {
        std::cout << std::endl << std::endl;

        std::cout << "Comment :=>> Nota Grade1 [recorregut Balltree]: " << grade1 << std::endl;
        std::cout << "Comment :=>> Nota Grade2 [Node mes proper]: " << grade2 << std::endl;
        std::cout << "Comment :=>> Nota Grade3 [Cami mes curt]: " << grade3 << std::endl;
    }

    if (mostraDetalls) {
        std::cout << "Comment :=>> Nota segona part Projecte: " << grade << std::endl;
    }

    std::cout << "Grade :=>> " << grade << std::endl;

    return 0;
}


bool checkRecorreguts(const std::vector<std::list<Coordinate>>& result, const std::vector<int>& recorregut, std::vector<int>& estudiant) {
    int i = 0;
    estudiant.clear();
    bool check = true;
    for (auto list_coord : result) {
        if (i < recorregut.size()) {
            if (i != std::distance(list_coord.begin(), list_coord.end())) {
                check = false;
            }
        }
        else {
            check = false;
        }

        estudiant.push_back(std::distance(list_coord.begin(), list_coord.end()));
    }

    return check;
}


bool checkRecorreguts(const std::vector<std::list<Coordinate>>& recorregut, const std::vector<std::list<Coordinate>>& expected) {
    double epsilon = 0.0001;
    if (recorregut.size() != expected.size())
        return false;

    int i = 0;
    bool check = true;

    for (auto list_coord : expected) {
        int distanciaListRecorregut = std::distance(recorregut[i].begin(), recorregut[i].end());
        int distanciaListExpected = std::distance(expected[i].begin(), expected[i].end());

        if (distanciaListRecorregut != distanciaListExpected) {
            check = false;
        }
        else {
            auto it_recorregut = recorregut[i].begin();
            auto it_expected = expected[i].begin();

            while (it_expected != expected[i].end()) {
                if (Util::DistanciaHaversine(*(it_expected), *(it_recorregut)) > epsilon) {
                    check = false;
                }

                it_expected++;
                it_recorregut++;
            }
        }

        i++;
    }


    return check;
}

bool isFromThisCarrer(Coordinate coord, const std::vector<Coordinate>& carrer) {
    double epsilon = 0.0001;
    return std::any_of(carrer.begin(), carrer.end(), [&](Coordinate carrer_coords) { return (Util::DistanciaHaversine(carrer_coords, coord) <= epsilon); });
}

bool comprovaNodeMesProper(Coordinate pdi, std::result_of<decltype(&creaAvaluadorBallTree)()>::type ballTreeConjunt, std::vector<Coordinate>& carrer, Coordinate& coordenadaEstudiantCamiProper) {
    coordenadaEstudiantCamiProper = Coordinate{ 0.0, 0.0 };
    BallTree* arrelBallTree = ballTreeConjunt->cridaGetArrel();
    coordenadaEstudiantCamiProper = ballTreeConjunt->nodeMesProper(pdi, coordenadaEstudiantCamiProper, arrelBallTree);
    return isFromThisCarrer(coordenadaEstudiantCamiProper, carrer);
}

void mostraCoordenadaEstudiantAmbCami(Coordinate coordenada, const std::vector<Coordinate>& cami) {
    std::cout << std::fixed << std::setprecision(7) << "Comment :=>> (" << coordenada.lat << ", " << coordenada.lon << ") AL CAMI: " << std::endl;
    for (Coordinate coord : cami) {
        std::cout << "Comment :=>>\t (" << coord.lat << ", " << coord.lon << ")" << std::endl;
    }
}

void mostraCoordenadesRecorregutBallTree(const std::vector<std::list<Coordinate>>& estudiant_recorregut, const std::vector<std::list<Coordinate>>& expected) {
    std::cout << "Comment :=>> RECORREGUT ESTUDIANT" << std::endl;
    for (auto vec_out : estudiant_recorregut) {
        for (auto coord : vec_out) {
            std::cout << std::fixed << std::setprecision(7) << "Comment :=>> Coordenada: [" << coord.lat << ", " << coord.lon << "]" << std::endl;
        }
        std::cout << "Comment :=>> ---------" << std::endl;
    }

    std::cout << "Comment :=>> RECORREGUT ESPERAT" << std::endl;
    for (auto vec_out : expected) {
        for (auto coord : vec_out) {
            std::cout << std::fixed << std::setprecision(7) << "Comment :=>> Coordenada: [" << coord.lat << ", " << coord.lon << "]" << std::endl;
        }
        std::cout << "Comment :=>> ---------" << std::endl;
    }
}

bool comprovaCamiMesCurt(const std::vector<Coordinate>& expected, const std::vector<Coordinate>& estudiant) {
    bool check = true;
    double epsilon = 0.0001;
    if (estudiant.size() != expected.size()) {
        check = false;
    }
    else {
        for (int i = 0; i < estudiant.size(); i++) {
            if (Util::DistanciaHaversine(estudiant[i], expected[i]) > epsilon) {
                check = false;
            }
        }
    }

    if (!check) {
        std::cout << "Comment :=>> INCORRECTE" << std::endl;
    }
    else {
        std::cout << "Comment :=>> CORRECTE" << std::endl;
    }

    std::cout << "Comment :=>> CAMI ESTUDIANT" << std::endl;
    for (Coordinate coord : estudiant) {
        std::cout << "Comment :=>> " << std::fixed << std::setprecision(7) << "(" << coord.lat << ", " << coord.lon << ")" << std::endl;
    }

    std::cout << "Comment :=>> CAMI ESPERAT" << std::endl;
    for (Coordinate coord : expected) {
        std::cout << "Comment :=>> " << std::fixed << std::setprecision(7) << "(" << coord.lat << ", " << coord.lon << ")" << std::endl;
    }

    return check;
}


double primerTestTasca2() {
    double grade = 0;
    std::vector<Coordinate> coordenades = { Coordinate{ 41.9023349 , 12.5138592 }, Coordinate{ 41.4501930 , 2.2448922 }, Coordinate{ 41.9674134 , 2.8212290 } };

    std::vector<int> sizes_pre_out = { 3, 2, 1, 1, 1 };
    std::vector<std::list<Coordinate>> expected_pre_out = {
            {Coordinate {41.9023349, 12.5138592}, Coordinate {41.4501930, 2.2448922}, Coordinate {41.9674134 , 2.8212290 }},
            {Coordinate {41.4501930 , 2.2448922}, Coordinate {41.9674134, 2.8212290}},
            {Coordinate {41.9674134, 2.8212290}},
            {Coordinate {41.4501930, 2.2448922}},
            {Coordinate {41.9023349, 12.5138592}}
    };

    std::vector<int> sizes_in_out = { 1, 2, 1, 3, 1 };
    std::vector<std::list<Coordinate>> expected_in_out = {
            {Coordinate {41.9674134, 2.8212290}},
            {Coordinate {41.4501930 , 2.2448922}, Coordinate {41.9674134, 2.8212290}},
            {Coordinate {41.4501930, 2.2448922}},
            {Coordinate {41.9023349, 12.5138592}, Coordinate {41.4501930, 2.2448922}, Coordinate {41.9674134 , 2.8212290 }},
            {Coordinate {41.9023349, 12.5138592}}
    };

    std::vector<int> sizes_post_out = { 1, 1, 2, 1, 3 };
    std::vector<std::list<Coordinate>> expected_post_out = {
            {Coordinate {41.9674134, 2.8212290}},
            {Coordinate {41.4501930, 2.2448922}},
            {Coordinate {41.4501930 , 2.2448922}, Coordinate {41.9674134, 2.8212290}},
            {Coordinate {41.9023349, 12.5138592}},
            {Coordinate {41.9023349, 12.5138592}, Coordinate {41.4501930, 2.2448922}, Coordinate {41.9674134 , 2.8212290 }}
    };

    std::vector<int> sizes_student = {};

    std::vector<std::list<Coordinate>> recorregutOut;

    auto ballTreeConjunt1 = creaAvaluadorBallTree();
    ballTreeConjunt1->cridaConstruirArbre(coordenades);

    recorregutOut.clear();
    ballTreeConjunt1->cridaRecorregutPreordre(recorregutOut);
    std::cout << "Comment :=>> PREORDRE" << std::endl;
    if (checkRecorreguts(recorregutOut, expected_pre_out)) {
        std::cout << "Comment :=>> CORRECTE PREORDRE" << std::endl;
        grade += 3.5;
    }
    else {
        std::cout << "Comment :=>> INCORRECTE PREORDRE" << std::endl;
    }
    mostraCoordenadesRecorregutBallTree(recorregutOut, expected_pre_out);

    recorregutOut.clear();
    ballTreeConjunt1->cridaRecorregutInordre(recorregutOut);
    std::cout << "Comment :=>> INORDRE" << std::endl;
    if (checkRecorreguts(recorregutOut, expected_in_out)) {
        std::cout << "Comment :=>> CORRECTE INORDRE" << std::endl;
        grade += 3.5;
    }
    else {
        std::cout << "Comment :=>> INCORRECTE INORDRE" << std::endl;
    }
    mostraCoordenadesRecorregutBallTree(recorregutOut, expected_in_out);

    recorregutOut.clear();
    ballTreeConjunt1->cridaRecorregutPostordre(recorregutOut);
    std::cout << "Comment :=>> POSTORDRE" << std::endl;
    if (checkRecorreguts(recorregutOut, expected_post_out)) {
        std::cout << "Comment :=>> CORRECTE POSTORDRE" << std::endl;
        grade += 3.0;
    }
    else {
        std::cout << "Comment :=>> INCORRECTE POSTORDRE" << std::endl;
    }
    mostraCoordenadesRecorregutBallTree(recorregutOut, expected_post_out);

    return grade;
}



double primerTestTasca3() {
    double grade = 0.0;

    std::vector<Coordinate> coordenadesBallTree = {
    };

    std::vector<Coordinate> tresCreus = {
            // Carrer de les Tres Creus (prop de l'escola):
            Coordinate{ 41.5462276, 41.5462276 },		// 1398537376
            Coordinate{ 41.5461827, 2.1183831 },		// 6644216590
            Coordinate{ 41.5461758, 2.1185303 },		// 1446297966
            Coordinate{ 41.5461621, 2.1190732 },		// 965631509
            Coordinate{ 41.5461331, 2.1192704 },		// 965631510
            Coordinate{ 41.5460159, 2.1196473 },		// 965631511
    };

    std::vector<Coordinate> carrerMexic = {
            // Carrer de Mexic (prop de pl espanya) (300828573):
            Coordinate{ 41.3735460, 2.1474414 },		// 3049188208
            Coordinate{ 41.3734884, 2.1475119 },		// 5164105472
            Coordinate{ 41.3734766, 2.1475300 },		// 3049188207
            Coordinate{ 41.3728068, 2.1484139 },		// 6273277446
            Coordinate{ 41.3727909, 2.1484343 },		// 7038308614
            Coordinate{ 41.3727294, 2.1485133 },		// 30298941
            Coordinate{ 41.3726845, 2.1485728 },		// 7038308611
            Coordinate{ 41.3721500, 2.1492825 },		// 7038601991
            Coordinate{ 41.3721176, 2.1493255 },		// 30264242
            Coordinate{ 41.3717495, 2.1498152 },		// 30298942
            Coordinate{ 41.3713935, 2.1502866 },		// 7038742370
            Coordinate{ 41.3712752, 2.1504433 },		// 168330638
    };

    std::vector<Coordinate> foothPathEiffel = {
            // Foothpath on Eiffel (27878420)
            Coordinate {48.8614544, 2.2887899},
            Coordinate {48.8615269, 2.2887754},
            Coordinate {48.8617429, 2.2890997},
            Coordinate {48.8619692, 2.2894425}
    };

    for (Coordinate coord : tresCreus) {
        coordenadesBallTree.push_back(coord);
    }

    for (Coordinate coord : carrerMexic) {
        coordenadesBallTree.push_back(coord);
    }

    for (Coordinate coord : foothPathEiffel) {
        coordenadesBallTree.push_back(coord);
    }

    auto ballTreeConjunt3 = creaAvaluadorBallTree();
    ballTreeConjunt3->cridaConstruirArbre(coordenadesBallTree);
    BallTree* arrelBallTree = ballTreeConjunt3->cridaGetArrel();

    Coordinate barCantonada = { 41.5460159, 2.1196473 };			// 1623786562
    Coordinate cycleParking = { 41.3715000, 2.1499900 };			// 6933513738
    Coordinate capraboSupermarket = { 41.3721415, 2.1475164 };		// 6504150085
    Coordinate artworkHomme = { 48.8615587, 2.2891173 };			// 2680395469
    Coordinate artworkFemme = { 48.8617122, 2.2893496 };			// 2680395492

    Coordinate estudiantResultat;

    std::cout << "Comment :=>> Bar Cantonada (" << barCantonada.lat << ", " << barCantonada.lon << ")" << std::endl;
    if (comprovaNodeMesProper(barCantonada, ballTreeConjunt3, tresCreus, estudiantResultat)) {
        std::cout << "Comment :=>> CORRECTE: ";
        grade += 2;
    }
    else {
        std::cout << "Comment :=>> INCORRECTE: ";
    }
    mostraCoordenadaEstudiantAmbCami(estudiantResultat, tresCreus);

    std::cout << "Comment :=>> Cycle Parking (" << cycleParking.lat << ", " << cycleParking.lon << ")" << std::endl;
    if (comprovaNodeMesProper(cycleParking, ballTreeConjunt3, carrerMexic, estudiantResultat)) {
        std::cout << "Comment :=>> CORRECTE: ";
        grade += 2;
    }
    else {
        std::cout << "Comment :=>> INCORRECTE: ";
    }
    mostraCoordenadaEstudiantAmbCami(estudiantResultat, carrerMexic);

    std::cout << "Comment :=>> Supermercat Caprabo (" << capraboSupermarket.lat << ", " << capraboSupermarket.lon << ")" << std::endl;
    if (comprovaNodeMesProper(capraboSupermarket, ballTreeConjunt3, carrerMexic, estudiantResultat)) {
        std::cout << "Comment :=>> CORRECTE: ";
        grade += 2;
    }
    else {
        std::cout << "Comment :=>> INCORRECTE: ";
    }
    mostraCoordenadaEstudiantAmbCami(estudiantResultat, carrerMexic);

    std::cout << "Comment :=>> Artwork Homme (" << artworkHomme.lat << ", " << artworkHomme.lon << ")" << std::endl;
    if (comprovaNodeMesProper(artworkHomme, ballTreeConjunt3, foothPathEiffel, estudiantResultat)) {
        std::cout << "Comment :=>> CORRECTE: ";
        grade += 2;
    }
    else {
        std::cout << "Comment :=>> INCORRECTE: ";
    }
    mostraCoordenadaEstudiantAmbCami(estudiantResultat, foothPathEiffel);

    std::cout << "Comment :=>> Artwork Femme (" << artworkFemme.lat << ", " << artworkFemme.lon << ")" << std::endl;
    if (comprovaNodeMesProper(artworkFemme, ballTreeConjunt3, foothPathEiffel, estudiantResultat)) {
        std::cout << "Comment :=>> CORRECTE: ";
        grade += 2;
    }
    else {
        std::cout << "Comment :=>> INCORRECTE: ";
    }
    mostraCoordenadaEstudiantAmbCami(estudiantResultat, foothPathEiffel);

    return grade;
}


double primerTestTasca4(MapaBase* mapaBase) {
    double grade = 0.0;

    PuntDeInteresBase* PacoJunior = new PuntDeInteresBase(Coordinate{ 41.4905910 , 2.1450548 }, "Paco Junior");
    PuntDeInteresBase* DiaMarket = new PuntDeInteresBase(Coordinate{ 41.4910993, 2.1446911 }, "Dia Market");

    PuntDeInteresBase* AnecPekin = new PuntDeInteresBase(Coordinate{ 41.4907316, 2.1456752 }, "Anec Pekin");
    PuntDeInteresBase* Castaneria = new PuntDeInteresBase(Coordinate{ 41.4915513, 2.1444433 }, "Castaniera");

    // Paco Junior -> Dia Market
    std::vector<Coordinate> expectedPacoJuniorToMarketCoordinates = {
            Coordinate{41.4905717, 2.1452803},
            Coordinate{41.4903783, 2.1451197},
            Coordinate{41.4903555, 2.1451012},
            Coordinate{41.4903253, 2.1450766},
            Coordinate{41.4902942, 2.1450513},
            Coordinate{41.4903447, 2.1450105},
            Coordinate{41.4903717, 2.1449829},
            Coordinate{41.4903894, 2.1449680},
            Coordinate{41.4904834, 2.1448766},
            Coordinate{41.4905729, 2.1447814},
            Coordinate{41.4906402, 2.1446621},
            Coordinate{41.4907541, 2.1443886},
    };


    // Anec Pekin -> Bar Casteneria
    std::vector<Coordinate> expectedPekinToCasteneria = {
            Coordinate{41.4907640, 2.1456588},
            Coordinate{41.4908004, 2.1456486},
            Coordinate{41.4908319, 2.1456497},
            Coordinate{41.4908287, 2.1455688},
            Coordinate{41.4908118, 2.1455548},
            Coordinate{41.4906945, 2.1454576},
            Coordinate{41.4905422, 2.1453428},
            Coordinate{41.4905152, 2.1453211},
            Coordinate{41.4904251, 2.1452485},
            Coordinate{41.4904520, 2.1452302},
            Coordinate{41.4904791, 2.1452407},
            Coordinate{41.4904996, 2.1452578},
            Coordinate{41.4906654, 2.1453960},
            Coordinate{41.4907399, 2.1454220},
            Coordinate{41.4908966, 2.1455540},
            Coordinate{41.4909207, 2.1455756},
            Coordinate{41.4909425, 2.1455221},
            Coordinate{41.4909680, 2.1454587},
            Coordinate{41.4914979, 2.1441483},
            Coordinate{41.4915371, 2.1441859},
            Coordinate{41.4918198, 2.1444718},
            Coordinate{41.4917198, 2.1446255},
            Coordinate{41.4916581, 2.1446049}
    };


    CamiBase* camiPacoMarket = mapaBase->buscaCamiMesCurt(PacoJunior, DiaMarket);
    std::cout << "Comment :=>> CALCUL CAMI MES CURT PER Paco Junior A Dia Market" << std::endl;
    if (comprovaCamiMesCurt(expectedPacoJuniorToMarketCoordinates, camiPacoMarket->getCamiCoords())) {
        grade += 5;
    }

    std::cout << "Comment :=>> CALCUL CAMI MES CURT PER Anec Pekin A Bar Castañeira" << std::endl;
    CamiBase* camiAnecCastaneria = mapaBase->buscaCamiMesCurt(AnecPekin, Castaneria);
    if (comprovaCamiMesCurt(expectedPekinToCasteneria, camiAnecCastaneria->getCamiCoords())) {
        grade += 5;
    }


    return grade;
}

