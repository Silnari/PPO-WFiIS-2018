#pragma once
#include "Urzadzenie.h"
class Komputer : public Urzadzenie{
public:
	//konstruktor
	Komputer(const char l, std::string str = "Komputer"): Urzadzenie(l,str) {}

};