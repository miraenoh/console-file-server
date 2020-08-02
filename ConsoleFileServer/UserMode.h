/** @file UserMode.h
	@brief A header file of UserMode class */
#pragma once
#include "stdafx.h"
#include "UserInfo.h"
#include "Util.h"

class UserMode
{
public:
	UserInfo user;						///< A variable containing current user's information
	int run();							///< Start the user mode
private:
	Util util;							///< A variable containing Util class
};
