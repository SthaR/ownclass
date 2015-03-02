/*Program: Inventory Class Implementation
Author: Ruby Shrestha
Date: 27th Feb 2015*/

#include <iostream>
#include <string>
#include "Inventory.h"
using namespace std;

Inventory::Inventory(string name, string category, int stock){
				setItemName(name);
				setItemCategory(category);
				setItemStock(stock);
}
			
void Inventory:: setItemName(string name){
				itemName=name;
}
			
string Inventory:: getItemName(){
				return itemName;
}
			
void Inventory:: setItemCategory(string category){
				itemCategory=category;
}
		
		
string Inventory::getItemCategory(){
				return itemCategory;
}		
			
void Inventory::setItemStock(int stk){
				stock=stk;
}
			
int Inventory::getItemStock(){
				return stock;
}
						
void Inventory::sales(int quantity){
				setItemStock(getItemStock()-quantity);
}
		
void Inventory::purchase(int quantity){
				setItemStock(getItemStock()+quantity);
}
			
void Inventory::lost(int quantity){
				setItemStock(getItemStock()-quantity);
}
			
void Inventory::damaged(int quantity){
				setItemStock(getItemStock()-quantity);
}

void Inventory::displayStockMessage(){
				cout << "The current stock of " << getItemName() << " belonging to category " << getItemCategory() << " is: " << getItemStock();
}
			
bool Inventory::isStockEmpty(){
	return (getItemStock()==0?true:false);
}

void Inventory::deduct(int quantity){
	setItemStock(getItemStock()-quantity);
}

void Inventory::increment(int quantity){
	setItemStock(getItemStock()+quantity);
}

Inventory::~Inventory(){
	cout << "\nDestroyed!!!";
}
