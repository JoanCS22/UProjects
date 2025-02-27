#include "pch.h"
#include "GrafSolucio.h"
#include "limits"

//const double GrafSolucio::DISTMAX{ std::numeric_limits<double>::max(); };

void GrafSolucio::clear()
{
	m_nodes.clear();
	m_matriuAdj.clear();
	m_numNodes = 0;
}

void GrafSolucio::afegirNode(const Coordinate& coord)
{
	//m_nodes.resize(m_numNodes)
	m_nodes.push_back(coord);

	//add a row
	m_matriuAdj.push_back(std::vector<double>(m_numNodes));

	m_numNodes++;

	//m_matriuAdj.resize(m_numNodes)
	for (size_t i = 0; i < m_numNodes; i++)
		m_matriuAdj[i].push_back(0);
}

void GrafSolucio::afegirAresta(const Coordinate& coord1, const Coordinate& coord2)
{
	size_t pos1 = -1;
	size_t pos2 = -1;

	double lat1 = coord1.lat;
	double lon1 = coord1.lon;
	double lat2 = coord2.lat;
	double lon2 = coord2.lon;

	bool trobat = false;
	size_t i = 0;

	while (i < m_numNodes && !trobat)
	{
		double lat = m_nodes[i].lat;
		double lon = m_nodes[i].lon;

		if (lat == lat1 && lon == lon1)
		{
			trobat = true;
			pos1 = i;
		}
		else
			i++;
	}

	trobat = false;
	i = 0;

	while (i < m_numNodes && !trobat)
	{
		double lat = m_nodes[i].lat;
		double lon = m_nodes[i].lon;

		if (lat == lat2 && lon == lon2)
		{
			trobat = true;
			pos2 = i;
		}
		else
			i++;
	}

	if (pos1 != -1 && pos2 != -1)
	{
		double dist = Util::DistanciaHaversine(coord1, coord2);

		m_matriuAdj[pos1][pos2] = dist;
		m_matriuAdj[pos2][pos1] = dist;
	}
}

size_t GrafSolucio::minDistance(const std::vector<double>& dist, const std::vector<bool>& visited) const
{
	// Initialize min value
	double min = 100000000000000;
	size_t minIndex = -1;

	for (size_t i = 0; i < m_numNodes; i++)
	{
		if (!visited[i] && dist[i] <= min)
		{
			min = dist[i];
			minIndex = i;
		}
	}

	return minIndex;
}

void GrafSolucio::dijkstra(size_t node1, size_t node2, std::vector<double>& dist, std::vector<size_t>& anterior)
{
	// Inicialitzem vectors 
	std::vector<bool> visited(m_numNodes, false);
	dist.resize(m_numNodes, 100000000000000);
	anterior.resize(m_numNodes, -1);

	dist[node1] = 0;
	anterior[node1] = node1;

	for (size_t i = 0; i < m_numNodes - 1; i++)
	{
		size_t index = minDistance(dist, visited);
		visited[index] = true;

		if (index == node2)
			return;
		for (size_t j = 0; j < m_numNodes; j++)
		{
			if (m_matriuAdj[index][j] != 0 && !visited[j] && dist[index] + m_matriuAdj[index][j] < dist[j])
			{
				dist[j] = dist[index] + m_matriuAdj[index][j];
				anterior[j] = index;
			}
		}
	}
}

void GrafSolucio::camiMesCurt(const Coordinate& desde, const Coordinate& a, std::stack<Coordinate>& cami)
{
	size_t pos1 = -1;
	size_t pos2 = -1;

	double desdeLat = desde.lat;
	double desdeLon = desde.lon;
	double aLat = a.lat;
	double aLon = a.lon;

	bool fnd = false;
	size_t i = 0;

	while (i < m_numNodes && !fnd)
	{
		double lat = m_nodes[i].lat;
		double lon = m_nodes[i].lon;

		if (lat == desdeLat && lon == desdeLon)
		{
			pos1 = i;
			fnd = true;
		}
		else
			i++;
	}

	fnd = false;
	i = 0;

	while (i < m_numNodes && !fnd)
	{
		double lat = m_nodes[i].lat;
		double lon = m_nodes[i].lon;

		if (lat == aLat && lon == aLon)
		{
			pos2 = i;
			fnd = true;
		}
		else
			i++;
	}

	if (pos1 != -1 && pos2 != -1)
	{
		std::vector<size_t> anterior;
		std::vector<double> dist;

		dijkstra(pos1, pos2, dist, anterior);

		size_t it = pos2;
		cami.push(m_nodes[pos2]);

		while (it != pos1)
		{
			cami.push(m_nodes[anterior[it]]);
			it = anterior[it];
		}
	}
}