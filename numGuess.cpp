/*******************************************
**Author: Makenzie Brian
**Date: July 12, 2015
**Description: Gets player to guess number by telling them if they are too high or too low
*******************************************/

#include <iostream>

using namespace std;

int main() {

	int x=0;
	int numGuesses=0;
	int num, guess;
	
	cout << "Enter a number for the player to guess." << endl;
	cin >> num;

	cout << "Enter your guess." << endl;

	while(x<1) {
		cin >> guess;
		
		if(guess < num) {
			cout << "Too low - try again." << endl;
			numGuesses++;
			//decides if guess to low, adds one to number of guesses
		}

		else if(guess > num) {
			cout << "Too high - try again." << endl;
			numGuesses++;
			//decides if guess to high, adds one to number of guesses
		}
		else {
			numGuesses++;
			x++;
			//guess is correct, exits loop
		}
	}
	cout << "You guessed it in " << numGuesses << " tries." << endl;
	
	return 0;
}
