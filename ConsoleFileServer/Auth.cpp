/** @file Auth.cpp
    @brief Source code file for Auth class */
#include "stdafx.h"
#include <iostream>
#include <regex>
#include "Auth.h"
#include "constants.h"

int Auth::registerUser(vector<UserInfo>* users, vector<UserInfo>* pendingUsers)
{
    while (true)
    {
        system("cls");

        string id;
        string password;
        string identNum;
        string authLevel;

        // Get parameters from the user
        cout << MES_REGISTER_ID;
        cin >> id;
        cout << MES_REGISTER_PASS;
        cin >> password;
        cout << MES_REGISTER_IDENTN;
        cin >> identNum;
        cout << MES_REGISTER_AUTH;
        cin >> authLevel;

        // Validate the values
        if (validateId(id, users, pendingUsers) == false || validatePassword(password, identNum) == false
            || validateIdentNum(identNum) == false || validateAuthLevel(authLevel) == false)
        {
            cout << MES_RETRY << endl;
            util.closeWithInput();
            continue;
        }

        // Valid inputs
        // Complete the registration
        UserInfo newUser(id, password, identNum, authLevel);
        pendingUsers->push_back(newUser);

        cout << MES_REGISTER_SUCCESS << endl;
        util.closeWithInput();
        return 0;
    }
}

bool Auth::validateId(string id, vector<UserInfo>* users, vector<UserInfo>* pendingUsers)
{
    // Validate the length of id input
    if (regex_match(id, regex("^[a-zA-Z0-9]{5,20}$")) == false)
    {
        cout << MES_RIGISTER_ERR_ID_LEN << endl;
        return false;
    }

    // Check if the id already exists in users or pendingUsers
    if (isIdExists(id, users) || isIdExists(id, pendingUsers))
    {
        cout << MES_RIGISTER_ERR_ID_EXISTS << endl;
        return false;
    }

    return true;
}

bool Auth::isIdExists(string id, vector<UserInfo>* users)
{
    // Sequential search
    for (auto user : *users)
        if (user.id.compare(id) == 0)
            return true;

    return false;
}

bool Auth::validatePassword(string password, string identNum)
{
    // Validate the length of password input
    if (regex_match(password, regex("^[a-zA-Z0-9]{8,20}$")) == false)
    {
        cout << MES_RIGISTER_ERR_PASS_LEN << endl;
        return false;
    }

    // Check if the password contains identNum
    if (password.find(identNum) != string::npos)
    {
        cout << MES_RIGISTER_ERR_PASS_IDENTN << endl;
        return false;
    }

    return true;
}

bool Auth::validateIdentNum(string identNum)
{
    // Validate identNum with the regular expression
    if (regex_match(identNum, regex("^\\d{6}[1-4]\\d{6}$")) == false)
    {
        cout << MES_RIGISTER_ERR_IDNETN << endl;
        return false;
    }

    return true;
}

bool Auth::validateAuthLevel(string authLevel)
{
    // Validate if authLevel is "R", "W", or "RW"
    if (authLevel.compare("R") && authLevel.compare("W") && authLevel.compare("RW"))
    {
        cout << MES_RIGISTER_ERR_AUTHLEVEL << endl;
        return false;
    }

    return true;
}
