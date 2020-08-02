/** @file FileManager.h
	@brief A header file for FileManager class */
#pragma once
#include "stdafx.h"
#include "ServerInfo.h"
#include "FileInfo.h"
#include "Util.h"

/// A class managing transactions with files
class FileManager
{
public:
	void uploadFile(ServerInfo* server, vector<FileInfo>* files);		///< Upload a file
	void deleteFile(ServerInfo* server, vector<FileInfo>* files);		///< Delete one of the files
	void downloadFile(vector<FileInfo>* files);							///< Download one of the files
	int selectFromFiles(vector<FileInfo>* files);						///< Print all given files and select one of them
private:
	Util util;															///< A variable containing Util class
};
