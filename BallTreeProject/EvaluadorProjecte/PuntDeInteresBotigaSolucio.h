#pragma once
#include "PuntDeInteresBase.h"

class PuntDeInteresBotigaSolucio : public PuntDeInteresBase
{
public:
	PuntDeInteresBotigaSolucio() : m_shopTag(""), m_openingHour(""), m_wheelchair(false) {}
	PuntDeInteresBotigaSolucio(Coordinate coord, std::string name, const std::string& shopTag, const std::string opening_hour,
		bool wheelchair) : PuntDeInteresBase(coord, name), m_shopTag(shopTag), m_openingHour(opening_hour),
		m_wheelchair(wheelchair) {}

	std::string getName() { return PuntDeInteresBase::getName(); }
	unsigned int getColor()
	{
		if (m_shopTag == "supermarket")
			return 0xA5BE00;
		else if (m_shopTag == "tobacco")
			return 0xFFAD69;
		else if (m_shopTag == "bakery")
		{
			// Comprovar si l'etiqueta de la tenda es una bakery amb un horari específic i accessible en cadira de rodes
			if (m_openingHour.find("06:00-22:00") != std::string::npos && m_wheelchair)
				return 0x4CB944;
			else
				return 0xE85D75;
		}
		else
			return 0xEFD6AC;
	}

private:
	std::string m_shopTag;
	std::string m_openingHour;
	bool m_wheelchair;
};