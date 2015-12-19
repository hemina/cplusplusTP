#include "Widget.h"

Widget::Widget(){
	x=0;
	y=0;
	cout<<"constructeur widget exécuté"<<endl;
}

Widget::Widget(double a, double b){
	x=a;
	y=b;
}

Widget::Widget(const Widget& w){
	x=w.x;
	y=w.y;
}

Widget& Widget::operator= (const Widget& w){ 
	x=w.x;
	y=w.y;
	return *this;
}

Widget::~Widget(){}

double Widget::getX(){
	return x;
}

double Widget::getY(){ 
        return y;
}

void Widget::writeX(double a){
	x=a;
}

void Widget::writeY(double b){
        y=b;
}

