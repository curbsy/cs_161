/***********************************
** Author: Makenzie Brian
** Date: July 5, 2015
** Description: Coverts Celsius temperature to Fahrenheit
***********************************/

#include <iostream>

using namespace std;

int main() 
{

	float cTemp;
	float fTemp;

	cout << "Please enter a Celsius temperature." << endl;
	cin >> cTemp;
	
	fTemp = (1.8*cTemp)+32;

	cout << "The equivalent Fahrenheit temperature is:" << endl;
	cout << fTemp << endl;

	return 0;
}

