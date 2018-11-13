#pragma once
#include <iostream>
#include <cmath>

class MapDistance;

class MapPoint{
public:

	/*
	* @fn - set_latitude
	* @brief - ustawia latitude
	*/
	void set_latitude(double x);

	/*
	* @fn - set_longitude
	* @brief - ustawia longitude
	*/
	void set_longitude(double y);

	/*
	* @fn - print
	* @brief -	wypisuje punkt
	*/
	void print();

	/*
	* @fn - distance
	* @brief -	oblicza odleglosc z jednego miasta do drugiego
	* @param -  punkt 
	* @return -	zwraca odlegosc punktu od ktorego wywolujemy 
	* 			do punktu ktorego przekazujemy do metody
	*/
	MapDistance distance(MapPoint mp);

	/*
	* @fn - set_coordinates
	* @brief -	ustawia longitude i latitude punktu
	*/
	void set_coordinates(const double y1, const double y2);

	/*
	* @fn - farthest
	* @brief -	znajduje najdalszy punkt
	* @param - 	punkty ktore badamy
	* @return - zwraca punkt dalej polozony 
	*			od tego ktorego wywolujemy metode
	*/
	MapDistance farthest(MapPoint mp1, MapPoint mp2);

private:
	double _longitude;
	double _latitude;
};


class MapDistance{
	friend class MapPoint;
public:

	/*
	* @konstruktor MapDistance
	* @brief -	ustawia domyslna wartosc dystansu (0,0)
	*/
	MapDistance();

	/*
	* @fn - print
	* @brief -	wypisuje dystans
	*/
	void print();

private:
	double _x;
	double _y;
};
