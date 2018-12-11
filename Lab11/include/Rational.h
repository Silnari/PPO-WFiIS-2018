#pragma once
#include <iostream>

using namespace std;

class Rational{
public:
	/*
	* @ konstruktor domyslny
	*/
	Rational() = default;
	/*
	* @ konstruktor 
	* @ przyjmuje liczby i wpisuje do licznika i mianownika
	*/
	Rational(int l, int m = 1): _l(l), _m(m) {}
	/*
	* @ fn - Print
	* @ brief: wypisuje ulamek
	*/
	void Print() const{
		cout << _l << "/" << _m << endl;
	}
	/*
	* operator konwertujacy do double
	*/
	operator double(){
		return static_cast<double>(_l)/static_cast<double>(_m);
	}
private:
	int _l;
	int _m;
};