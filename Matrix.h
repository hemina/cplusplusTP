#ifndef _MATRIX_
#define _MATRIX_

class Matrix{
	int nbR,nbC;
	double* val;
public:
	Matrix(int _nbR, int _nbC);
	~Matrix();
	double& operator() (int a,int b);
	void show() const;
};

#endif
