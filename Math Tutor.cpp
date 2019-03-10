/// Math Tutor.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Charlotte Martin
//ITSE 1307 C++
//07FEB2019
//The program will be used as a math tutor for a young student.  Will display 2 random numbers

#include "pch.h"
#include <math.h>
#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;



int main() {

	int num1,          // The first random number
		num2,          // The second random number
		choice,        // The user's choice of problem
		temp;
		string studentAnswer, // The student's answer
		correctAnswer; // The correct answer
		

	srand(time(0));		// Seed the random number generator.


	do {

		//Display a choice of math problems
		cout << "\tMath Tutor Menu\n";
		cout << "------------------------------\n";
		cout << "1. Addition Problems\n";
		cout << "2. Subtraction Problems\n";
		cout << "3. Multiplication Problems\n";
		cout << "4. Division Problems\n";
		cout << "5. Quit the Math Tutor\n";
		cout << "------------------------------\n";
		cout << "Enter your choice (1-5): ";
		cin >> choice;

		// Validate the choice.
		while (choice < 1 || choice > 5) {

			cout << "The valid choices are 1, 2, 3, "
				<< "4, and 5. Please choose: ";
			cin >> choice;
		}

		// Produce a problem.
		switch (choice) {

		case 1:	//Addition Problem
			//will generate 2 random numbers within the range of 1-500
			num1 = 1 + rand() % 500;
			num2 = 1 + rand() % 500;

			// Calculate the correct answer.
			correctAnswer = to_string(num1 + num2);

			// Display the problem.
			cout << "\n\n";
			cout << "  " << setw(4) << num1 << endl;
			cout << " +" << setw(4) << num2 << endl;
			cout << "  " << "----" << endl;
			cout << "   ";

			break;

		case 2:	//Subtraction Problem
			//will generate 2 random numbers within the range of 1-999
			num1 = 1 + rand() % 999;
			num2 = 1 + rand() % 999;

			// Make sure num2 <= num1...
			while (num2 > num1)
				num2 = 1 + rand() % 999;

			// Calculate the correct answer.
			correctAnswer = to_string(num1 - num2);

			// Display the problem.
			cout << "\n\n";
			cout << "  " << setw(4) << num1 << endl;
			cout << " -" << setw(4) << num2 << endl;
			cout << "  " << "----" << endl;		
			cout << "   ";

			break;

		case 3:	//Multiplication Problem
			//will generate 2 random numbers, the 1st within the range of 1-100
			//and the 2nd within the range of 1-9.  This keeps the numbers from becoming to large.
			num1 = 1 + rand() % 100;
			num2 = 1 + rand() % 9;

			// Calculate the correct answer.
			correctAnswer = to_string(num1 * num2);

			// Display the problem.
			cout << "\n\n";
			cout << "  " << setw(4) << num1 << endl;
			cout << " x" << setw(4) << num2 << endl;
			cout << "  " << "----" << endl;	
			cout << "   ";

			break;

		case 4:	//Division Problem with no remainder
				//generate a single digit divisor
			num2 = 1 + rand() % 9;

			//generate a number that is a multiple of num2
			num1 = num2 *(rand() % 50+1);
			
			// Calculate the correct answer.
			correctAnswer = to_string(num1 / num2);

			// Display the problem.
			cout << "\n\n";
			//cout << "  " << setw(4) << num1 << endl;
			//cout << " ÷" << setw(4) << num2 << endl;
			//cout << " " << "----" << endl;		//I can not get this too display correctly but the math works

			cout<< " " <<setw(4)<< num1<< " /" << setw(4) <<num2 << " = ";	// most answers will be 0 or whole numbers instead of using decimals

			break;


		case 5:  // The user chose to quit the program.
			cout << "Thank you for using The Math Tutor. Goodbye.\n\n";
			break;

		}
		// If student selected a problem, get and evaluate the answer.
		if (choice >= 1 && choice <= 4)
		{
			if (choice == 1)
			{
				//Get Answer from user
				cin >> temp;
				studentAnswer = to_string(temp);
			}
			else
			{
				cin >> studentAnswer;
			}

			if (studentAnswer == correctAnswer)
				cout << "\n\nCongratulations! That's right.\n\n";
			else
				cout << "\n\nSorry, the correct answer is " << correctAnswer
				<< ".\n\n";
		}
	} while (choice != 5);  // Loop again if student did not choose to quit.
	return 0;
}