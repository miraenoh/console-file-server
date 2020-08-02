/** @file Util.h
	@brief A header file of Util class */
#pragma once
#include "stdafx.h"

/// A class containing util functions for all classes
class Util
{
public:
	int selectMenu(const string menus[], int nLen);	///< Print all the given menus and return the user input
	string encryptString(string sInput);			///< Encrypt the given string by XOR calculation
	void closeWithInput();							///< Return if the user inputs anything
};
