/*
    BookingSystem.cpp
    ------------------
    Handles all backend logic for movies and bookings.
*/

#include "BookingSystem.h"
#include <bits/stdc++.h>
using namespace std;

void BookingSystem::viewMovies()
{
    ifstream fin("data/movies.txt");
    string line;

    while (getline(fin, line))
    {
        cout << line << endl;
    }

    fin.close();
}

void BookingSystem::addMovie()
{
    string title, time;

    cout << "Enter movie title: ";
    cin.ignore();
    getline(cin, title);

    cout << "Enter show time: ";
    getline(cin, time);

    ofstream fout("data/movies.txt", ios::app);
    fout << title << " | Time: " << time << endl;
    fout.close();

    cout << "Movie added successfully.\n";
}

void BookingSystem::deleteMovie()
{
    cout << "Delete movie feature not implemented yet.\n";
}

void BookingSystem::bookTicket(const string& username)
{
    string title;

    cout << "Enter movie title to book: ";
    cin.ignore();
    getline(cin, title);

    ofstream fout("data/bookings.txt", ios::app);
    fout << username << " booked " << title << endl;
    fout.close();

    cout << "Ticket booked.\n";
}

void BookingSystem::cancelTicket(const string& username)
{
    cout << "Cancel ticket feature not implemented yet.\n";
}

void BookingSystem::viewBookingsByUser(const string& username)
{
    ifstream fin("data/bookings.txt");
    string line;

    while (getline(fin, line))
    {
        if (line.find(username) != string::npos)
        {
            cout << line << endl;
        }
    }

    fin.close();
}

void BookingSystem::viewAllBookings()
{
    ifstream fin("data/bookings.txt");
    string line;

    while (getline(fin, line))
    {
        cout << line << endl;
    }

    fin.close();
}
