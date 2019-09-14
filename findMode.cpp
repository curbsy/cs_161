/****************************************************
**Author: Makenzie Brian
**Date: August 2, 2015
**Descrption: Finds mode given array of ints and size of array
****************************************************/

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

/*****************************************************
Function: findMode
Description: sorts array, finds highest occuring ints, stores in vector called mode
Parameters: int (array) and int (size)
Pre-conditions: given a filled array and size of the array and you do not need to check that they correspond
Post-conditions: a returned vector with modes of array
*****************************************************/
vector<int> findMode (int array[], int size) {
	sort(array, array + size);
	
	vector<int> mode;
	int count = 1; //number of times a values has appeared
	int maxOccur = 0; //maximum occurances of mode

	for(int loops = 0; loops < (size); loops++) {
		if(array[loops] == array[loops+1]) {
			count++;
			//cout << "pair found" << endl;			

			if(count > maxOccur) {
				maxOccur =  count;
				mode.erase(mode.begin(), mode.end()); //changes vector to new mode if greater occurances
				mode.push_back(array[loops]);
				//cout << "count>maxOccur" <<endl;
			}
			else if(count == maxOccur) {
				mode.push_back(array[loops]); //adds more modes if same occurances
				//cout << "count=maxOccur" <<endl;
			}
		}
		else {
			count = 1; //resets counter for each loop
			//cout << "pair not found" << endl;
		}
	}
	return mode; 
}
/*int main() {
	int *exampleArray;
	int exampleSize;
	vector<int> exampleMode;

	cout << "How many intergers would you like to enter?" << endl;
	cin >> exampleSize;

	exampleArray = new int[exampleSize];	

	for(int i=0; i<exampleSize; i++) {		
		cout << "Enter an interger." << endl;
		cin >> exampleArray[i];
	}

	exampleMode = findMode(exampleArray, exampleSize);

	for(int j=0; j<exampleMode.size(); j++) {
		cout << "The mode is: " << exampleMode.at(j) << endl;
	}
	return 0;
}*/
