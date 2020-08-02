/** @file AdminMode.h
	@brief A header file of AdminMode class */
#pragma once
#include "stdafx.h"
#include "UserInfo.h"
#include "Util.h"

/// A class providing the admin mode functions
class AdminMode
{
public:
	int run(vector<UserInfo>* users,
		vector<UserInfo>* pendingUsers);							///< Start the admin mode
private:
	Util util;														///< A variable containing Util class
	void managePendingUser(vector<UserInfo>* users,
		vector<UserInfo>* pendingUsers);							///< Show and manage the pending users
	void printUsers(vector<UserInfo>* users);						///< Print all given users
	void manageSelectedUser(int index, UserInfo user,
		vector<UserInfo>* users, vector<UserInfo>* pendingUsers);	///< Decide to or not to receive the registration request
};
