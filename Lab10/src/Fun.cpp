#include "Fun.h"
#include <iostream>

int Fun::i = 0;
float Fun::suma = 0;

Rational Fun::Add(Rational r1, Rational r2) {
	Rational temp;
	temp._m = r1._m * r2._m;
	temp._l = r1._l * r2._m + r2._l * r1._m;
	return temp;
}

Rational Fun::Multiply(Rational r1, Rational r2) {
	Rational temp;
	temp._m = r1._m * r2._m;
	temp._l = r1._l*r2._l;
	return temp;
}

Rational Fun::Divide(Rational r1, Rational r2) {
	Rational temp;
	temp._m = r1._m * r2._l;
	temp._l = r1._l * r2._m;
	return temp;
}

void Fun::Average(Rational r) {
	suma += (float)r._l / (float)r._m;
	i++;
}

Rational Fun::Average() {
	Rational temp;
	temp._l = suma;
	temp._m = i;
	return temp;
}