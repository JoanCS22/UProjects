#ifndef _AVALUADOR_BALL_TREE_H
#define _AVALUADOR_BALL_TREE_H

// Substitueix l'estructura NonImplementedBallTree per la teva implementacio del BallTree
// entre les linies [35,40], al final d'aquest codi font.

#include "Common.h"
#include "BallTree.h"
#include <vector>
#include <list>

struct NonImplementedBallTree {
	void mostraMissatge() {
		std::cout << "==== SI US PLAU, INSTANCIA CORRECTAMENT LA PLANTILLA DEL AVALUADOR ====" << std::endl;
	}
	void preOrdre(std::vector<std::list<Coordinate>>& out) { mostraMissatge(); }

	void inOrdre(std::vector<std::list<Coordinate>>& out) { mostraMissatge(); }

	void postOrdre(std::vector<std::list<Coordinate>>& out) { mostraMissatge(); }

	Coordinate nodeMesProper(Coordinate pdi, Coordinate& Q, BallTree* bola_arrel) { mostraMissatge(); return Coordinate{0.0, 0.0 }; }

	void construirArbre(const std::vector<Coordinate>& datapoints) { mostraMissatge(); }
	BallTree* getArrel() { mostraMissatge(); return nullptr; };
};

template<class T>
class AvaluadorBallTree {
	private:			
		T* m_tree;

	public:
		AvaluadorBallTree() {
			m_tree = new T();
		}

		void cridaConstruirArbre(const std::vector<Coordinate>& datapoints) {
			m_tree->construirArbre(datapoints);
		}

		void cridaRecorregutPreordre(std::vector<std::list<Coordinate>>& out) {
			m_tree->preOrdre(out);
		}

		void cridaRecorregutInordre(std::vector<std::list<Coordinate>>& out) {
			m_tree->inOrdre(out);
		}

		void cridaRecorregutPostordre(std::vector<std::list<Coordinate>>& out) {
			m_tree->postOrdre(out);
		}

		BallTree* cridaGetArrel() {
			return m_tree->getArrel();
		}

		Coordinate nodeMesProper(Coordinate pdi, Coordinate& Q, BallTree* bola_arrel) {
			return m_tree->nodeMesProper(pdi, Q, bola_arrel);
		}

};


// Substitueix del seguent template l'estructura NonImplementedBallTree per la teva classe
// on tens implementat el BallTree amb els metodes preOrdre, inOrdre, postOrdre, nodeMesProper, construirArbre i getArrel.

AvaluadorBallTree<BallTree>* creaAvaluadorBallTree() {
	 return new AvaluadorBallTree<BallTree>();
}

#endif


