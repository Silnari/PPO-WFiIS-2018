#include "MapPoint.h"

void MapPoint::set_latitude(double x){
	this->_latitude = x;
}

void MapPoint::set_longitude(double y){
	this->_longitude = y;
}

void MapPoint::print(){
	std::cout<<"Point: ("<<this->_latitude<<", "<<this->_longitude<<")"<<std::endl;
}

void MapPoint::set_coordinates(const double y1, const double y2){
	this->_latitude = y1;
	this->_longitude = y2;
}

MapDistance MapPoint::farthest(MapPoint mp1, MapPoint mp2){
	MapDistance temp;
	double krk_porto = sqrt(pow(std::abs(this->_longitude - mp1._longitude),2)+pow(std::abs(this->_latitude - mp1._latitude),2));
	double krk_irkutsk = sqrt(pow(std::abs(this->_longitude - mp2._longitude),2)+pow(std::abs(this->_latitude - mp2._latitude),2));
	if(krk_porto>krk_irkutsk){
		temp._y = mp1._longitude;
		temp._x = mp1._latitude;
	}
	else{
		temp._y = mp2._longitude;
		temp._x = mp2._latitude;
	}
	return temp;
}

MapDistance MapPoint::distance(MapPoint mp){
	MapDistance temp;
	temp._y = std::abs(this->_longitude - mp._longitude);
	temp._x = std::abs(this->_latitude - mp._latitude);
	return temp;
}



void MapDistance::print(){
	std::cout<<"Distance: ("<<this->_x<<", "<<this->_y<<")"<<std::endl;
}

MapDistance::MapDistance(){
	this->_x = 0.0;
	this->_y = 0.0;
}
