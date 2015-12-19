#include "Point.h"
#include <cstdlib>
using namespace std;


Point::Point()
{
	x=rand()%21-10;
	y=rand()%21-10;
//	show();
	cout<<"Fonction de Constructeur Point exécutée"<<endl;
}

Point::Point(float a,float b)
{
	x=a;
	y=b;
//	show();
	cout<<"Fonction de Constructeur Point exécutée"<<endl;
}

Point::Point(const Point& p)
{
	x=p.x;
	y=p.y;
	cout<<"Fonction de Constructeur par copie Point exécutée"<<endl;
}

int Point::show()
{
	cout<<"Les coordonées du Point: x= "<<this->getX()<<" y= "<<this->getY()<<endl;
	cout<<"Fonction de Point show exécutée"<<endl;
	return 0;
}

Point::~Point()
{
	cout<<"Fonction de Destructeur Point exécutée"<<endl;
}

float Point::getX() const
{
	return this->x;
}

float Point::getY() const
{ 
        return this->y;
}

float Point::writeX(float a)
{
	this->x=a;
	return this->x;
}

float Point::writeY(float b) 
{ 
        this->y=b;
        return this->y;
}

void Point::shift(float a,float b)
{
	this->x=this->x+a;
	this->y=this->y+b;
}

void Point::moveTo(float a,float b)
{
        this->x=a;
        this->y=b;
}

void Point::moveTo(Point* pt)
{
	pt->x=0;
	pt->y=0;
	this->x=pt->x;
	this->y=pt->y;
}

void Point::moveTo(const Point& r) 
{
	this->x=r.getX();
	this->y=r.getY();
}

void Point::copyTo(Point* pt) const
{
	pt->writeX(this->x);
	pt->writeY(this->y);
}

void Point::copyTo(Point& pt) const
{ 
        pt.writeX(this->x);
        pt.writeY(this->y);
}

Point& Point::operator+ (const Point& A){
	this->writeX(this->getX()+A.getX());
	this->writeY(this->getY()+A.getY());
	return *this;
}

Point& Point::operator= (const Point& A){
        if (this!=&A){
		x=A.x;
		y=A.y;
		cout<<"operateur= pour Point executé"<<endl;
	}
        return *this;
}

std::ostream& operator<< (std::ostream& flot,const Point& p){
	flot<<"( "<<p.getX()<<" , "<<p.getY()<<" )";
	return flot;
}
