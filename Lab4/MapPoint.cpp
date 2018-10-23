#include "MapPoint.h"

MapPoint construct(char text[], double szer, double dl){
	MapPoint *mp = new MapPoint;
	mp->nazwa = text;
	mp->x = szer;
	mp->y = dl;
	return *mp;
}

void print(MapPoint mp){
	cout<<"Position of"<<mp.nazwa<<". Latitide: "<<mp.x<<". Longitude: "<<mp.y<<endl;
}