 // Total Purchase.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Charlotte Martin
//ITSE 1307- C++ Programming
//24Jan2019
//Total Purchase: User defined input of item purchase prices and tip.  
//calculated and displayed for the user's benefit.



#include "pch.h"
#include <iostream>
#include<string>
#include<iomanip>
#include <locale>
using namespace std;



int main() {

	//1. variables
	const double TAX = 7.0;  //tax is 7% 
	double TIP = 0.0;	
	double itemPrice1 = 0.0;
	double itemPrice2 = 0.0;
	double itemPrice3 = 0.0;
	double itemPrice4 = 0.0;
	double itemPrice5 = 0.0;
	double tax = 0.0;
	double tip = 0.0;
	double total = 0.0;
	double subtotal = 0.0;


	//This assumes the user WILL enter input and it's valid.

	//2a. Ask the user for the price of the first item
	cout << "Please enter the price of the first item" << endl;
	//2b. Save the first item price
	cin >> itemPrice1;
	 
	//3a. Ask the user for the price of the second item
	cout << "Please enter the price of the second item" << endl;
	//3b. Save the second item price
	cin >> itemPrice2;

	//4a. Ask the user for the price of the third item
	cout << "Please enter the price of the third item" << endl;
	//4b. Save the third item price
	cin >> itemPrice3;

	//5a. Ask the user for the price of the fourth item
	cout << "Please enter the price of the fourth item" << endl;
	//5b. Save the fourth item price
	cin >> itemPrice4;

	//6a. Ask the user for the price of the fifth item
	cout << "Please enter the price of the fifth item" << endl;
	//6b. Save the item price
	cin >> itemPrice5;
	
	
	//7a. Ask the user if they want to leave a tip/ how much or none
	cout << "Would you like to leave a tip? (Enter percentage or enter 0 for no): " << endl;
	//7b Save the tip amount
	cin >> TIP;

	//8. Calculations
	subtotal = itemPrice1 + itemPrice2 + itemPrice3 + itemPrice4 + itemPrice5;
	tax = subtotal * TAX/100;			//changing the given percentage to a more usable decimal 
	tip = (subtotal + tax) * TIP/100;  //changing the given percentage to a more usable decimal format 
	total = subtotal + tax + tip;

	//9. Display for the user
	cout << setprecision(2);
	cout << fixed << showpoint;
	
	//using setw() to set the max field length and left/right manipulation to create "columns" 
	//to force the decimals to align regardless of the size of the number
	
	cout << "*************************************************\n" << endl;
	cout << left << setw(48) << "Your purchases are: " << endl;
	cout << left << setw(20) << "Item 1" << "$" << right << setw(10) << itemPrice1 << endl;
	cout << left << setw(20) << "Item 2" << "$" << right << setw(10) << itemPrice2 << endl;
	cout << left << setw(20) << "Item 3" << "$" << right << setw(10) << itemPrice3 << endl;
	cout << left << setw(20) << "Item 4" << "$" << right << setw(10) << itemPrice4 << endl;
	cout << left << setw(20) << "Item 5" << "$" << right << setw(10) << itemPrice5 << endl << endl;  //this will add a blank line 

	cout << left << setw(20) <<"Your subtotal is: " << "$" << right << setw(10) << subtotal << endl;
	cout << left << setw(20) << "Your tax is: " << "$" << right << setw(10) << tax <<" (" <<TAX <<" %)"<< endl;
	cout << left << setw(20) << "Your tip is: " << "$" << right << setw(10) << tip << " (" << TIP << " %)" << endl;
	cout << left << setw(20) << "Your Total is: " << "$" << right << setw(10) << total <<endl << endl;
	
	cout << "*************************************************" << endl;
	return 0;
}