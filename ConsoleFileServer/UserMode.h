/** @file UserMode.h
	@brief A header file of UserMode class */
#pragma once
#include "stdafx.h"
#include "ServerInfo.h"
#include "UserInfo.h"
#include "FileInfo.h"
#include "FileManager.h"
#include "Util.h"

/// A class providing the user mode functions
class UserMode
{
public:
	ServerInfo* server;					///< A variable containing the server's information
	UserInfo user;						///< A variable containing current user's information
	vector<FileInfo>* files;			///< A pointer of the vector containing files	
	int run();							///< Start the user mode
private:
	Util util;							///< A variable containing Util class
	FileManager fileManager;										///< A variable containing FileManage class
	void showCapacity();				///< Print the server's capacity information
};
