// Kinetic Energy.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Charlotte Martin
//ITSE 1307 C++
//01FEB2019
//The following formula can be used to determine a moving object’s kinetic energy

#include "pch.h"
#include <math.h>
#include <iostream>
#include <iomanip>
using namespace std;

////////////////prototype////////////////////////
double KineticEnergy(double, double);
double getMass(double);
double getVelocity(double);
void display(double, double, double);


int main()
{
	//1. variables
	double KE = 0.0;
	double v = 0.0;
	double m = 0.0;

	//2a. Ask th user for the object's weight in kilograms.
	m = getMass(m);

	//2b. Ask th user for the object's velocity in meters per second.
	v = getVelocity(v);

	//3.Calculate the kinetic energy- KE = 1/2mv^2
	KE = KineticEnergy(m, v);

	//4. Display
	display(KE, m, v);	

	
	return 0;
}

///////////////Functions/////////////////////////////
//calling for the inputs
double getMass(double) {
	double m;
	cout << "Please enter the object's weight in kilograms: ";
	cin >> m;
	return m;
}

double getVelocity(double) {
	double v;
	cout << "Please enter the object's velocity in meters per second: ";
	cin >> v;
	return v;
}

//using the formula to calculate KineticEnergy
double KineticEnergy(double m, double v) {
	return 0.5 * m * (v*v);

}


void display(double KE, double m, double v) {
	cout << "***********************************************************\n" << endl;
	cout << "If the object's Velocity is: " <<v <<" m/s"<< endl;
	cout << "If the object's Mass is: " <<m << " kg" << endl;
	cout << "Then the object's Kinetic Energy is: " << KE <<" J (Joules)\n" << endl;// kinetic energy unit of measurement is expressed in Joules (J)
	cout << "***********************************************************" << endl;
}
