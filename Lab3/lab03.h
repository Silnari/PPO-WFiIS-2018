#include <stdio.h>
#include <stdlib.h>
#include <iostream>

typedef int rozmiarCiagu;

typedef struct ciag{
	float *tab;
}ciag;

typedef float(* operacja)(ciag, int);

ciag InicjalizujCiagGeometryczny (int rozmiarx, float iloraz1);
void Wypisz(ciag geometryczny1, int rozmiar);
float Suma(ciag geometryczny1, int rozmiar);
float Iloczyn(ciag geometryczny1, int rozmiar);
float Min(ciag geometryczny1, int rozmiar);
float Max(ciag geometryczny1, int rozmiar);
void WykonajIWypisz (operacja p, ciag geometryczny1, int rozmiar);
void UsunCiagi();