/******************************************************
**Author:Makenzie Brian
**Date:Jully 26, 2015
**Description:Sets the values for two points (functions only)
******************************************************/

#include <iostream>
#include <cmath>
#include "Point.hpp"

using namespace std;

Point::Point() {
	setXCoord(0);
	setYCoord(0);
}

void Point::setXCoord(double xValue) {
	x = xValue;
}

void Point::setYCoord(double yValue) {
	y = yValue;
}

double Point::getXCoord() {
	return x;
}

double Point::getYCoord() {
	return y;
}

double Point::distanceTo(const Point& endPoint) {
	double x1, x2, y1, y2;
	
	x1 = x;
	x2 = endPoint.x;
	y1 = y;
	y2 = endPoint.y;
	
	double distance = sqrt(pow((x1-x2),2)+pow((y1-y2),2));
	return distance;
}

