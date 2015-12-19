#ifndef _SLIDER_
#define _SLIDER_
#include "Widget.h"

class Slider: public Widget{
	int n;
public:
        Slider();
        ~Slider();
	int getN();
};
#endif

