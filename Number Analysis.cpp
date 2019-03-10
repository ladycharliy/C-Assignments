// Number Analysis.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Charlotte Martin
//ITSE 1307 C++
//21FEB2019
//The program will read the contents of the file the user has provided into an array and dispaly: 
//the lowest number, the highest number, the total numbers, and the average of numbers in the array.

#include "pch.h"
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <array>
using namespace std;

//Global constant for the array size
const int sizeArray = 12;

//function prototypes
int getLowest(int[], int);
int getHighest(int[], int);
int getTotal(int[], int);
int getNumbers(ifstream&, int[]);



int main() {

	//variables
	int countNums, total, highest, lowest, average;
	//const int sizeArray = 12;
	int numbers[sizeArray];		//array to hold numbers
	string filename;

	//file stream object
	ifstream input;	

	//ask user for the filename
	cout << "Please enter the name of the file you wish to open: ";

	//save the name of the file
	cin >> filename;

	//open the file
	input.open(filename);

	//error messege if the file will not open or cannot be read
	if (input.fail()) {		// (!input) can be used as well
		cout << "Error opening the file.\n";
		return 1;
	}

	//call the function and read the numbers
	countNums = getNumbers(input, numbers);

	//call the function to get total numbers
	total = getTotal(numbers, countNums);
	
	//call the function for highest numbers
	highest = getHighest(numbers, countNums);

	//call the function for lowest numbers
	lowest = getLowest(numbers, countNums);

	
	//calculate the average
	average = total / countNums;

	//display the results
	cout << "\n*************************************************\n" << endl;
	cout << "The highest number is: " << highest << endl;
	cout << "The lowest number is: " << lowest << endl;
	cout << "The total of the numbers is: " << total << endl;
	cout << "The average of the numbers is: " << average << endl;
	cout << "\n*************************************************\n" << endl;

	//close the file
	input.close();

	return 0;
}
//function to read the numbers from the file and count the number ofvalues
int getNumbers(ifstream &in, int numbers[]) {
	int i = 0;		//local variable
	//reading number from file
	in >> numbers[i];

	while (in) {
		//increment count
		i++;
		in >> numbers[i];
	}
	//return count to main
	return i;
}

//function to get the lowest number in the array
int getLowest(int numbers[], int arraySize) {
	int lowest, i;	//local variables
	
	lowest = numbers[0];		//setting lowest to the first element
	
	//interating the numbers[i] 
	for (i = 1; i < arraySize; i++) {
		
		//decide which is the lowest
		if (numbers[i] < lowest) {
			lowest = numbers[i];
		}
		
	}
	//return to main
	return lowest;
}	//end of function


//function to get the highest number in the array
int getHighest(int numbers[], int arraySize) {
	int highest, i;	//local variables

	highest = numbers[0];		//setting highest to the first element
	
	//interating the values 
	for (i = 1; i < arraySize; i++) {
		
		//decide which is the highest
		if (numbers[i] > highest) {
			highest = numbers[i];
		}
		
	}
	//return to main
	return highest;
}	//end of function

//function to get the total/ sum of numbers in the array
int getTotal(int numbers[], int arraySize) {
	int total = 0, i;		//local variables
	for (i = 0; i < arraySize; i++) {
		total += numbers[i];
	}
	//return to the main
	return total;
}// end of function


