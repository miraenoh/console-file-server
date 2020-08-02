#include "stdafx.h"
#include "AdminMode.h"
#include "constants.h"

int AdminMode::run(vector<UserInfo>* users, vector<UserInfo>* pendingUsers)
{
	int nSelected = 0;
	while (true)
	{
		system("cls");

		// Print admin menus and get the user input
		nSelected = util.selectMenu(MENU_ADMIN, MENU_ADMIN_LEN);

		// Connect to the menu the user selected
		switch (nSelected)
		{
		case 0:
			// Return to the main menu
			return 0;
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			break;
		default:
			return -1;
		}

		break;
	}

	return 0;
}
