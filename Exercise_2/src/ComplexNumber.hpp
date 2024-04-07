#pragma once
#include <iostream>
#include <cmath>
using namespace std;

struct ComplexNumber{
    double parteReale;
    double parteImmaginaria;

    ComplexNumber()=default;

    ComplexNumber(double a, double b){
        parteReale=a;
        parteImmaginaria=b;
    }
};

ostream& operator<<(ostream& os, const ComplexNumber& z);
ComplexNumber operator+(const ComplexNumber& z1, const ComplexNumber& z2);
bool operator== (const ComplexNumber& z1,const ComplexNumber& z2);
ComplexNumber coniugato(const ComplexNumber& z);

