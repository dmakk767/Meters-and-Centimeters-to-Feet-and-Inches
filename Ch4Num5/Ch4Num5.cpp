// Ch4Num5.cpp : Defines the entry point for the console application.
//

//Conveter for Meters and Centmeters to Feet and Inches

#include "stdafx.h"
#include <iostream>
#include <math.h>
//declare our namespace
using namespace std;
//predefine our functions
float getinfo(float& meters, float& centi);
void calcInches(float& meters, float& centi);
void output(float feet, float inches);
//main code goes here/ function calls
int main()
{
	//define variables
	float meters = 0, centi = 0;
	char cont = 'n';
	//make loop to let user run more than once 
	do {
		//call get info func
		getinfo(meters, centi);
		// test line // cout << feet <0< " " << inches << endl;
		//call the calc func
		calcInches(meters, centi);
		//allow continue through user input
		cout << "Enter 'Y' to continue, all other keys quit." << endl;
		cin >> cont;
		cont = toupper(cont);
	} while (cont == 'Y');
	return 0;
}

//define our functions
float getinfo(float& meters, float& centi) {
	//get info from user
	cout << "Please enter the meters." << endl;
	cin >> meters;
	cout << "Please enter the centimeters " << endl;
	cin >> centi;
	return meters, centi;
}

void calcInches(float& meters, float& centi) {
	//this func does the calc for the program
	// test line // cout << meters << "meters and centi " << centi << endl;
	float totalCenti = meters * 100.0f;
	totalCenti = totalCenti + centi;
	// test line // cout << "total centi" << totalCenti << endl;
	float totalInches = totalCenti / 2.54f;
	// test line // cout << "total centi" << totalCenti << endl;
	float feet = totalInches / 12;
	float inches = fmod(totalInches, 12);
	//format our number by using floor
	feet = floor(feet);
	inches = floor(inches);
	//output to user test // cout << "The length is " << feet << " feet, and " << inches << " inches" << endl;
	//send info to output func to display to user
	output(feet, inches);
}

void output(float feet, float inches) {
	//display the info to user 
	cout << "\nThe length is " << feet << " feet, and " << inches << " inches.\n" << endl;
}



