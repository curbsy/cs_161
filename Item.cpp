/*********************************************************
**Author: Makenzie Brian
**Date: August 9, 2015
**Description: member functions for item class
*********************************************************/

#include "Item.hpp"

/********************************************************
**Function: Item
**Description: default constructor
**Parameters: none
**Pre-Conditions: must have variables
**Post-Conditions: sets variables to default values
********************************************************/
Item::Item() {		
	setName("");
	setPrice(0.0);
	setQuantity(0);
}

/*******************************************************
**Function: Item
**Description: creates an item
**Parameters: string, double, int
**Pre-Conditions: need variables
**Post-Conditions: an item is made
*******************************************************/
Item::Item(string nam, double pric, int quan) {
	name = nam;
	price = pric;
	quantity = quan;
}

/*************************************************
**Function: setName
**Description: sets name of item
**Parameters: string
**Pre-Conditions: have variables
**Post-Conditions: name of item is set
*************************************************/ 
void Item::setName(string nam) {
	name=nam;
}

/*************************************************
**Function: setPrice
**Description: sets price of item
**Parameters: double
**Pre-Conditions: have variables
**Post-Conditions: price of item is set
*************************************************/ 
void Item::setPrice(double pric) {
	price=pric;
}

/*************************************************
**Function: setQuantity
**Description: sets quantity of item
**Parameters: int
**Pre-Conditions: have variables
**Post-Conditions: quantity of item is set
*************************************************/ 
void Item::setQuantity(int quan) {
	quantity=quan;
}
	
/*************************************************
**Function: getName
**Description: gets name of item
**Parameters: none
**Pre-Conditions: have variables
**Post-Conditions: name of item is returned
*************************************************/ 
string Item::getName() {
	return name;
}

/*************************************************
**Function: getPrice
**Description: gets price of item
**Parameters: none
**Pre-Conditions: have variables
**Post-Conditions: price of item is returned
*************************************************/ 
double Item::getPrice() {
	return price;
}

/*************************************************
**Function: getQuantity
**Description: gets quantity of item
**Parameters: none
**Pre-Conditions: have variables
**Post-Conditions: quantity of item is returned
*************************************************/ 
int Item::getQuantity() {
	return quantity;
}
