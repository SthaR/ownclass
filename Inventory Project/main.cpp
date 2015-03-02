/*Program: Main file
Author: Ruby Shrestha
Date: 27th Feb 2015*/

#include <iostream>
#include "Inventory.h"
using namespace std;

int main(){
	//Inventory obj1("Tresemme", "Shampoo", 50);
	Inventory obj[3];
	Inventory obj1("Tresemme", "Shampoo", 10);
	Inventory *ptr_obj2;
	Inventory obj2;
	ptr_obj2=&obj2;
	
	obj1.purchase(8);
	obj1.lost(10);
	obj1.damaged(8);
	
	if (!(obj1.isStockEmpty()))
		obj1.sales(4);
	else
		cout << "Stock Empty! Cannot sell.";
	
	obj1.purchase(2);

	arrobj[0]=obj1;
	arrobj[0].displayStockMessage();
	
	ptr_obj2->setItemName("Detol");
	ptr_obj2->setItemCategory("Hand Sanitizer");
	ptr_obj2->setItemStock(3);
	ptr_obj2->purchase(2);
	
	arrobj[1]=*ptr_obj2;
	arrobj[1].displayStockMessage();
}
