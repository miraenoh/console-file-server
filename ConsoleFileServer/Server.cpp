/** @file Server.cpp
	@brief Source code file for the methods of Server class */
#include "stdafx.h"
#include <iostream>
#include "Server.h"
#include "constants.h"

int Server::run()
{
	initialServer();

	int nSelected = 0;
	while (true)
	{
		system("cls");

		// Will be deleted ******
		cout << "# of pending users: " << pendingUsers.size() << endl;

		// Print main menus and get the user input
		nSelected = util.selectMenu(MENU_MAIN);

		// Connect to the menu the user selected
		switch (nSelected)
		{
		case 0:
			// Terminate the program
			return 0;
		case 1:
			// User mode
			break;
		case 2:
			// Admin mode
			break;
		case 3:
			// Sign up request
			auth.registerUser(&users, &pendingUsers);
			break;
		default:
			return 0;
		}
	}

	return 0;
}

void Server::initialServer()
{
	server.adminCode = ADMIN_CODE_INITIAL;
	server.capacityAll = CAPACITY_BASE;
	server.capacityUsed = 0;
}
