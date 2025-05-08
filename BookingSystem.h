/*
    BookingSystem.h
    ----------------
    Static utility class for managing movies and bookings.
*/

#ifndef BOOKINGSYSTEM_H
#define BOOKINGSYSTEM_H
#include <bits/stdc++.h>
using namespace std;

class BookingSystem
{
    public:
        static void viewMovies();
        static void addMovie();
        static void deleteMovie();
        static void bookTicket(const string& username);
        static void cancelTicket(const string& username);
        static void viewBookingsByUser(const string& username);
        static void viewAllBookings();
};

#endif
