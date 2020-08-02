/** @file FileManager.cpp
    @brief A cpp file containing implementations of FileManager methods */
#include "stdafx.h"
#include <iostream>
#include <regex>
#include "FileManager.h"
#include "constants.h"

void FileManager::uploadFile(ServerInfo* server, vector<FileInfo>* files)
{
    string name;
    string type;
    int size;

    int capacityAvail = 0;
    while (true)
    {
        system("cls");

        // Get the user inputs
        cout << MES_FM_UPLOAD_NAME;
        cin >> name;
        cout << MES_FM_UPLOAD_TYPE;
        cin >> type;
        cout << MES_FM_UPLOAD_SIZE;
        cin >> size;

        // Validate name, type, and size
        if (regex_match(name, regex("^[a-zA-Z0-9]{5,20}$")) == false)
        {
            cout << MES_FM_UPLOAD_ERR_NAME << MES_RETRY << endl;
            util.closeWithInput();
            continue;
        }
        if (regex_match(type, regex("^[a-z]{3,5}$")) == false)
        {
            cout << MES_FM_UPLOAD_ERR_TYPE << MES_RETRY << endl;
            util.closeWithInput();
            continue;
        }
        if (size <= 0)
        {
            cout << MES_FM_UPLOAD_ERR_SIZE_RANGE << MES_RETRY << endl;
            util.closeWithInput();
            continue;
        }

        // Check if the server has capacity for it
        capacityAvail = server->capacityAll - server->capacityUsed;
        if (size > capacityAvail)
        {
            cout << MES_FM_UPLOAD_ERR_SIZE << endl;
            cout << MES_FM_UPLOAD_FAIL << endl;
            util.closeWithInput();
            return;
        }

        // All inforamation is valid
        // Upload the file
        FileInfo file(name, type, size);
        files->push_back(file);

        // Change the server capacity
        server->capacityUsed += size;

        cout << MES_FM_UPLOAD_SUCCESS << endl;
        util.closeWithInput();
        return;
    }
}

void FileManager::deleteFile(ServerInfo* server, vector<FileInfo>* files)
{
    int nSelected = 0;
    while (true)
    {
        system("cls");

        // Select one from files
        nSelected = selectFromFiles(files);

        // Terminate if the user input is 0 (now -1)
        if (nSelected == -1)
            return;

        // Delete the selected file
        int size = files->at(nSelected).size;
        files->erase(files->begin() + nSelected);

        // Change the server capacity
        server->capacityUsed -= size;

        cout << MES_FM_DELETE_SUCCESS << endl;
        util.closeWithInput();
        return;
    }
}

void FileManager::downloadFile(vector<FileInfo>* files)
{
    int nSelected = 0;
    while (true)
    {
        system("cls");

        // Select one from files
        nSelected = selectFromFiles(files);

        // Terminate if the user input is 0 (now -1)
        if (nSelected == -1)
            return;

        // Download the file
        cout << MES_FM_DOWNLOAD_SUCCESS << endl;
        util.closeWithInput();
        return;
    }
}

int FileManager::selectFromFiles(vector<FileInfo>* files)
{
    cout << "INDEX" << "\t\t\t" << "NAME" << "\t\t\t" << "TYPE" << "\t\t\t" << "SIZE" << endl;
    cout << 0 << "\t\t\t" << "돌아가기" << endl;

    // Print all files
    int nLen = files->size();
    int i = 0;
    for (i = 0; i < nLen; ++i)
    {
        FileInfo file = files->at(i);
        cout << i + 1 << "\t\t\t" << file.name << "\t\t\t" << file.type << "\t\t\t" << file.size << endl;
    }

    // Get the user input
    int nSelected = 0;
    while(true)
    {
        cout << MES_REQUEST_INPUT;
        cin >> nSelected;

        // Check the range
        if (nSelected < 0 || nSelected > nLen)
        {
            // Invalid range
            cout << MES_ERR_INPUT << MES_RETRY << endl;
            continue;
        }

        return nSelected - 1;
    }
}
