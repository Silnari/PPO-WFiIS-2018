#pragma once
#include "Point2D.h"
class Point2D;

class Point2DAverage{
public:
	
	Point2DAverage(): _x(0), _y(0), _l(0) {}

	Point2D operator()(Point2D p);

	void Reset();
	
private:
	float _x;
	float _y;
	int _l;
};