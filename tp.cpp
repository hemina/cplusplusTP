#include <iostream>
using namespace std;
#include "Point.h"
#include "Polygon.h"
#include "Compare.h"
#include "Matrix.h"
#include <cstdlib>
#include <string>
#include <algorithm>
int f1(int a){
	a++;
	return a;
}

int f2(int& a){
//	cout<<"in f2 "<<a++<<endl;
	a++;
        return a;
}

int f3(const int& a){
	int b=a;
	b++;
        return b;
}
/*
int g(int a){
	a=a*2;
        return a;
}
*/
int g(int& a){
        a=a*2;
        return a;
}

int g(const int& a){
        int b=a;
        b=b*2;
        return b;
}

int g(int&& a){
        a=a*2;
        return a;
}
/*
class Compare{
//	int a,b;
public:
//	Compare(int a,int b): _a,_b{}
	Compare(){}
	bool operator() (int a,int b)const{
	return a < b? true : false;
	}
}

Point* randPoint(){
	Point* pt=new Point(rand()%21-10,rand()%21-10);
	return pt;
}
*/
int main()
{
	/*
	cout<<"Bonjour le monde!"<<endl;
	Point* pt=new Point(1,2);
	Point pts(5,6); 
	cout<<"coordonées pt: x= "<<pt->getX()<<" y= "<<pt->getY()<<endl;
	pts.writeX(3);
	pts.writeY(4);
	pts.show();
	pts.shift(10,5);
	cout<<"avant copyTo"<<endl;
	pts.show();
	pt->copyTo(&pts);
//	pt->show();
	cout<<"après copyTo"<<endl;
	pts.show();
	delete pt;
	Point* pt1;
	pt1=&pts;
	(*pt1).show();
	pt1->writeX(100);
	pts.show();
	Point& r=pts;	// différence de manipulation entre pointeur et réference, ici c'est obligé d'initialiser la réference
	r.show();
	r.writeX(200);
	pts.show();
	pt->show();
	cout<<"avant copyTo"<<endl;
	r.show();
	pt->copyTo(r);
	cout<<"après copyTo"<<endl;
	r.show();
	pt->show();
//	delete pt1; 	il y aura un problème parce qu'il n'y a rien à supprimer vu qu'il n'y a pas de "new" pour créer une espace de mémoire
	
	int k=10;
	const int kc=20;
 	cout<<"g(2)"<<g(2)<<endl;
	cout<<"g(k)="<<g(k)<<endl;
	cout<<"g(kc)="<<g(kc)<<endl;
	cout<<"g(f1(k))="<<g(f1(k))<<endl;
	
	for(int i=0;i<100;i++)
	{
	cout<<rand()%21-10<<endl;
	}
	
	Point* pt=randPoint();
	pt->show();
	delete pt;	
	
	Polygon ply(5);
//	Polygon* pply=new Polygon(3);
//	ply.show();
	ply.SetVertex(0,100,50);
//	ply.show();
	Point& p=ply.GetVertex(2);
	p.show();
	ply.show();
//	pply->shift(20,50);
//	pply->show();
//	delete pply;	
	
	Point pt(1,2);
	Point& r=pt;
	Point pt1(50,20);
	pt1=pt1+r;
	pt1.show();	

	Point p(10,10);
	cout<<p<<endl;
	Polygon ply(3);
	ply+=p;
	ply.show();
	ply[1].writeX(100);
	cout<<ply[1].getX()<<endl;

	//class-function Compare
	Compare cp;
	cout<<cp(10,2)<<endl;

	//lambda function
	auto compare=[] (int a, int b){ return a<b? true:false;};
	cout<<compare(10,2)<<endl;
	
	const Matrix m(4,10);
//	m(1,2)=3;
//	cout<<m(1,1)<<endl;
	m.show();

	Point pt(2,4);
	Point cp(pt);
	cp.show();
	pt.show();
	pt.moveTo(10,20);
	cp.moveTo(pt);
	pt.show();
	cp.show();
	
//	question63: obligé d'initialisation? A quoi sert-il de redéfinir l'opératoeur= vu que le compilateur appelle le constructeur par copie automatiquement? affectation fait la même chose?
	Polygon pl(3);
	Polygon cp(5);
//        cout<<pl.showMemory()<<endl;
//        cout<<cp.showMemory()<<endl;
        pl.show();
        cp.show();
	cp=pl;
//	cout<<pl.showMemory()<<endl;
//	cout<<cp.showMemory()<<endl;
	pl.show();
	cp.show();	
	
	cp=move(pl);
	
	double aMax=3;
	double aMin=0;
	double aPas=0.1;
	int nbA=(aMax-aMin)/aPas;
	cout<<"nbA="<<nbA<<endl;
	*/
	int J0 [30][5000];
	J0[3][1]=0;
	for(int i=0;i<30;i++){
		for(int j=0;j<500;j++){
			J0[i][j]=2;
		}
	}
	J0[3][1]=10;
	cout<<"J0[3][1]="<<J0[3][1]<<" ,J0[3][5]="<<J0[3][5]<<endl;
//	cout<<"min= "<<std::min_element(J0[3][])<<endl;
	//move semantics
//	Polygon pl(3);
//	Polygon tmp=move(pl);
//	tmp.show();
	return 0;

}
