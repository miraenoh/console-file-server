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
		cout << "# of users: " << users.size() << endl;
		cout << "# of files: " << files.size() << endl;

		// Print main menus and get the user input
		nSelected = util.selectMenu(MENU_MAIN, MENU_MAIN_LEN);

		// Connect to the menu the user selected
		UserInfo user;
		switch (nSelected)
		{
		case 0:
			// Terminate the program
			return 0;
		case 1:
			// User mode
			if (auth.loginUser(&user, &users) == true)
			{
				userMode.server = &server;
				userMode.user = user;
				userMode.files = &files;
				userMode.run();
			}
			break;
		case 2:
			// Admin mode
			if (auth.loginAdmin(server) == true)
			{
				adminMode.server = &server;
				adminMode.files = &files;
				adminMode.run(&users, &pendingUsers);
			}
			break;
		case 3:
			// Sign up request
			auth.registerUser(&users, &pendingUsers);
			break;
		default:
			return -1;
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
