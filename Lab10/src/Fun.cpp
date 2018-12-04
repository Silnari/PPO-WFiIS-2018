#include "Fun.h"
#include <iostream>

static Rational tab[2];
static int i = 0;

Rational Fun::Add(Rational r1, Rational r2){
        Rational temp;
        temp._m = r1._m * r2._m;
        temp._l = r1._l * r2._m + r2._l * r1._m;
        return temp;
}

Rational Fun::Add(Rational r1, int toAdd){
        Rational temp;
        temp._m = r1._m ;
        temp._l = r1._l * toAdd + toAdd + r1._l;
        return temp;
}

Rational Fun::Multiply(Rational r1, Rational r2){
        Rational temp;
        temp._m = r1._m * r2._m;
        temp._l = r1._l*r2._l;
        return temp;
}

Rational Fun::Divide(int Number, Rational r2){
        Rational temp;
        temp._m = r2._l;
        temp._l = Number * r2._m;
        return temp;
}

void Fun::Average(Rational r){
        tab[i++] = r;
}

Rational Fun::Average(){
        float suma = 0;
        for(int j = 0; j<i;j++){
                suma += (float)tab[j]._l/(float)tab[j]._m;
        }
        Rational temp;
        temp._l = suma;
        temp._m = i;
        return temp;

}
