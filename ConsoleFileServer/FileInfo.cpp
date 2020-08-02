/** @file FileInfo.cpp
	@brief A cpp file containing constructors of FileInfo */
#include "stdafx.h"
#include "FileInfo.h"

FileInfo::FileInfo() {
	this->size = 0;
}

FileInfo::FileInfo(string name, string type, int size)
{
	this->name = name;
	this->type = type;
	this->size = size;
}
