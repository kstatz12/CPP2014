// CPPConsoleApplicationSimpleIO.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	
	cout << "Hello World!" << endl;		//Say Hello World to Console
	

	string name;				//declare a string
	int number;					//declare an int
	cout << "What is your name? ";
	cin >> name;				//get the a string from the console
	cout << "What is your favorite number? ";
	cin >> number;				//get the a string from the console

	cout << "Hello " << name << endl;
	cout << "Your favorite number + 1 = " << number + 1 << endl;
	cin.get();					//Pause until a key is pressed

	return 0;
}

