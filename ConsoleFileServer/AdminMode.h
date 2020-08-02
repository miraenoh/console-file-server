/** @file AdminMode.h
	@brief A header file of AdminMode class */
#pragma once
#include "stdafx.h"
#include "UserInfo.h"
#include "ServerInfo.h"
#include "Util.h"

/// A class providing the admin mode functions
class AdminMode
{
public:
	ServerInfo *server;												///< A variable containing the server information
	int run(vector<UserInfo>* users,
		vector<UserInfo>* pendingUsers);							///< Start the admin mode
private:
	Util util;														///< A variable containing Util class
	void changeAdminCode();											///< Change the server's admin code
	void showUsersInfo(vector<UserInfo>* users);					///< Show all registered users
	void addCapacity();												///< Add the server's capacity
	void managePendingUser(vector<UserInfo>* users,
		vector<UserInfo>* pendingUsers);							///< Show and manage the pending users
	void printUsers(vector<UserInfo>* users);						///< Print all given users
	void manageSelectedUser(int index, UserInfo user,
		vector<UserInfo>* users, vector<UserInfo>* pendingUsers);	///< Decide to or not to receive the registration request
};
