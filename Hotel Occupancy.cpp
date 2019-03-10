// Hotel Occupancy.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Charlotte Martin
//ITSE 1307 C++
//14FEB2019
//This program will calculate the occupancy rate for a hotel.

#include "pch.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
	//1. variables
	int numFloors;			//floor count
	int	numRooms;			//room count
	int	numOccupied;		//occupied room count
	int	roomsVacant;		//total of vacant rooms
	double percentRate;		//occupancy rate
	double roomsTotal = 0;		//total of rooms
	int	roomsOccupied = 0;		//total of rooms occupied
	int count = 1;			//counter for the loop

	//2. ask user for the number of floors in the hotel
	cout << "Please enter the number of floors for the hotel : ";

	//3. store the number of floors
	cin >> numFloors;

	//4.INPUT VALIDATION 
	while (numFloors < 1) {			//input validation for a minimum of one floor
		cout << "Please enter a value of at least one for the number of floors: ";		//asking for correct info
		cin >> numFloors;			//new data store
	}	//end of loop

	
	//5. loops for user input on the number of rooms per floor
	for (int count = 1; count <= numFloors; count++) {		//starting count at 1 and counting up
		//6. checking the loop to skip the  13th floor
		if (count == 13) {
			cout << "The thirteenth floor is traditionally skipped in this country. ";		//Error messege for skipping the 13th floor
			numFloors += 1;		//advances the counter
			continue;
		}

		//7. ask user for number of rooms per floor
		cout << "Please enter the number of rooms for floor " << count << " : ";

		//8.store number of rooms
		cin >> numRooms;

		//9. input validation
		while (numRooms < 10) {				//input validation for a minimum number of rooms per floor
			cout << "Please enter a number of 10 or greater for number of rooms: ";			//trying again
			cin >> numRooms;			//stores new data
		}

		//10.ask user for number of rooms per floor that are occupied
		cout << "Please enter the number of rooms occupied for floor " << count << " : ";

		//11. stores data
		cin >> numOccupied;

		//12. input validation
		while (numOccupied > numRooms) {
			cout << "The number of rooms occupied cannot be greater than the number of rooms.  Please try again: ";		//trying again
			cin >> numOccupied;		//stores new data
		}
		//13. calculations of totals
		roomsTotal += numRooms;		//sum of all rooms
		roomsOccupied += numOccupied;		//sum of all rooms occupied
		roomsVacant = roomsTotal - roomsOccupied;		//total number of unoccupied rooms
		percentRate = (roomsOccupied / roomsTotal * 100);		//occupancy rate percentage

	}	//end of for loop

	
	//14. Displays
	
	cout << "\n*******************Hotel Occupancy Report********************\n" << endl;
	cout << "This Hotel has " << roomsTotal << " total room capacity" << endl;
	cout << "There are currently " << roomsOccupied << " rooms occupied and " << roomsVacant << " rooms unoccupied" << endl;
	cout << "The current occupancy rate is: " << fixed << showpoint << setprecision(2)<<percentRate << " %" << endl;
	cout << "\n*******************End of Report*****************************\n" << endl;


    return 0; 
}	//end of main

