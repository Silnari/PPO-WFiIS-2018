#pragma once
#include "Rational.h"
#include <iostream>

// zmienilem w main w lini 60 w dodawaniu (a+6) na (a+6.0) za Pana zgoda

using namespace std;

class Rational;

class Complex{
public:
	/*
	* @ konstruktor domyslny
	*/
	Complex() = default;
	/*
	* @ konstruktor 
	* @ przyjmuje double i wpisuje do _re i _im
	*/
	Complex(double re =0, double im = 0): _re(re), _im(im) {}
	/*
	* @ konstruktor 
	* @ "bierze" Rational i robi z niego Complex (przypisuje do _re)
	*/
	Complex(Rational r): _re(r) {}
	/*
	* @ fn - Im
	* @ return: czesc zespolona z liczby
	*/
	double Im() const{
		return _im;
	}
	/*
	* @ fn - Print
	* @ brief: wypisuje liczbe zespolona
	*/
	void Print() const{
		if(_im != 0) cout << _re << " +i" << _im << endl;
		else cout << _re << endl;
	}
	/*
	* operator konwertujacy do double
	*/
	operator double(){
		return static_cast<double>(_re);
	}
	/*
	* @ fn - operator+
	* @ return: suma liczb zespolonych
	*/
	Complex operator+(Complex toAdd);
	/*
	* @ fn - operator+
	* @ dodaje przeloadowanie bo nie wiem czemu konwersja nie dziala :c
	* @ return: suma liczby zespolonej z rzeczywista
	*/
	Complex operator+(double toAdd);
	/*
	* @ fn - operator*
	* @ return: iloczyn liczb zespolonych
	*/
	Complex operator*(Complex toPomnozyc);
	/*
	* @ fn - Modulo
	* @ return: modul z liczby zespolonej
	*/
	static double Modulo(Complex a);
private:
	double _re;
	double _im;
};