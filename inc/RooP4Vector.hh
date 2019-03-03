#ifndef Roo_P4Vector_HH
#define Roo_P4Vector_HH

#include <iostream>
#include <fstream>
#include <math.h>
#include "TNamed.h"

#if defined(USEROOT) || defined(__CINT__)
#else
#endif
#include "RooP4Vector.hh"

namespace RooP4Vector{
    Double_t dot(const Double_t *a1, const Double_t *a2);
    void calt1(const Double_t daug1[], const Double_t daug2[],
            Double_t t1[]) ;
    void calt2(const Double_t daug1[], const Double_t daug2[],
            Double_t t2[][4]);
    const Double_t G[4][4] = {1,0,0,0, 0,-1,0,0, 0,0,-1,0, 0,0,0,-1 };
};

#endif
