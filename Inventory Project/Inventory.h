/*Program: Inventory Class Interface
Author: Ruby Shrestha
Date: 27th Feb 2015*/

#include <iostream>
#include <string>
using namespace std;

class Inventory{
		public:
			
			Inventory(string name="", string category="", int stock=0);			
			void setItemName(string);			
			string getItemName();			
			void setItemCategory(string );			
			string getItemCategory();			
			void setItemStock(int );			
			int getItemStock();			
			void sales(int );
			void purchase(int );		
			void lost(int );			
			void damaged(int );	
			void displayStockMessage();						
			
		private:
			string itemName;
			string itemCategory;
			int stock;
			
};
