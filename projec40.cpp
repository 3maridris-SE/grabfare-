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




         cout << "=== Grab Ride Fare Calculator ===" << endl;
        cout << "Choose Ride Type:" << endl;
        cout << "1. Economy" << endl;
        cout << "2. Premium" << endl;
        cout << "Enter choice (1 or 2): ";
        cin >> choice;

        cout << "Enter distance (in km): ";
        cin >> distance;

        cout << fixed << setprecision(2);


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



      // Ask user if they want to repeat
        char again;
        cout << "\nDo you want to calculate another fare? (y/n): ";
        cin >> again;

        if (again == 'n' || again == 'N')
        {
            repeat = false;
            cout << "\nThank you for using Grab Ride Fare Calculator!" << endl;
        }

        cout << endl;
    }

    return 0;
}
