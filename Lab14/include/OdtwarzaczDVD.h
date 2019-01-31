#pragma once
#include "Urzadzenie.h"

class OdtwarzaczDVD : public Urzadzenie{
public:
	//konstruktor
	OdtwarzaczDVD(const char l, std::string str = "OdtwarzaczDVD"): Urzadzenie(l,str) {}

};