/*******************************************************
**Author: Makenzie Brian
**Date: July 12, 2015
**Description: Gives min and max of a variable number of intergers
*******************************************************/

#include <iostream>

using namespace std;

int main() {
 
	int integers, x, num, min, max;

	cout << "How many intergers would you like to enter?" << endl;
	cin >> integers;
	cout << "Please enter " << integers << " integers." << endl;

	for(x=0; x<integers; x++) {
		cin >> num;
		
		if(num > max) {
			max = num;
			//only stores number if it is above previous max
		}
		if(num < min) {
			min = num;
			//only stores number if it is below previous min
		}
	}


	cout << "min: " << min << endl;
	cout << "max: " << max << endl;

	return 0;
}
