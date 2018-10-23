#pragma once
#include "MapPoint.h"

using namespace std;

void movePoint(MapPoint &mp, double szer, double dl);

MapPoint inTheMiddle(MapPoint mp1, MapPoint mp2, char text[]);

void clear(MapPoint &mp);