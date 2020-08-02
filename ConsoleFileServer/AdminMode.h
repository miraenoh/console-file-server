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
		vector<UserInfo>* pendingUsers);				///< Start the admin mode
private:
	Util util;											///< A variable containing Util class
};
