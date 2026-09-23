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

    //math
    double total;
    total = quantity * price;
    //if (member == 'y') {
        //total * 0.90 = discount;

    //}

    // display
    cout << left << setw(15) << "Item:" << name << endl;
    cout << left << setw(15) << "Item Code:" << itemcode << endl;
    cout << left << setw(15) << "Amount:" << quantity << endl;
    cout << left << setw(15) << "Total:" << total << endl;
    cout << left << setw(15) << "Membership:" << member << endl;
    //cout << left << setw(15) << "Membership Discount:" << discount << endl;



}


