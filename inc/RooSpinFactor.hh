#ifndef Roo_SpinFactor_HH
#define Roo_SpinFactor_HH

#include <iostream>
#include <fstream>
#include <math.h>
#include "TNamed.h"

#if defined(USEROOT) || defined(__CINT__)
#else
#endif


using namespace std;
namespace RooSpinFactor{
    Double_t SpinFactor(const Int_t & angL, const Double_t *p4_1,
            const Double_t *p4_2, const Double_t *p4_3);
};

#endif
