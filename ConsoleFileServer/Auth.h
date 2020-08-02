/** @file Auth.h
	@brief A header file for Auth class */
#pragma once
#include "stdafx.h"
#include "ServerInfo.h"
#include "UserInfo.h"
#include "Util.h"

/// A class providing methods related to user authentication
class Auth
{
public:
	int registerUser(vector<UserInfo>* users,
		vector<UserInfo> *pendingUsers);						///< Send the user registration request to the server
	bool loginAdmin(ServerInfo server);							///< Check the admin login code
	bool loginUser(UserInfo* user, vector<UserInfo>* users);		///< Check the user input for user login
private:
	bool validateId(string id, vector<UserInfo>* users,
		vector<UserInfo>* pendingUsers);						///< Validate the id input
	bool validatePassword(string password, string identNum);	///< Validate the password input
	bool validateAuthLevel(string authLevel);					///< Validate the auth level input
	bool validateIdentNum(string identNum);						///< Validate the identification number input
	bool isIdExists(string id, vector<UserInfo>* users);		///< Check if the id already exists in the server
	Util util;													///< A variable containing Util class
};
