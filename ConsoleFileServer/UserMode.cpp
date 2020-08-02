#include "stdafx.h"
#include <iostream>
#include "UserMode.h"
#include "constants.h"

int UserMode::run()
{
	int nSelected = 0;
	while (true)
	{
		system("cls");

		// to be deleted ***
		cout << "USER MODE" << endl;
		cout << user.id << endl;

		// Print the server's capacity info
		showCapacity();

		// Print user menus and get the user input
		nSelected = util.selectMenu(MENU_USER, MENU_USER_LEN);

		// Connect to the menu the user selected
		switch (nSelected)
		{
		case 0:
			// Return to the main menu
			return 0;
		case 1:
			// Upload a file
			if (user.authority == "R")
			{
				cout << MES_USER_FM_FAIL_W << endl;
				util.closeWithInput();
			}
			else
				fileManager.uploadFile(server, files);
			break;
		case 2:
			// Delete a file
			if (user.authority == "R")
			{
				cout << MES_USER_FM_FAIL_W << endl;
				util.closeWithInput();
			}
			else
				fileManager.deleteFile(server, files);
			break;
		case 3:
			// Download a file
			if (user.authority == "W")
			{
				cout << MES_USER_FM_FAIL_R << endl;
				util.closeWithInput();
			}
			else
				fileManager.downloadFile(files);
			break;
		default:
			return -1;
		}
	}
}

void UserMode::showCapacity()
{
	int capAll = server->capacityAll;
	int capUsed = server->capacityUsed;

	cout << MES_USER_CAP_ALL << capAll << endl;
	cout << MES_USER_CAP_USED << capUsed << endl;
	cout << MES_USER_CAP_AVIL << capAll - capUsed << endl;
}
