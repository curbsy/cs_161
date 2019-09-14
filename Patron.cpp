/********************************************
**Author: Makenzie Brian
**Date: August 16, 2015
**Description: member functions for patron class
*********************************************/

#include "Patron.hpp"
#include <string>

using namespace std;

/***********************************************
**Function: Patron
**Description: default constructor
**Parameters: none
**Pre-Conditions:
**Post-Conditions:
************************************************/
Patron::Patron() {
}

/***********************************************
**Function: Patron
**Description: creates a patron
**Parameters: none
**Pre-Conditions: have variables
**Post-Conditions: patron is made
************************************************/
Patron::Patron(string idn, string n) {
	idNum = idn;
	name = n;
}

/***********************************************
**Function: getIdNum
**Description: gets idNum
**Parameters: none
**Pre-Conditions: have variables
**Post-Conditions: returns idNum
************************************************/
string Patron::getIdNum() {
	return idNum;
}

/***********************************************
**Function: getName
**Description: gets name
**Parameters: none
**Pre-Conditions: have variables
**Post-Conditions: returns name
************************************************/
string Patron::getName() {
	return name;
	//works for non-unique names?
}

/***********************************************
**Function: getCheckedOutBooks
**Description: gets vector checkedOutBooks
**Parameters: none
**Pre-Conditions: have variables
**Post-Conditions: returns vector checkedOutBooks
************************************************/
vector<Book*> Patron::getCheckedOutBooks() {
	return checkedOutBooks;
}

/***********************************************
**Function: addBook
**Description: adds specified book to checkedOutBooks
**Parameters: Book*
**Pre-Conditions: have variables, vector and books
**Post-Conditions: book is added to checkedOutBooks
************************************************/
void Patron::addBook(Book* b) {
	checkedOutBooks.push_back(b);  
}

/***********************************************
**Function: removeBook
**Description: removes specified book from checkedOutBooks
**Parameters: Book*
**Pre-Conditions: have variables, vector, and books
**Post-Conditions: book is removed from checkedOutBooks
************************************************/
void Patron::removeBook(Book* B) {
	for(int i=0; i < checkedOutBooks.size(); i++) {
		if(checkedOutBooks[i] == b) {
			checkedOutBooks.erase(checkedOutBooks.begin() +i)
			break;
		}
	}
}

/***********************************************
**Function: getFineAmount
**Description: 
**Parameters: none
**Pre-Conditions:
**Post-Conditions:
************************************************/
double Patron::getFineAmount() {
	return fineAmount;
}

/***********************************************
**Function: amendFine
**Description: 
**Parameters: double
**Pre-Conditions:
**Post-Conditions:
************************************************/
void Patron::amendFine(double amount) {
	if(amount > 0) {
		fineAmount += amount;
	}
	else {
		fineAmount -= amount;
	}
}
 
