#include "Compare.h"

Compare::Compare(){}

bool Compare::operator() (int a,int b)const{
        return a < b? true : false;
        }


