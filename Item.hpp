/*********************************************
**Author: Makenzie Brian
**Date: August 9, 2015
**Description: class for Item.cpp functions
*********************************************/

//include guards
#ifndef ITEM_HPP
#define ITEM_HPP

#include <iostream>
#include <string>

using namespace std;

class Item {
	private:
		string name;
		double price;
		int quantity;
	public:
		//default constructor prototype
		Item();
		//constructor prototype
		Item(string, double, int);
		//mutator functions
		void setName(string);
		void setPrice(double);
		void setQuantity(int);
		//accessor functions
		string getName();
		double getPrice();
		int getQuantity();
};

#endif
