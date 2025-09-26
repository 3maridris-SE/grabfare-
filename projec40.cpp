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




         // ===== Rayan: User Interface & Input =====
        // (Rayan write your code here)



        // ===== Alaaeldin: Economy Fare Calculation =====
        // (Alaaeldin write your code here)
        if (choice == 1)
        {
            totalFare = baseFareEconomy + (distance * costPerKmEconomy);
            cout << "\n--- Economy Ride ---" << endl;
            cout << "Base Fare: RM " << baseFareEconomy << endl;
            cout << "Distance Fare: RM " << distance * costPerKmEconomy << endl;
            cout << "--------------------------" << endl;
            cout << "Total Fare: RM " << totalFare << endl;
        }


        // ===== Abdullah: Premium Fare Calculation or Invalid Input =====
        // (Abdullah write your code here)



        // ===== Mohammad: Repeat or Exit Program =====
        // (Mohammad write your code here)
