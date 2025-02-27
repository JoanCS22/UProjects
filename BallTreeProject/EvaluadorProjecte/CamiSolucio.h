#pragma once
#include "CamiBase.h"

class CamiSolucio : public CamiBase
{
private:
	std::vector<Coordinate> m_camins;
public:
	CamiSolucio() {}
	CamiSolucio(const std::vector<Coordinate>& coords) : m_camins(coords) {}

	std::vector<Coordinate> getCamiCoords()
	{
		return m_camins;
	}
};