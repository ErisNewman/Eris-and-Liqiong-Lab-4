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
    bool checkout = false;
    string order;
    string foodname;
    bool day = false;
    double totalsale =0 ;
    int customer =0 ;
    double subtotal = 0;


  
    // Menu

 do {
    cout << setw(22) << "Menu" << endl;
    cout << setw(35) << "Drinks     Small (s)       Medium (m)       Large(l)" << endl;
    cout << setw(30) << "A: Wine       3.50            6.00             9.50   " << endl;
    cout << setw(30) << "B: Tequila    0.99            2.50             5.00" << endl;
    cout << " Entrees" << endl;
    cout << setw(30) << "C: Burger    5.00             7.50            12.50" << endl;
    cout << setw(30) << "D: Moose     10.00            17.50           32.50" << endl;
    cout << "E: Check out" << endl;




    do {
        cout << "Please Select Either Drink or Entree" << endl;
        cin >> choice;
        switch (choice) {
        case 'A':
        case 'a':
            foodname = "Wine";
            cout << "You have selected wine. Please select the size you'd like. Use S, M, or L" << endl;
            cin >> sizechoice;
            switch (sizechoice) {
            case 'S':
            case 's':
                cout << "You have selected Small." << endl;
                price = 3.50;
                cout << "Enter the amount you want";
                cin >> quantity;
                subtotal += price * quantity;
                break;
            case 'M':
            case 'm':
                cout << "You have selected Medium." << endl;
                price = 6.00;
                cout << "Enter the amount you want";
                cin >> quantity;
                subtotal += price * quantity;
                break;
            case 'L':
            case 'l':
                cout << "You have selected Large." << endl;
                price = 9.50;
                cout << "Enter the amount you want";
                cin >> quantity;
                subtotal += price * quantity;
                break;
            default: cout << " You messed up try again" << endl;
                break;



            }



            break;
        case 'B':
        case 'b':
            foodname = "tequila";
            cout << "You have selected Tequila. Please select the size you'd like. Use S, M, or L" << endl;
            cin >> sizechoice;
            switch (sizechoice) {
            case 'S':
            case 's':
                cout << "You have selected Small." << endl;
                price = 0.99;
                cout << "Enter the amount you want";
                cin >> quantity;
                subtotal += price * quantity;
                break;
            case 'M':
            case 'm':
                cout << "You have selected Medium." << endl;
                price = 2.50;
                cout << "Enter the amount you want";
                cin >> quantity;
                subtotal += price * quantity;
                break;
            case 'L':
            case 'l':
                cout << "You have selected Large." << endl;
                price = 5.00;
                cout << "Enter the amount you want";
                cin >> quantity;
                subtotal += price * quantity;
                break;

            default: cout << " You messed up try again" << endl;
                break;
            }

            break;


        case 'C':
        case 'c':
            foodname = "burger";
            cout << "You have selected Burger, please select the size you'd like using S, M, or L" << endl;
            cin >> sizechoice;
            switch (sizechoice) {
            case 'S':
            case 's':
                cout << "You have selected Small." << endl;
                price = 5.00;
                cout << "Enter the amount you want";
                cin >> quantity;
                subtotal += price * quantity;
                break;
            case 'M':
            case 'm':
                cout << "You have selected Medium." << endl;
                price = 7.50;
                cout << "Enter the amount you want";
                cin >> quantity;
                subtotal += price * quantity;
                break;
            case 'L':
            case 'l':
                cout << "You have selected Large." << endl;
                price = 12.50;
                cout << "Enter the amount you want";
                cin >> quantity;
                subtotal += price * quantity;
                break;

            default: cout << " You messed up try again" << endl;
            }
            break;
        case 'D':
        case 'd':
            foodname = "Moose";
            cout << "You have selected Moose, please select the size you'd like using S, M, or L" << endl;
            cin >> sizechoice;
            switch (sizechoice) {
            case 'S':
            case 's':
                cout << "You have selected Small." << endl;
                price = 10.00;
                break;
                cout << "Enter the amount you want";
                cin >> quantity;
                subtotal += price * quantity;
            case 'M':
            case 'm':
                cout << "You have selected Medium." << endl;
                price = 17.50;
                cout << "Enter the amount you want";
                cin >> quantity;
                subtotal += price * quantity;
                break;
            case 'L':
            case 'l':
                cout << "You have selected Large." << endl;
                price = 32.50;
                cout << "Enter the amount you want";
                cin >> quantity;
                subtotal += price * quantity;
                break;


            default: cout << " You messed up try again" << endl;
                break;
            }
            break;
        case 'E':
        case 'e':
            checkout = true;
            break;
        default: cout << "Error" << endl;
        }
        order += foodname + "\t\t" + to_string(quantity) + "\t\t" + to_string(price) + "\t\t" + to_string(subtotal) + "\n";

    } while (checkout == false);

    //cout << subtotal;
    //menu


    //ask for user's name.

    cout << "What is your name ? " << endl;
    cin >> name;




    cout << "Are you a member? y/n";
    cin >> member;
    //  cashier notes
    string note;
    cout << " Cashier Notes";
    cin.ignore();
    getline(cin, note);
    //math

    double total2;
    double total3;
    double atax;
    double ftax;
    double ctax;
    atax = subtotal * 0.065;
    ftax = subtotal * 0.005;
    ctax = subtotal * 0.02125;
    discount = subtotal * 0.10;
    total2 = subtotal - discount;
    total3 = total2 + atax + ftax + ctax;


    double tip1 = 0.15;
    double tip2 = 0.2;
    double tip3 = 0.25;


    double tipamt1 = tip1 * subtotal;
    double tipamt2 = tip2 * subtotal;
    double tipamt3 = tip3 * subtotal;

    double tiptotal1 = tipamt1 + total3;
    double tiptotal2 = tipamt2 + total3;
    double tiptotal3 = tipamt3 + total3;

    // display
    //cout << left << setw(24) << "Item:" << name << endl;
    //cout << left << setw(25) << "Item Code:" << itemcode << endl;
    
    // cout << left << setw(25) << "Amount:" << quantity << endl;
    cout << left << setw(25) << "Name: " << name << endl;
    cout << left << setw(25) << fixed << setprecision(2) << "Total:" << subtotal << endl;
    cout << "arkansas state tax: 6.5% " << atax << endl;
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
    cout << setw(30) << "B. 20%" << setw(30) << "$" << tipamt2 << endl;
    cout << setw(30) << "C. 25%" << setw(30) << "$" << tipamt3 << endl;
    cout << setw(30) << "D. other " << endl;
    cin >> tip;
    switch (tip) {
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

        double tip4 = tipc / 100;
        double tipamt4 = tip4 * subtotal;
        double tiptotal4 = tipamt4 + total3;
        cout << "you have tipped" << setw(1) << tipamt4 << endl;

        cout << " Your new total is" << setw(1) << tiptotal4 << endl;
        break;
        //default: cout << " No tip" << endl;

    }
    int loyalty = total3 / 3;
    string ast(loyalty, '*');
    cout << order << endl;
    cout << "Loyalty Points" << ast << endl;
    customer++;
    totalsale += total3;
char cus;
cout << "Is there another customer?? Y/N" << endl;
cin >> cus;
if (cus == 'N' || cus == 'n')
day = true;

} while (day == false);
cout << "There were  " << customer << " Customers" << endl;
cout << "There was a total of " << totalsale << " Dollars in sales today" << endl;
    
}
