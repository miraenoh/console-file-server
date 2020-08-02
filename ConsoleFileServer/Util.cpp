#include "stdafx.h"
#include <iostream>
#include "Util.h"
#include "constants.h"

int Util::selectMenu(const string menus[])
{
	// Print all the menus it received
	int nLen = sizeof(menus);
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
