/*
    Admin.cpp
    ----------
    Implements admin login and menu operations.
*/

#include "Admin.h"
#include "BookingSystem.h"
#include <bits/stdc++.h>
using namespace std;

bool Admin::login()
{
    cout << "Enter admin username: ";
    cin >> username;

    cout << "Enter password: ";
    cin >> password;

    return (username == "admin" && password == "admin123");
}

void Admin::displayMenu()
{
    int choice;

    do
    {
        cout << "\n1. Add Movie\n2. Delete Movie\n3. View All Bookings\n0. Logout\nEnter choice: ";
        cin >> choice;

        if (choice == 1)
        {
            addMovie();
        }
        else
        {
            if (choice == 2)
            {
                deleteMovie();
            }
            else
            {
                if (choice == 3)
                {
                    viewBookings();
                }
            }
        }

    }
    while (choice != 0);
}

void Admin::addMovie()
{
    BookingSystem::addMovie();
}

void Admin::deleteMovie()
{
    BookingSystem::deleteMovie();
}

void Admin::viewBookings()
{
    BookingSystem::viewAllBookings();
}
