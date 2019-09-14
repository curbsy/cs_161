/********************************************************
**Author: Makenzie Brian
**Date: July 19, 2015
**Description: Sorts 3 integers into ascending order
********************************************************/

//#include <iostream>

//using namespace std;

void smallSort( int &first, int &second, int &third ) {
	//determine if first higher then second and assign
	if (first > second){
		int temp = first;
		first = second;
		second = temp;
	}
	//determine if first higher than third and assign
	if (first > third){
		int temp = first;
		first = third;
		third = temp;
	}
	//determine if second higher third and assign
	if (second > third){
		int temp = second;
		second = third;
		third = temp;
	}
}
 
//int main(){
	//int a, b, c;

	//cout << "Enter three intergers." << endl;
	//cin >> a;
	//cin >> b;
	//cin >> c;

	//smallSort(a, b, c);
	
	//cout << a << ", " << b << ", " << c << endl;	

//return 0;
//}
//it was unclear if the numbers were meant to be chosen or not but it is not part of the function so I uncluded the possibility
