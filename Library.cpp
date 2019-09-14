/********************************************
**Author: Makenzie Brian
**Date: August 16, 2015
**Description: member functions for book class
****************************нн*****************/

#include "Library.hpp"

using namespace std;

/***********************************************
**Function: Library
**Description: default constructor
**Parameters: none
**Pre-Conditions: have variables
**Post-Conditions: makes library
************************************************/
Library::Library() {
}

/***********************************************
**Function: addBook
**Description: adds book to holdings
**Parameters: Book*
**Pre-Conditions: have variables
**Post-Conditions: book is in holdings
************************************************/
void Library::addBook(Book* bo) {
	holdings.push_back(bo)	
}

/***********************************************
**Function: addPatron
**Description: adds patron to members
**Parameters: Patron*
**Pre-Conditions: have variables
**Post-Conditions: patron is in members
************************************************/
void Library::addPatron(Patron*) {
	Patron aPatron(pID, pName);
	members.push_back(aPatron);
}

/***********************************************
**Function: checkOutBook
**Description: checks out a book to a patron
**Parameters: string, string
**Pre-Conditions: have variables and values
**Post-Conditions: book is checked out to patron
************************************************/
string Library::checkOutBook(string pID, string bID) {
	if(find(members.begin(), members.end(), pID) != members.end  ) {
		cout << "Patron not found." << endl;
	}
	else if(find(holdings.begin(), holdings.end(), bID) != holdings.end  ){
		cout << "Book not found." < endl;
	}
	else if(bID.location == ON_HOLD_SHELF) {
 		cout << "book on hold by other person" <<endl;
	}
	else if(bID.location == CHECKED_OUT) {
 		cout << "book already checked out" <<endl;
	}
	else {
		setLocation(CHECKED_OUT);
		setCheckedOutBy(pID);
		setDateCheckedOut(currentDate);
		addBook(bID);
		if(getRequestedBy.requestedBy == pID) { 
					requestedBy =NULL;			
		}
		cout << "check out successful" << endl;
	}
}

/***********************************************
**Function: returnBook
**Description: returns book to library
**Parameters: string
**Pre-Conditions: have variables
**Post-Conditions: book is in library
************************************************/
string Library::returnBook(string bID) {
	if(find(holdings.begin(), holdings.end(), bID) != holdings.end  ){
		cout << "Book not found." < endl;
	}
	else if(else if(bID.location == ON_SHELF) {
 		cout << "book already in library" <<endl;
	}
	else {
		setCheckedOutBy(pID);
		removeBook(bID);
		if(getRequestedBy == NULL) {
			location = ON_SHELF;
		}
		else {
			loctaion = ON_HOLD_SHELF;
		}
		cout << "return successful" << endl;
		
	}
}

/***********************************************
**Function: requestBook
**Description: patron requests book
**Parameters: string, string
**Pre-Conditions: have variables, have values
**Post-Conditions: been is requested by patron
************************************************/
string Library::requestBook(string pID, string bID) {
	if(find(members.begin(), members.end(), pID) != members.end  ) {
		cout << "Patron not found." << endl;
	}
	else if(find(holdings.begin(), holdings.end(), bID) != holdings.end  ){
		cout << "Book not found." < endl;
	}
	else if(getRequestedBy.requestedBy == NULL) { 
		cout << "Book on hold by other patron" << endl;
	else {
		setRequestedBy(pID);
		if(location == ON_SHELF) {
			location = ON_HOLD_SHELF;
		}
		cout << "request successful" <<endl;
	}

}

/***********************************************
**Function: payFine
**Description: changes patrons fine based on payment
**Parameters: string, double
**Pre-Conditions: have variables and preexisting fine
**Post-Conditions: fine is paid
************************************************/
string Library::payFine(string pID, double payment) {
	if(find(members.begin(), members.end(), pID) != members.end  ){
		amendFine;
		return "payment successful";

	}
	else {
		return "patron not found";
	}
}

/***********************************************
**Function: currentDate
**Description: initailizes current date to 0
**Parameters: none
**Pre-Conditions: have variables
**Post-Conditions: current date is set to zero
************************************************/
void Library::currentDate() {
	currentDate = 0;
}

/***********************************************
**Function: incrementCurrentDate
**Description: increments current date and all fines
**Parameters: none
**Pre-Conditions: have variables and values
**Post-Conditions: fines and date are updated
************************************************/
void Library::incrementCurrentDate() {
	currentDate++;
	for(int i=0; i<members.size(); i++) {
		vector<Book*> checkedOut = members[i].getCheckedOutBooks();
		if(!checkedOut.empty()) {
			for(int x=0; x<checkOut.size();x++) {
				int length = (currentDate - (*checkedOut[x].getDateCheckedOut());
				if (length < CHECK_OUT_LENGTH) {
					members[i].amendFine(0.1);
				}
			}
		}
	}
}

/***********************************************
**Function: getPatron
**Description: gets patron with pointer
**Parameters: string
**Pre-Conditions: have variables
**Post-Conditions: pointer to patron
************************************************/
Patron* Library::getPatron(string pID) {
	return pID;
}

/***********************************************
**Function: getBook
**Description: gets book with pointer
**Parameters: string
**Pre-Conditions: have variables
**Post-Conditions: pointer to book
************************************************/
Book* Library::getBook(string bID) {
	return bID;
}
