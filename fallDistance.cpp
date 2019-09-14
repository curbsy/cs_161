/**********************************************************
**Author: Makenzie Brian
**Date: July 19, 2015
**Description: Gives distance an object falls based on a time
**********************************************************/

//#include <iostream>

//using namespace std;

void fallDistance(double &t, double &d){
	d = ( .5 * 9.8 ) * ( t * t );
}
	//puts into formula based on values from main

//int main(){
	//double time, distance;

	//cout << "Put in a time." << endl;
	//cin >> time;
	
	//fallDistance( time, distance );
	
	//cout << "The distance fallen would be " << distance << " meters." << endl;

//return 0;
//}
//you can put in a negative time here but in reality time is not negative
