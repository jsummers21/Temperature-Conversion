// Ch2Example.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	float Fahrenheit, Celcius;


	cout << "Enter the temperature in Celcius: ";
	cin >> Celcius;
	Fahrenheit = (Celcius * 9.0) / 5.0 + 32;

	Fahrenheit = Fahrenheit * Celcius;
	cout << Celcius << " Celcius is " << Fahrenheit << " Fahrenheit." << endl;
	return 0;
}