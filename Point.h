/*!\file Point.h
 * \author Mina He
 * \date 24/11/2015
 */
////////////////////////////////////////////////////////////////////////
/// class Point représenter un point dans un espace bi-dimensionnel
////////////////////////////////////////////////////////////////////////

#ifndef _POINT_
#define _POINT_
#include <iostream>

//using namespace std;

class Point
{
private:
	float x;
	float y;
public:
	int show();
	float getX() const;
	float getY() const;
	float writeX(float a);
	float writeY(float b);
	void shift(float a,float b);
	void moveTo(float a,float b);
	void moveTo(Point* pt);
	void moveTo(const Point& r) ;
        void copyTo(Point* pt) const;
        void copyTo(Point& r) const;
	Point();
        Point(float a,float b);
	Point(const Point& p);
	Point& operator+(const Point& A);
	Point& operator= (const Point& A);
//	std::ostream& operator<< (std::ostream& flot,const Point& p);
        ~Point();
};
std::ostream& operator<< (std::ostream& flot,const Point& p);
#endif
