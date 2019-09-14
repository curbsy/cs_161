/*****************************************************
**Author: Makenzie Brian
**Date: July 12, 2015
**Description: Sum all the intergers between two numbers inclusively
*****************************************************/

#include <iostream>

using namespace std;

int main() {

	int first, second, higher, lower;
	int total=0;

	cout << "Please enter two intergers." << endl;
	cin >> first;
	cin >> second;	

	if(first > second) {
		higher = first;
		lower = second;
	}
	else {
		higher = second;
		lower = first;
	}
	//determines which interger is higher, making it easier by only needing one for loop

	for(int x=lower; x<=higher; x++) {
		total =(total + x);
		//adds up all intergers to the higher number
	}
	cout << "The sum of the values in that range is:" << endl;
	cout << total << endl;

	return 0;
}
