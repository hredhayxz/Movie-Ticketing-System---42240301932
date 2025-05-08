/*
    Customer.cpp
    -------------
    Implements Customer operations like login, booking, etc.
*/

#include "Customer.h"
#include "BookingSystem.h"
#include <bits/stdc++.h>
using namespace std;

void Customer::registerCustomer()
{
    string uname, pwd;

    cout << "Choose username: ";
    cin >> uname;

    cout << "Choose password: ";
    cin >> pwd;

    ofstream fout("data/users.txt", ios::app);
    fout << uname << " " << pwd << endl;
    fout.close();

    cout << "Registration successful!\n";
}

bool Customer::login()
{
    cout << "Enter username: ";
    cin >> username;

    cout << "Enter password: ";
    cin >> password;

    ifstream fin("data/users.txt");
    string u, p;

    while (fin >> u >> p)
    {
        if (u == username && p == password)
        {
            return true;
        }
    }

    cout << "Login failed!\n";
    return false;
}

void Customer::displayMenu()
{
    int choice;

    do
    {
        cout << "\n1. View Movies\n2. Book Ticket\n3. Cancel Ticket\n4. My Bookings\n0. Logout\nEnter choice: ";
        cin >> choice;

        if (choice == 1)
        {
            viewMovies();
        }
        else
        {
            if (choice == 2)
            {
                bookTicket();
            }
            else
            {
                if (choice == 3)
                {
                    cancelTicket();
                }
                else
                {
                    if (choice == 4)
                    {
                        viewMyBookings();
                    }
                }
            }
        }

    }
    while (choice != 0);
}

void Customer::viewMovies()
{
    BookingSystem::viewMovies();
}

void Customer::bookTicket()
{
    BookingSystem::bookTicket(username);
}

void Customer::cancelTicket()
{
    BookingSystem::cancelTicket(username);
}

void Customer::viewMyBookings()
{
    BookingSystem::viewBookingsByUser(username);
}
