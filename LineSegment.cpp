/***********************************************************
**Author:Makenzie Brian
**Date:July 26, 2015
**Description:functions for linesegment
***********************************************************/

#include <iostream>
#include "LineSegment.hpp"

using namespace std;

LineSegment::LineSegment (Point p3, Point p4) {
	setEnd1(p3);
	setEnd2(p4);
}

void LineSegment::setEnd1(Point p3) {
	p1.setXCoord(p3.getXCoord());
	p1.setYCoord(p3.getYCoord());
}

Point LineSegment::getEnd1() {
	return p1;
}

void LineSegment::setEnd2(Point p4) {
	p2.setXCoord(p4.getXCoord());
	p2.setYCoord(p4.getYCoord());
}
 
Point LineSegment::getEnd2() {
	return p2;
}

double LineSegment::length() {
	return p1.distanceTo(p2);
}

double LineSegment::slope() {
	return((p2.getYCoord()-p1.getYCoord())/(p2.getXCoord()-p1.getXCoord()));
}


