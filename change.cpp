/**********************************
** Author: Makenzie Brian
** Date: July 5, 2015
** Description: Outputs how many of each type of coin would represent that amount with the fewest total number of coins
**********************************/

#include <iostream>
#include <cmath>

using namespace std;
//eliminates need for stds everywhere

int main()
{
	int cent;
	int quarter;
	int remQuarter;
	int dime;
	int remDime;
	int nickle;
	int remNickle;
	int penny;

	cout << "Please enter an amount in cents less than a dollar." << endl;
	cin >> cent;
	
	cout << "Your change will be:" << endl;

	quarter = cent/25;
	cout << "Q: " << quarter << endl;
	//displays number of quarters
	remQuarter = cent-(quarter*25);
	//calculates amount of cents left after quarters
	
	dime = remQuarter/10;
	cout << "D: " << dime << endl;
	//displays number of dimes
	remDime = remQuarter-(dime*10);
	//calculates amount of cents left after dimes	

	nickle = remDime/5;
	cout << "N: " << nickle << endl;
	//displays number of nickles
	remNickle = remDime-(nickle*5);
	//calculates amount of cents left after nickle
	
	penny = remNickle;
	cout << "P: " << penny <<endl;


	return 0;
}
