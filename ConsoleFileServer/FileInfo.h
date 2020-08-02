/** @file FileInfo.h
	@brief A header file of FileInfo class */
#pragma once
#include "stdafx.h"

/// A class containing information of a file
class FileInfo
{
public:
	FileInfo();										///< A default constructor of File class
	FileInfo(string name, string type, int size);	///< A constructor getting parameters
	string name;									///< A file's name
	string type;									///< A file's type
	int size;										///< A file's size
};
