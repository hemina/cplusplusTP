/*!\file Polygon.h
 * \author Mina He
 * \date 27/11/2015
 */
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// class Polygon représenter une région fermée de l'espace, définie par une liste de points dans un espace bi-dimensionnel
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef _POLYGON_
#define _POLYGON_
#include "Point.h"
#include <string>
#include <sstream>
using namespace std;

class Polygon
{
private:
	int nbSommets;
        Point* tab;
public:
	Polygon();
	Polygon(int nbSommets);
	Polygon(const Polygon& pl);
	~Polygon();
	void show();
	void SetVertex(int ind, float a, float b);
//	Point GetVertex(int ind);
	Point GetVertex(int ind);
	void shift(float a,float b);
	Polygon& operator+= (Point p);
	Polygon& operator= (const Polygon& pl);
	Polygon& operator= (Polygon&& pl);
	Point& operator[] (int ind);
	string showMemory();
	Polygon(Polygon&& pl);
};

#endif


