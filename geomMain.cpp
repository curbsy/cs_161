#include <iostream>
#include "LineSegment.hpp"

using namespace std;

int main() {
	Point p3, p4;

	double XCoor1, XCoor2, YCoor1, YCoor2;

	cout<<"enter x1"<<endl;
	cin>>XCoor1;
	p3.setXCoord(XCoor1);

	cout<<"enter x2"<<endl;
	cin>>XCoor2;
	p4.setXCoord(XCoor2);

	cout<<"enter y1"<<endl;
	cin>>YCoor1;
	p3.setYCoord(YCoor1);

	cout<<"enter y2"<<endl;
	cin>>YCoor2;
	p4.setYCoord(YCoor2);
	
	cout<<"P1: " <<p3.getXCoord()<<","<<p3.getYCoord()<<endl;
	cout<<"P2: " <<p4.getXCoord()<<","<<p4.getYCoord()<<endl;

	double distance=p3.distanceTo(p4);
	
	LineSegment line1(p3, p4);

	cout<<"The dist between is " <<distance<<endl;
	cout<<"Length is " <<line1.length() <<endl;
	cout<<"slope is " <<line1.slope() <<endl;	

	return 0;
}








