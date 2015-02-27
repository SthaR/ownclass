/*Program: Main file
Author: Ruby Shrestha
Date: 27th Feb 2015*/

#include <iostream>
#include "Inventory.h"
using namespace std;

int main(){
	//Inventory obj1("Tresemme", "Shampoo", 50);
	Inventory obj[3];
	obj[0].setItemName("Tresemme");
	obj[0].setItemCategory("Shampoo");
	obj[0].setItemStock(50);
	obj[0].purchase(8);
	obj[0].sales(4);
	obj[0].lost(1);
	obj[0].damaged(1);
	obj[0].displayStockMessage();
}