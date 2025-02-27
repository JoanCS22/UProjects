#pragma once
#include "PuntDeInteresBase.h"

class PuntDeInteresRestaurantSolucio : public PuntDeInteresBase
{
public:
	PuntDeInteresRestaurantSolucio() : m_cuisine(""), m_wheelchair(false) {}
	PuntDeInteresRestaurantSolucio(Coordinate coord, std::string name, const std::string cuisine, bool wheelchair) :
		PuntDeInteresBase(coord, name), m_cuisine(cuisine), m_wheelchair(wheelchair) {}

	std::string getName() { return PuntDeInteresBase::getName(); }
	unsigned int getColor()
	{
		if (m_wheelchair)
		{
			if (m_cuisine == "pizza")
				return 0x03FCBA;
			else
				return 0x251351;
		}
		else
		{
			if (m_cuisine == "chinese")
				return 0xA6D9F7;
			else
				return PuntDeInteresBase::getColor();
		}
	}

private:
	std::string m_cuisine;
	bool m_wheelchair;
};