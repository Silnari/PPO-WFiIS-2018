#include "Point2D.h"
#include <iostream>

std::ostream& operator<<(std::ostream& o, const Point2D& pkt){
	o << "(" << pkt.GetX() << ", " << pkt.GetY() << ")";
	return o;
}

Point2D Point2D::operator+(Point2D& toAdd){
	return Point2D(toAdd._x + _x, toAdd._y + _y);
}

Point2D operator+(float xD, Point2D& toAdd){
	return Point2D(toAdd._x + xD, toAdd._y + xD);
}
