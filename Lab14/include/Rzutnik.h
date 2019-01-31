#pragma once
#include <iostream>
#include "Device.h"

class Rzutnik : public Device{
public:
	//konstruktor
	Rzutnik(int x =0, int y=0, std::string str = "Rzutnik"): Device(x,y,str) {}

	//funkcja wyswietlajaca blok znakow o podanej szerokosci i wysokosci, nadpisuje funkcje wirtualna znajdujaca sie w klasie device
	void Wyswietl(const Urzadzenie* urzadzenie) const override;
};