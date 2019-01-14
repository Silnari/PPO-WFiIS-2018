#pragma once
#include <iostream>

class Point2D{
public:
	explicit Point2D(float x = 0, float y = 0): _x(x), _y(y) {}

	float GetX() const{ return _x;}
	float GetY() const{ return _y;}

	Point2D operator++(int){
		Point2D tmp = *this;
		++_x; ++_y;
		return tmp;
	}

	Point2D& operator++(){
		++_x; ++_y;
		return *this;
	}

	Point2D& operator--(){
		_x--; _y--;
		return *this;
	}

	Point2D operator--(int){
		Point2D tmp = *this;
		--_x; --_y;
		return tmp;
	}

	friend std::ostream& operator<<(std::ostream& o, const Point2D& pkt);

	Point2D operator+(Point2D& toAdd);
	friend Point2D operator+(float xD, Point2D& toAdd);
private:
	float _x;
	float _y;
};