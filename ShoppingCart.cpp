/*************************************************
**Author: Makenzie Brian
**Date: August 9, 2015
**Description: member functions for shopping cart class
*************************************************/

#include "ShoppingCart.hpp"

/*************************************************
**Function: shoppingCart
**Description: default constructor
**Parameters: none
**Pre-Conditions: need variable of type shoppingCart
**Post-Conditions: have a shopping cart to use
*************************************************/

ShoppingCart::ShoppingCart() {
	arrayEnd = 0;

	for(int i=0; i<100; i++) {
		shoppingCart[i] = NULL;
	}
}

/************************************************
**Function: void addItem
**Description: puts item in shopping cart array
**Parameters: Item  *
**Pre-Conditions: must already have an item with set values
**Post-Conditions: puts an item in the shopping cart and arrayEnd is larger
************************************************/
void ShoppingCart::addItem(Item *name) {
	shoppingCart[arrayEnd] = name;
	arrayEnd++;
}

/***********************************************
**Function: double totalPrice
**Description: adds item price accounting for quantity
**Parameters: none
**Pre-Conditions: must have array of items
**Post-Conditions: gives a price of total items in sshopping cart
***********************************************/

double ShoppingCart::totalPrice() {
	double price = 0.0;
	for(int j=0; j<arrayEnd; j++) {
		price += shoppingCart[j]->getPrice() * shoppingCart[j]->getQuantity();
	}
	return price;
}
