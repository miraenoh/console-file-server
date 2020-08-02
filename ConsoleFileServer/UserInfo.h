/** @file UserInfo.h
	@brief A header file of UserInfo class */
#pragma once
#include "stdafx.h"

/// A class containing an user's information
class UserInfo
{
public:
	UserInfo(string id, string password,
		string identNum, string authority);	///< A constructor with user inputs
	string id;								///< The user's id used for login
	string password;						///< The user's password used for login
	string identNum;						///< The user's identification number
	string authority;						///< The user's authority
	bool isDormant = false;					///< If the user is dormant or not
};
