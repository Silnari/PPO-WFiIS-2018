#pragma once
#include "Rational.h"

class Rational;

class Fun{
public:
        /**
        !! chcialem zrobic skracanie ulamkow ale mi niestety nie starczylo czasu !!
        **/
        /*
        * @fn - Add
        * @brief - dodaje dwa ulamki
        */
        static Rational Add(Rational r1, Rational r2);
        /*
        * @fn - Add
        * @brief - dodaje liczbe do ulamku
        */
        static Rational Add(Rational r1, int toAdd);
        /*
        * @fn - Multiply
        * @brief - mnozy dwa ulamki
        */
        static Rational Multiply(Rational r1, Rational r2);
        /*
        * @fn - Divide
        * @brief - dzieli liczbe przez ulamek
        */
        static Rational Divide(int Number, Rational r2);
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
};
