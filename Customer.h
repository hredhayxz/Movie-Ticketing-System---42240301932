/*
    Customer.h
    -----------
    Derived from User. Includes registration, booking, and personal booking management.
*/

#ifndef CUSTOMER_H
#define CUSTOMER_H
#include "User.h"

class Customer : public User
{
    public:
        static void registerCustomer();
        bool login() override;
        void displayMenu() override;

        void viewMovies();
        void bookTicket();
        void cancelTicket();
        void viewMyBookings();
};

#endif
