/*********************************************************
**Author:Makenzie Brian
**Date:July 26, 2015
**Description:class for line segment (declarations only)
*********************************************************/

#include <iostream>
#include "Point.hpp"

using namespace std;

class LineSegment {
	private:
		Point p1;
		Point p2;
	public:
		//constructor
		LineSegment(Point p3, Point p4);
		//mutator functions
		void setEnd1(Point p3);
		void setEnd2(Point p4);
		//accessor functions
		Point getEnd1();
		Point getEnd2();
		double length();
		double slope();
};



