/** @file Util.cpp
	@brief A cpp file containing implementations of Util methods */
#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include "Util.h"
#include "constants.h"

int Util::selectMenu(const string menus[], int nLen)
{
	// Print all the menus it received
	int i = 0;
	for (i = 0; i < nLen; i++)
	{
		cout << i << ". " << menus[i] << endl;
	}
	cout << endl;

	// Get the user input
	int nInput = 0;
	do
	{
		cout << MES_REQUEST_INPUT;
		cin >> nInput;
	} while (nInput < 0 || nInput >= nLen);

	return nInput;
}

string Util::encryptString(string sInput)
{
	string sResult = "";

	// A simple XOR encryption
	for (auto ch : sInput)
		sResult += ch ^ ENCRYPTION_KEY;

	return sResult;
}

void Util::closeWithInput()
{
	// Get any user input
	char ch;
	ch = _getch();

	return;
}
