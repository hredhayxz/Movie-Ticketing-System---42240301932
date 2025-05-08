/*
    User.h
    -------
    Abstract base class for Admin and Customer.
    Enforces login and menu structure using pure virtual methods.
*/

#ifndef USER_H
#define USER_H
#include <bits/stdc++.h>
using namespace std;

class User
{
protected:
    string username, password;
public:
    virtual bool login() = 0;
    virtual void displayMenu() = 0;
    virtual ~User() {}
};

#endif
