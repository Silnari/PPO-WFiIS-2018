#pragma once
#include "Rational.h"

class Rational;

class Fun {
public:
	/*
	* @fn - Add
	* @brief - dodaje dwa ulamki
	*/
	static Rational Add(Rational r1, Rational r2);
	/*
	* @fn - Multiply
	* @brief - mnozy dwa ulamki
	*/
	static Rational Multiply(Rational r1, Rational r2);
	/*
	* @fn - Divide
	* @brief - dzieli liczbe przez ulamek
	*/
	static Rational Divide(Rational r1, Rational r2);
	/*
	* @fn - Average
	* @brief - dodaje ulamek do tablicy
	*/
	static void Average(Rational r);
	/*
	* @fn - Average
	* @brief - liczy srednia z tablicy
	*/
	static Rational Average();
private:
	static float suma;
	static int i;
};