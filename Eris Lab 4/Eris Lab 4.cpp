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
    char choice; 
    char sizechoice;
    char tip;
    // Menu
    cout << setw(22)<<"Menu"<< endl;
    cout << setw(35)  << "Drinks     Small (s)       Medium (m)       Large(l)" << endl;
    cout << setw(30) << "A: Wine       3.50            6.00             9.50   " << endl;
    cout << setw(30) << "B: Tequila    0.99            2.50             5.00" << endl;
    cout << " Entrees" << endl;
    cout << setw(30) << "C: Burger    5.00             7.50            12.50" << endl;
    cout << setw(30) << "D: Moose     10.00            17.50           32.50" << endl;
    cout << "Please Select Either Drink or Entree" << endl;
        cin >> choice;
        switch (choice) {
        case 'A': 
        case 'a' :
            cout << "You have selected wine. Please select the size you'd like. Use S, M, or L" << endl;
cin >> sizechoice;
        switch (sizechoice) {
        case 'S':
        case 's' :
            cout << "You have selected Small." << endl;
            price = 3.50;
            break;
        case 'M':
        case 'm':
            cout << "You have selected Medium." << endl;
            price = 6.00;
            break;
        case 'L':
        case 'l':
            cout << "You have selected Large." << endl;
            price = 9.50;
            break;
        default: cout << " You messed up try again" << endl;
            break;
            
            }
            break;
        case 'B' :
        case 'b':
            cout << "You have selected Tequila. Please select the size you'd like. Use S, M, or L" << endl;
            cin >> sizechoice;
            switch (sizechoice) {
            case 'S':
            case 's':
                cout << "You have selected Small." << endl;
                price = 0.99;
                break;
            case 'M':
            case 'm':
                cout << "You have selected Medium." << endl;
                price = 2.50;
                break;
            case 'L':
            case 'l':
                cout << "You have selected Large." << endl;
                price = 5.00;
                break;

            default: cout << " You messed up try again" << endl;
                break;
            }
            break;
        defualt: cout << "You dont need any more to drink." << endl;
            break;
        case 'C' :
        case 'c' :
            cout << "You have selected Burger, please select the size you'd like using S, M, or L" << endl;
            cin >> sizechoice;
            switch (sizechoice) {
            case 'S':
            case 's':
                cout << "You have selected Small." << endl;
                price = 5.00;
                break;
            case 'M':
            case 'm':
                cout << "You have selected Medium." << endl;
                price = 7.50;
                break;
            case 'L':
            case 'l':
                cout << "You have selected Large." << endl;
                price = 12.50;
                break;

            default: cout << " You messed up try again" << endl;
            }
                break;
            case 'D':
            case 'd' :
                cout << "You have selected Moose, please select the size you'd like using S, M, or L" << endl;
                cin >> sizechoice;
                switch (sizechoice) {
                case 'S':
                case 's':
                    cout << "You have selected Small." << endl;
                    price = 10.00;
                    break;
                case 'M':
                case 'm':
                    cout << "You have selected Medium." << endl;
                    price = 17.50;
                    break;
                case 'L':
                case 'l':
                    cout << "You have selected Large." << endl;
                    price = 32.50;
                    break;

                default: cout << " You messed up try again" << endl;
                    break;
                }
           

    }
       
        
    //menu

    //getting the response

   // cout << " Enter the name of your Food";
    //getline(cin, name);
   // cout << "Enter the item code";
    //cin >> itemcode;
    cout << "Enter the amount you want";
    cin >> quantity;
   // cout << "Enter the Unit Price";
    //cin >> price;
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
    double total3;
    double atax;
    double ftax;
    double ctax;
    total = quantity * price;
    atax = total * 0.065;
    ftax = total * 0.005;
    ctax = total * 0.02125;
    discount = total * 0.10;
total2 = total - discount;
total3 = total2 + atax + ftax +ctax ;


double tip1 = 0.15;
double tip2 = 0.2;
double tip3 = 0.25;


double tipamt1 = tip1 * total;
double tipamt2 = tip2 * total;
double tipamt3 = tip3*total;

double tiptotal1 = tipamt1 + total3;
double tiptotal2 = tipamt2 + total3;
double tiptotal3 = tipamt3 + total3;
    // display
    //cout << left << setw(24) << "Item:" << name << endl;
    //cout << left << setw(25) << "Item Code:" << itemcode << endl;
    cout << left << setw(25) << "Amount:" << quantity << endl;
    
    cout << left << setw(25)<< fixed << setprecision(2) << "Total:" << total << endl;
cout << "arkansas state tax: 6.5% " << atax<< endl;
cout << "Faulkner County Tax: 0.5% " << ftax << endl;
cout << "Conway Municipal Tax: 2.125% " << ctax << endl;
    cout << left << setw(25) << "Membership:" << member << endl;
if (member == 'y' || member == 'Y') {
       cout << left << setw(25) << "With Membership Discount:" << total2 << endl; 
        
    }
cout << "Final Total:" << total3 << endl;
cout << right << setw(25) << "Cashier Notes:" << note << endl;


cout << setw(30) << "Tip Selection" << "Amount" << endl;
cout << setw(30) << "A. 15%" << setw(30) << "$" << tipamt1 << endl;
cout << setw(30) << "B. 20%" << setw(30) << "$" <<  tipamt2 << endl;
cout << setw(30) << "C. 25%" << setw(30) << "$" <<tipamt3 << endl; 
cout << setw(30) << "D. other " << endl;
 ; 
cin >> tip;
switch (tip){
    case 'A':
    case 'a':
        cout << " You have chosen a 15% tip" << endl;
        cout << " Your new total is" << tiptotal1 << endl;
        break;
    case 'B':
    case 'b':
            cout << "You have chosen a 20% tip" << endl;
            cout << " Your new total is" << tiptotal2 << endl;
            break;
    case 'C':
    case 'c':
        cout << "You have chosen a 25% tip" << endl;
        cout << " Your new total is" << tiptotal3 << endl;
        break;
    case 'D':
    case 'd':
    

double tipc;
       cout << "Please enter the percentage amount you'd like to tip" << endl;
       cin >> tipc;

double tip4 = tipc/100;
double tipamt4 = tip4 * total;
double tiptotal4 = tipamt4 + total3;
       cout << "you have tipped" << setw(1) << tipamt4 << endl;

       cout << " Your new total is" << setw(1) << tiptotal4 << endl;
       break;
  //default: cout << " No tip" << endl;

}


}


