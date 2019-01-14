#include "Point2DAverage.h"

Point2D Point2DAverage::operator()(Point2D p){
	_x += p.GetX();
	_y += p.GetY();
	_l++;
	return Point2D(_x/static_cast<double>(_l), _y/static_cast<double>(_l));
}

void Point2DAverage::Reset(){
	_x = 0;
	_y = 0;
	_l = 0;
}
