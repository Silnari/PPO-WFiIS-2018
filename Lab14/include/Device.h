#pragma once 
#include "Urzadzenie.h"
#include <string>

class Device{
public:
	//konstruktor, przyjmuje 2 inty (szerokosc i wysokosc) oraz nazwe urzadzenia do wyswietlania
	Device(int x , int y , std::string str): _x(x), _y(y), _nazwa(str) {}
	// virtual ~Device() = default;
	// funkcja wirtualna wypisujaca blok znakow
	virtual void Wyswietl(const Urzadzenie* urzadzenie) const = 0;
protected:
	int _x;
	int _y;
	std::string _nazwa;
};