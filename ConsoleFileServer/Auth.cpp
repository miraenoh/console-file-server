/** @file Auth.cpp
    @brief A cpp file containing implementations of Auth methods */
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
        cout << MES_AUTH_ID;
        cin >> id;
        cout << MES_AUTH_PASS;
        cin >> password;
        cout << MES_AUTH_IDENTN;
        cin >> identNum;
        cout << MES_AUTH_AUTH;
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

bool Auth::loginAdmin(ServerInfo server)
{
    system("cls");

    // Get the user input for the admin code
    string adminCode;
    cout << MES_LOGIN_ADMIN_CODE;
    cin >> adminCode;

    // Check if the admin code is valid
    if (adminCode.compare(server.adminCode) != 0)
    {
        cout << MES_LOGIN_ADMIN_ERR << endl;
        util.closeWithInput();
        return false;
    }

    return true;
}

bool Auth::loginUser(UserInfo* user, vector<UserInfo>* users)
{
    string id;
    string password;
    while (true)
    {
        system("cls");

        // Get parameters from the user
        cout << MES_AUTH_ID;
        cin >> id;
        cout << MES_AUTH_PASS;
        cin >> password;

        // Check if the id exists
        if (isIdExists(id, users) == false)
        {
            // Id not exists
            cout << MES_LOGIN_USER_ERR_ID << MES_RETRY << endl;
            util.closeWithInput();
            continue;
        }

        // Find the corresponding user
        UserInfo currUser;
        for (auto user : *users)
            if (user.id.compare(id) == 0)
            {
                currUser = user;
                break;
            }

        // Check if the password is correct
        if (password.compare(currUser.password) != 0)
        {
            // Password incorrect
            cout << MES_LOGIN_USER_ERR_PASS << MES_RETRY << endl;
            util.closeWithInput();
            continue;
        }

        // Login success
        // Transfer the user info
        *user = currUser;
        return true;
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
