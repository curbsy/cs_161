/********************************************
**Author: Makenzie Brian
**Date: August 16, 2015
**Description: member functions for book class
*********************************************/

#include "Book.hpp"
#include <string>

using namespace std;

/***********************************************
**Function: Book
**Description: default constructor
**Parameters: none
**Pre-Conditions:
**Post-Conditions:
************************************************/
Book::Book() {
}

/***********************************************
**Function: Book
**Description: creates a book
**Parameters: string, string, string
**Pre-Conditions: must have variables
**Post-Conditions: book is created and put on shelf
************************************************/
Book::Book(string idc, string t, string a) {
	title = t;
	author = a;
	location = ON_SHELF;
	checkedOutBy = NULL;
	requestedBy = NULL;

}

/***********************************************
**Function: getCheckOutLength
**Description: gets checkout length
**Parameters: none
**Pre-Conditions: must have set checkout length and variables
**Post-Conditions: returns check out length
************************************************/
int Book::getCheckOutLength() {
	return CHECK_OUT_LENGTH;
}

/***********************************************
**Function: getIdCode
**Description: gets idCode of book
**Parameters: none
**Pre-Conditions: must have variables
**Post-Conditions: returns idCode of book
************************************************/
string Book::getIdCode() {
	return idCode;
}

/***********************************************
**Function: getTitle
**Description: gets title of book
**Parameters: none
**Pre-Conditions: have variables
**Post-Conditions: returns title of book
************************************************/
string Book::getTitle() {
	return title;
}

/***********************************************
**Function: getAuthor
**Description: gets author of book
**Parameters: none
**Pre-Conditions: have variables
**Post-Conditions: returns author of book
************************************************/
string Book::getAuthor() {
	return author;
}

/***********************************************
**Function: getLocation
**Description: gets location of book
**Parameters: none
**Pre-Conditions: have variables
**Post-Conditions: returns loctaion of book
************************************************/
Locale Book::getLocation() {
	return location;
}

/***********************************************
**Function: setLocation
**Description: sets location of book using enum Locale
**Parameters: Locale
**Pre-Conditions: must set Locale, have variables
**Post-Conditions: location of book is set
************************************************/
void Book::setLocation(Locale locat) {
	  location = locat;   /??
}

/***********************************************
**Function: getCheckedOutBy
**Description: gets patron who checked out book
**Parameters: none
**Pre-Conditions: have variables
**Post-Conditions: returns patron who checked out book
************************************************/
Patron* Book::getCheckedOutBy() {
	return checkedOutBy;
}

/***********************************************
**Function: setCheckedOutBy
**Description: sets patron who checked out book
**Parameters: Patron*
**Pre-Conditions: have variables, have patrons
**Post-Conditions: patron who checked out book is set
************************************************/
void Book::setCheckedOutBy(Patron* pat) {
	checkedOutBy = pat
}

/***********************************************
**Function: getRequestedBy
**Description: gets patron who requested the book
**Parameters: none
**Pre-Conditions: have variables
**Post-Conditions: returns patron who requested the book
************************************************/
Patron* Book::getRequestedBy() {
	return requestedBy;
}

/***********************************************
**Function: setRequestedBy
**Description: sets patron who requested the book
**Parameters: Patron*
**Pre-Conditions: ahve variables, have patrons
**Post-Conditions: the patron who requested the book is set
************************************************/
void Book::setRequestedBy(Patron* p) {
	requestedBy = p;
}

/***********************************************
**Function: getDateCheckedOut
**Description: gets dateCheckedOut
**Parameters: none
**Pre-Conditions: ahve variables
**Post-Conditions: returns dateCheckedOut
************************************************/
int Book::getDateCheckedOut() {
	return dateCheckedOut;
}

/***********************************************
**Function:setDateCheckedOut
**Description: sets dateCheckedOut
**Parameters: int
**Pre-Conditions: have variables
**Post-Conditions: dateCheckedOut is set
************************************************/
void Book::setDateCheckedOut(int dat) {
	dateCheckedOut = dat;
}
