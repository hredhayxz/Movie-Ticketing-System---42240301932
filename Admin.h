/*
    Admin.h
    --------
    Derived from User. Provides Admin-specific functionality like
    movie management and viewing all bookings.
*/

#ifndef ADMIN_H
#define ADMIN_H
#include "User.h"

class Admin : public User
{
    public:
        bool login() override;
        void displayMenu() override;

        void addMovie();
        void deleteMovie();
        void viewBookings();
};

#endif
