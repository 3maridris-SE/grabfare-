#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    bool repeat = true;

    while (repeat == true)
    {
        const double baseFareEconomy = 3.00;
        const double costPerKmEconomy = 1.25;

        const double baseFarePremium = 5.00;
        const double costPerKmPremium = 2.00;

        double distance, totalFare;
        int choice;
