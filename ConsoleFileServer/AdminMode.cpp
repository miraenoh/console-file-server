#include "stdafx.h"
#include <iostream>
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
			// Change the admin code
			break;
		case 2:
			// Show the users' information
			break;
		case 3:
			// Add the capacity
			break;
		case 4:
			// Show and manage pending users
			managePendingUser(users, pendingUsers);
			continue;
		case 5:
			// Upload a file
			break;
		case 6:
			// Delete a file
			break;
		case 7:
			// Download a file
			break;
		default:
			return -1;
		}
	}

	return 0;
}

void AdminMode::managePendingUser(vector<UserInfo>* users, vector<UserInfo>* pendingUsers)
{
	int nSelected = 0;
	int nLen = 0;
	while (true)
	{
		system("cls");

		// Print current pending users
		printUsers(pendingUsers);

		// Get the user input and handle it
		cout << MES_REQUEST_INPUT;
		cin >> nSelected;

		// Go back if the input equals to 0
		if (nSelected == 0)
			return;

		// Retry if the input is out of the range
		nSelected--;
		nLen = pendingUsers->size();
		if (nSelected < 0 || nSelected >= nLen)
		{
			cout << MES_ERR_INPUT << MES_RETRY << endl;
			util.closeWithInput();
			continue;
		}

		// Input in range
		// Manage the selected pending user
		UserInfo userSelected = pendingUsers->at(nSelected);
		manageSelectedUser(nSelected, userSelected, users, pendingUsers);
		continue;
	}
}

void AdminMode::printUsers(vector<UserInfo>* users)
{
	cout << "index" << "\t\t" << "id" << "\t\t" << "password" << "\t\t" << "주민번호" << "\t\t" << "신청권한" << endl;
	cout << 0 << "\t\t" << "돌아가기" << endl;

	// Print all pending users
	int nLen = users->size();
	int i = 0;
	for (i = 0; i < nLen; ++i)
	{
		UserInfo user = users->at(i);
		cout << i + 1 << "\t\t" << user.id << "\t\t" << util.encryptString(user.password)
			<< "\t\t" << util.encryptString(user.identNum) << "\t\t" << user.authority << endl;
	}
}

void AdminMode::manageSelectedUser(int index, UserInfo user, vector<UserInfo>* users, vector<UserInfo>* pendingUsers)
{
	int nSelected = 0;
	while (true)
	{
		// Get the user input
		cout << MES_ADMIN_PEND_DECIDE << endl;
		cin >> nSelected;

		// Deal with the input
		switch (nSelected)
		{
		case 0:
			// Go back
			return;
		case 1:
			// Receive the request
			pendingUsers->erase(pendingUsers->begin() + index);
			users->push_back(user);
			
			cout << MES_ADMIN_PEND_SUCCESS_APPROVE << endl;
			util.closeWithInput();
			return;
		case 2:
			// Refuse the request
			pendingUsers->erase(pendingUsers->begin() + index);

			cout << MES_ADMIN_PEND_SUCCESS_REFUSE << endl;
			util.closeWithInput();
			return;
		default:
			cout << MES_ERR_INPUT << MES_RETRY << endl;
		}
	}
}
