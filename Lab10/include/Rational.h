#pragma once
#include "Fun.h"

using namespace std;

class Fun;

class Rational {
	friend class Fun;
public:
	/*
	* @konstruktor
	* @brief - przypisuje wartosci
	*/
	Rational(int l, int m = 1) : _l(l), _m(m) {}
	Rational() = default;
	/*
	* @fn - Print
	* @brief - wypisuje ulamek na ekran
	*/
	void Print() const;
	/*
	* @konwerter ulamka na float
	*/
	operator float() const {
		return (float)_l / (float)_m;
	}

private:
	float _l;
	float _m;
};