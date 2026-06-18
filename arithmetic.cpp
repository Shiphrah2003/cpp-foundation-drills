#include <iostream>
#include <string>

using namespace std;

int main() {
    // Declaring different types of variables
string itemName = "Developer Laptop";    
int quantity = 3;
double priceperItem = 849.99;
bool inStock = true;
char currencySymbol = '$';

// doing arithmetic calculations
double totalCost = quantity * priceperItem;
 
// Displaying the data
cout << "--- Inventory Item Details ---" << endl;
cout << "Item:  "<<itemName << endl;
cout << "Price" << currencySymbol << priceperItem << endl;
cout << " Quantity ordered: " << quantity << endl;
cout << " Total Cost: " << currencySymbol << totalCost << endl;

// a quick lookout of how boolean values print (1 for true and 0 for false)

cout << "Is in stock? (1 = Yes, 0 = No): " << inStock << endl;

return 0;

}