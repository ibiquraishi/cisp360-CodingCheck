/* 
Ibrahim Quraishi
9/21/26
CISP 360
This Program asks the user for an item name, quantity, and unit price, then calculates and displays a mini receipt.
*/



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

    cout << endl;

    cout << "Hey " << name << "! Welcome to my Mini Reciept C++ program!" << endl;

    cout << endl;
    cout << endl;

    cout << "Whats's the name of the item? " << endl;
    getline(cin,itemName);


    cout << "What's the price of the item? " << endl;
    cin >> unitPrice;


    cout << "How many did you get? " <<endl;
    cin >> quantity;
    

    double subtotal = 0.0;
    subtotal = unitPrice * quantity;

    
    cout << endl;
    cout << endl;

    cout << fixed << setprecision(2);
    cout<<"--------------------------------------------------------"<<endl;
    
    cout << setw(20)<< name <<"'s Mini Reciept:"<<endl;
    cout << "Item" << setw(15) << "UnitPrice" << setw(10) << "Subtotal" << endl;
    
    cout << itemName << setw(10) << unitPrice << setw(10) << subtotal << endl;

    
    cout<<"--------------------------------------------------------"<<endl;

    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    return 0;    
}







