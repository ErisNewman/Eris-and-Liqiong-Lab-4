// Eris Lab 4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
    //variables
    string name;
    char itemcode;
    int quantity;
    double price;
    char member;
    double discount;
    //getting the response
    cout << " Enter the name of your Food";
    getline(cin, name);
    cout << "Enter the item code";
    cin >> itemcode;
    cout << "Enter the amount you want";
    cin >> quantity;
    cout << "Enter the Unit Price";
    cin >> price;
    cout << "Are you a member? y/n";
    cin >> member;
//  cashier notes
string note;
cout << " Cashier Notes";
cin.ignore();
getline(cin, note);

    //math
    double total;
    double total2;
    total = quantity * price;

    discount = total * 0.10;
total2 = total - discount;
    
//

    // display
    cout << left << setw(24) << "Item:" << name << endl;
    cout << left << setw(25) << "Item Code:" << itemcode << endl;
    cout << left << setw(25) << "Amount:" << quantity << endl;
    cout << left << setw(25)<< fixed << setprecision(2) << "Total:" << total << endl;
    cout << left << setw(25) << "Membership:" << member << endl;
if (member == 'y' || member == 'Y') {
       cout << left << setw(25) << "Membership Discount:" << total2 << endl; 
        
    }
cout << right << setw(25) << "Cashier Notes:" << note << endl;



}


