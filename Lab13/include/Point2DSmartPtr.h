#pragma once
#include "Point2D.h"

class Point2DSmartPtr{
public:
	Point2DSmartPtr(Point2D *p = NULL) { _ptr = p; }  

	~Point2DSmartPtr() { delete(_ptr); } 

	Point2D &operator *() {  return *_ptr; } 

private:	
	Point2D *_ptr;
};