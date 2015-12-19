#include "Matrix.h"
#include <iostream>
using namespace std;

Matrix::Matrix(int _nbR,int _nbC){
	nbR=_nbR;
	nbC=_nbC;
	val= new double[nbR*nbC];
}

Matrix::~Matrix(){
	delete val;
}

void Matrix::show() const{
	for(int i=0;i<nbR;++i){
		for(int j=0;j<nbC;++j){
			std::cout<<val[i*nbC+j]<<" ";
		}
		std::cout<<endl;
	}
}

double& Matrix::operator() (int a,int b){
	return val[(a-1)*nbC+b-1];
}
