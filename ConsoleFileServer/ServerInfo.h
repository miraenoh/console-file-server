/** @file ServerInfo.h
	@brief A header file of ServerInfo class */
#pragma once
#include "stdafx.h"

/// A class saving the server's information
class ServerInfo
{
public:
	int capacityAll;		///< A whole server capacity assigned
	int capacityUsed;		///< A server capacity used
	string adminCode;		///< The admin code used for login
};
