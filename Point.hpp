/********************************************************
**Author:Makenzie Brian
**Date:July 26, 2015
**Description:Declarations for Point.cpp functions
********************************************************/

#include <iostream>

using namespace std;

class Point {
	private:
		double x;
		double y;
	public:
		//constructor
		Point();
		//mutator functions
		void setXCoord(double);
		void setYCoord(double);
		//accessor functions
		double getXCoord();
		double getYCoord();
		double distanceTo(const Point&);
};
