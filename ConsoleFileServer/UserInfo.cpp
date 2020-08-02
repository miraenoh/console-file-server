/** @file UserInfo.cpp
	@brief A cpp file containing constructors of UserInfo */
#include "stdafx.h"
#include "UserInfo.h"

UserInfo::UserInfo() {}

UserInfo::UserInfo(string id, string password, string identNum, string authority)
{
	this->id = id;
	this->password = password;
	this->identNum = identNum;
	this->authority = authority;
}
