/*!\file Widget.h
 * \author Mina He
 * \date 08/12/2015
 */
////////////////////////////////////////////////////////////////////////
/// class Widget
////////////////////////////////////////////////////////////////////////

#ifndef _WIDGET_
#define _WIDGET_
#include <iostream>

using namespace std;

class Widget
{
protected:
	double x,y;
	Widget();
	Widget(double a, double b);
	Widget(const Widget& w);
	Widget& operator= (const Widget& w);
	~Widget();
public:
	double getX();
	double getY();
	void writeX(double a);
	void writeY(double b);
};

#endif
