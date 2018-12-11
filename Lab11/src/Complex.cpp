#include "Complex.h"
#include <iostream>
#include <cmath>

using namespace std;

double Complex::Modulo(Complex a){
	return sqrt(pow(a._re,2) + pow(a._im,2));
}

Complex Complex::operator+(Complex toAdd){
	return Complex(_re + toAdd._re, _im + toAdd._im);
}

Complex Complex::operator+(double toAdd){
	return Complex(_re + toAdd, _im);
}

Complex Complex::operator*(Complex toPomnozyc){
	return Complex((_re * toPomnozyc._re) - (_im * toPomnozyc._im) , (_re * toPomnozyc._im) + (_im * toPomnozyc._re));
}