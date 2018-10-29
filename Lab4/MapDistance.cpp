#include "MapDistance.h"


void movePoint(MapPoint &mp, double szer, double dl){
	mp.x+=szer;
	mp.y+=dl;
}

MapPoint inTheMiddle(MapPoint mp1, MapPoint mp2, const char text[]){
	MapPoint mp;
	mp.nazwa = text;
	mp.x = (mp1.x+mp2.x)/2;
	mp.y = (mp1.y+mp2.y)/2;
	return mp;
}

void clear(MapPoint &mp){
	// :c
}
