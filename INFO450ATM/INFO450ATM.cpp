// INFO450ATM.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	// declare variables used by atm application
	int value;
	int fiftyDollarBill;
	int twentyDollarBill;
	int tenDollarBill;
	int fiveDollarBill;
	int oneDollarBill;
	char answer;

	// do while wraps around code in order to later ask user if they wish to run program again
	do
	{
		cout << "Please enter withdrawal amount -->";
		cin >> value;

		// determine if value entered is unacceptable, if so program asks for user to input value again
		do
		{
			if (value <= 0)
			{
				cout << "Sorry the minimum amount you can withdraw is $1.00\n" << endl;
				cout << "Please enter withdrawal amount -->";
				cin >> value;
			}
			else if (value >= 301)
			{
				cout << "Sorry the maximum amount you can withdraw is $300.00\n" << endl;
				cout << "Please enter withdrawal amount -->";
				cin >> value;
			}
		} while (value <= 0 || value >= 301);

		// determines the number of denominations the value can be split into
		fiftyDollarBill = value / 50;
		value = value % 50;

		twentyDollarBill = value / 20;
		value = value % 20;

		tenDollarBill = value / 10;
		value = value % 10;

		fiveDollarBill = value / 5;
		value = value % 5;

		oneDollarBill = value / 1;
		value = value % 1;

		// if statements are used in order to only display neccessary denomination info
		if (fiftyDollarBill>0)
		cout << "You have " << fiftyDollarBill << " $50.00 bills"<< endl;
		if (twentyDollarBill>0)
		cout << "You have " << twentyDollarBill << " $20.00 bills"<< endl;
		if (tenDollarBill)
		cout << "You have " << tenDollarBill << " $10.00 bills"<< endl;
		if (fiveDollarBill>0)
		cout << "You have " << fiveDollarBill << " $5.00 bills"<< endl;
		if (oneDollarBill>0)
		cout << "You have " << oneDollarBill << " $1.00 bills"<< endl;

		// asks user if they would like to run program again
		cout << "\nAnother Withdrawal?? If not enter 0 or type quit.";
		cin >> answer;

	} while (answer == 'y' || answer == 'Y');
	return 0;
}
