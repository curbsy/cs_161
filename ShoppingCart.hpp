/*************************************************************
**Author: Makenzie Brian
**Date: August 9, 2015
**Description:
*************************************************************/

#include "Item.hpp"

#ifndef SHOPPINGCART_HPP
#define SHOPPINGCART_HPP

class ShoppingCart {
	private:
		Item *shoppingCart[100];
		int arrayEnd;
	public:
		//default constructor
		ShoppingCart();
		//functions
		void addItem(Item *name);
		double totalPrice();
};

#endif
