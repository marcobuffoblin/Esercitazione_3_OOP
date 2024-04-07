#include "ComplexNumber.hpp"
#include <iostream>
using namespace std;


ostream& operator<<(ostream& os, const ComplexNumber& z)
{
    if (z.parteImmaginaria<0 && z.parteReale!=0)
        os<<z.parteReale<<z.parteImmaginaria<<"i";
    else if (z.parteImmaginaria>0 && z.parteReale!=0)
        os<<z.parteReale<<"+"<<z.parteImmaginaria<<"i";
    else if (z.parteReale==0 && z.parteImmaginaria!=0)
        os<<z.parteImmaginaria<<"i";
    else if (z.parteReale!=0 && z.parteImmaginaria==0)
        os<<z.parteReale;
    else
        os<<0;
    return os;
}


ComplexNumber operator+(const ComplexNumber& z1, const ComplexNumber& z2)
{
    double reale=z1.parteReale+z2.parteReale;
    double immaginaria=z1.parteImmaginaria+z2.parteImmaginaria;
    ComplexNumber z(reale,immaginaria);
    return z;
}


bool operator== (const ComplexNumber& z1,const ComplexNumber& z2)
{
    double reale=(z1.parteReale-z2.parteReale)*(z1.parteReale-z2.parteReale);
    double immaginaria=(z1.parteImmaginaria-z2.parteImmaginaria)*(z1.parteImmaginaria-z2.parteImmaginaria);
    double distanza= sqrt(reale+immaginaria);
    double tol=10e-10;
    if (distanza<tol)
    {
        return true;
    }
    else
    {
        return false;
    }
}


ComplexNumber coniugato(const ComplexNumber& z)
{
    if(z.parteImmaginaria!=0)
    {
        double reale=z.parteReale;
        double immaginaria=-z.parteImmaginaria;
        ComplexNumber zconiug(reale,immaginaria);
        return zconiug;
    }
    else
    {
        return z;
    }
}

