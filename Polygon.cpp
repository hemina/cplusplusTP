
#include "Polygon.h"
#include <iostream>
#include <string.h>

Polygon::Polygon(){}

Polygon::Polygon(int _nbSommets){
	nbSommets=_nbSommets;
	tab=new Point[_nbSommets];
	cout<<"l'adresse de l'objet Polygon dans le constructeur: "<<tab<<endl;
}

Polygon::Polygon(const Polygon& pl){
	nbSommets=pl.nbSommets;
	tab=new Point[nbSommets];
	memcpy(tab,pl.tab,nbSommets);
	cout<<"constructeur par copie executé"<<endl;
}

Polygon::Polygon(Polygon&& pl){ 
	nbSommets=pl.nbSommets;
	tab=pl.tab;
	pl.nbSommets=0;
	pl.tab=NULL;
	cout<<"constructeur par move executé"<<endl;
}

Polygon::~Polygon(){
	cout<<"l'adresse de l'objet Polygon dans le destructeur: "<<this->tab<<endl;
	delete[] tab;
}

void Polygon::show(){
	for(int i=0;i<nbSommets;i++){
		cout<<"sommet "<<i<<endl;
		tab[i].show();
	}
}

void Polygon::SetVertex(int ind, float a, float b){
	(this->tab[ind]).writeX(a);
	(this->tab[ind]).writeY(b);
}

/*
Point Polygon::GetVertex(int ind){
	return this->tab[ind];
}
*/
Point Polygon::GetVertex(int ind){
	Point& r=this->tab[ind];
        return r;
}

void Polygon::shift(float a,float b){
	for(int i=0;i<nbSommets;i++){
		SetVertex(i,tab[i].getX()+a,tab[i].getY()+b);
	}
}

Polygon& Polygon::operator+= (Point p){
	for(int i=0;i<nbSommets;i++){
                SetVertex(i,tab[i].getX()+p.getX(),tab[i].getY()+p.getY());
        }
	return *this;
}

Point& Polygon::operator[] (int ind){
	return tab[ind];
}

Polygon& Polygon::operator= (const Polygon& pl){
	if (this!=&pl){
	        nbSommets=pl.nbSommets;
		delete []tab;
		tab=new Point[nbSommets];
	        for(int i=0;i<nbSommets;i++){
			tab[i]=pl.tab[i];
		}
        	cout<<"opétateur= pour Polygon executé"<<endl;
	}
	return *this;
}

Polygon& Polygon::operator= (Polygon&& pl){
        nbSommets=pl.nbSommets;
        delete []tab;
        tab=new Point[nbSommets];
        for(int i=0;i<nbSommets;i++){
                tab[i]=pl.tab[i];
        }
	pl.nbSommets=0;
	pl.tab=NULL;
        cout<<"opétateur= move pour Polygon executé"<<endl;
        return *this;
}

string Polygon::showMemory(){
	stringstream adr; 
	adr<<"l'adresse en memoire de l'objet Polygon: "<<this<<endl<<"l'adresse en memoire du tableau de sommets: "<<tab;
	return adr.str();
}

