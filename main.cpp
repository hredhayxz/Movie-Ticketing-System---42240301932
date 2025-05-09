/*
    main.cpp
    ----------
    Entry point of the Movie Ticketing System.
    Handles user choice for login/registration and directs to Admin or Customer menu.
*/

#include <bits/stdc++.h>
#include "User.h"
#include "Admin.h"
#include "Customer.h"
using namespace std;

int main()
{
    User* user = nullptr;
    int choice;

    cout << "\n1. Admin Login\n2. Customer Login\n3. Register Customer\nEnter choice: ";
    cin >> choice;

    if (choice == 1)
    {
        user = new Admin();
        if (user->login())
        {
            user->displayMenu();
        }
    }
    else
    {
        if (choice == 2)
        {
            user = new Customer();
            if (user->login())
            {
                user->displayMenu();
            }
        }
        else
        {
            if (choice == 3)
            {
                Customer::registerCustomer();
            }
        }
    }

    delete user;
    return 0;
}
