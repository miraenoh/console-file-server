/** @file Server.h
	@brief A header file of Server class */
#pragma once
#include "stdafx.h"
#include "ServerInfo.h"
#include "UserInfo.h"
#include "FileInfo.h"
#include "Auth.h"
#include "Util.h"
#include "AdminMode.h"
#include "UserMode.h"

/// A class actually initiating and running the server
class Server
{
public:
	int run();						///< Initiate and run the server
private:
	ServerInfo server;				///< A variable containing the server's information
	vector<UserInfo> users;			///< A vector containing registered users
	vector<UserInfo> pendingUsers;	///< A vector containing pending users
	vector<FileInfo> files;			///< A vector containing files	
	Auth auth;						///< A variable containing Auth class
	Util util;						///< A variable containing Util class
	AdminMode adminMode;			///< A variable containing AdminMode class
	UserMode userMode;				///< A variable containing UserMode class
	void initialServer();			///< Assign the server's initial capacity and initial admin code
};
