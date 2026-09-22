#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

string name;
string itemName;
int quantity;
double unitPrice;




int main() {
    cout << "What's your name? " << endl;
    getline(cin,name);

    cout << "Hey " << name << "! Welcome to my Mini Reciept C++ program!" << endl;

    cout << "Whats's the name of the item? " << endl;
    getline(cin,itemName);

    cout << "What's the price of the item? " << endl;
    cin >> unitPrice;

    cout << "How many did you get? " <<endl;
    cin >> quantity;

    double subtotal = 0.0;
    subtotal = unitPrice * quantity;

    cout << "Total Price: " << subtotal << endl;

    return 0;    
}






