/***************************************************
** Author: Makenzie Brian
** Date: July 5, 2015
** Description: Gives average of five numbers
***************************************************/

#include <iostream>

int main()  {

	float firstNumber;
	float secondNumber;
	float thirdNumber;
	float fourthNumber;
	float fifthNumber;
	float average;	
	int averagingNumber=5;

	std::cout << "Please enter five numbers." << std::endl;
	std::cin >> firstNumber;
	std::cin >> secondNumber;
	std::cin >> thirdNumber;
	std::cin >> fourthNumber;
	std::cin >> fifthNumber;
	//takes in the five amounts
	
	average = (firstNumber + secondNumber + thirdNumber + fourthNumber + fifthNumber)/averagingNumber;
	//takes an average
	
	std::cout << "The average of those numbers is:" << std::endl;
	std::cout << average << std::endl;

	return 0;
}
