#include <iostream>
#include <cmath>
using namespace std;

const double CostPerHour = 18.50;
const double CostPerMinute = 0.40;
const double CostOfDinner = 20.70;

int main() {
    int NumberOfGuests;
    int NumberOfMinutes;
    int NumberOfServers;

    cout << "*********Event Management System**********" << endl;

    cout << "Enter Name of Event" << endl;
    string Event;
    getline(cin, Event);

    cout << "Enter the Customer's First and Last name" << endl;
    string customerName;
    getline(cin, customerName);

    cout << "Enter Number of Guests" << endl;
    cin >> NumberOfGuests;

    cout << "Enter Number of minutes in the event" << endl;
    cin >> NumberOfMinutes;

   
    NumberOfServers = ceil(static_cast<double>(NumberOfGuests) / 20);

   
    double Cost1 = (NumberOfMinutes / 60) * CostPerHour;
    double Cost2 = (NumberOfMinutes % 60) * CostPerMinute;
    double CostForOneServer = Cost1 + Cost2;

    
    double TotalFoodCost = NumberOfGuests * CostOfDinner;

    
    double AverageCost = TotalFoodCost / NumberOfGuests;

    
    double TotalCost = TotalFoodCost + (CostForOneServer * NumberOfServers);

    
    double DepositAmount = TotalCost * 0.25;

    cout << "Number of Servers required: " << NumberOfServers << endl;
    cout << "Cost for One Server: " << CostForOneServer << endl;
    cout << "Cost for Food: " << TotalFoodCost << endl;
    cout << "Average Cost Per Person: " << AverageCost << endl;
    cout << "Total Cost: " << TotalCost << endl;
    cout << "Deposit Amount (25% of Total Cost): " << DepositAmount << endl;


}

