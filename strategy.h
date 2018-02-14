#ifndef __STRATEGY_H__
#define __STRATEGY_H__
#include "container.h"
#include "composite.h"
#include <iostream>
#include <vector>
#include <list>
#include <math.h>
#include <cmath>

using namespace std;

class Sort {
    public:
        /* Constructors */
        Sort();

        /* Pure Virtual Functions */
        virtual void sort(Container* container) = 0;
};

#endif // __STRATEGY_H__
