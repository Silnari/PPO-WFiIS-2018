#pragma once
#include <iostream>
#include "Device.h"

class TelewizorLCD : public Device{
public:
	TelewizorLCD(int x =0, int y=0, std::string str = "Telewizor"): Device(x,y,str) {}

	//funkcja wyswietlajaca blok znakow o podanej szerokosci i wysokosci, nadpisuje funkcje wirtualna znajdujaca sie w klasie device
	void Wyswietl(const Urzadzenie* urzadzenie) const override;
};