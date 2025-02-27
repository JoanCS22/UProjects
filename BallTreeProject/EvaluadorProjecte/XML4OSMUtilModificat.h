#ifndef LP_OSM_2122_XML4OSMUTILMODIFICAT_H
#define LP_OSM_2122_XML4OSMUTILMODIFICAT_H

#include <string>
#include <vector>
#include "Common.h"

class XML4OSMUtilModificat {

private:
    std::vector<XmlElement>* m_conjuntTest1;


    void construeixPrimerConjunt();


public:
    XML4OSMUtilModificat();
    ~XML4OSMUtilModificat();

    void retornaConjuntTest1(std::vector<XmlElement>& out1);



};

#endif //LP_OSM_2122_XML4OSMUTIL_H
