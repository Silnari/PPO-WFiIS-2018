#pragma once 
#include<iostream>

using namespace std;

struct MapPoint{
	const char* nazwa;
	double x;
	double y;
};

MapPoint construct(const char text[], double szer, double dl);

void print(MapPoint mp);

