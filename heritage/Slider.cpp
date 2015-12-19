#include "Slider.h"
using namespace std;

Slider::Slider(){
	n=0;
	cout<<"constructeur slider exécuté"<<endl;
}

Slider::~Slider(){}

int Slider::getN(){
	return n;
}
