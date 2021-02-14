#include <iostream>

using namespace std;

int numberOfSmallRrooms{0};
int numberOfLargeRrooms{0};
const int per_small_room{25};
const int per_large_room{35};
const double tax_rate{0.06};
const int estimates_valid_days{30};

int main()
{

    // Orders
    cout << "Estimate for carpet cleaning service" << endl;
    cout << "Number of small rooms";
    cin >> numberOfSmallRrooms;
    cout << "Number of large rooms";
    cin >> numberOfLargeRrooms;
    cout << "Price per small room" << per_small_room << endl;
    cout << "Price per large room" << per_large_room << endl;

    // cost calculater
    double largeRoomCost = numberOfLargeRrooms * per_large_room;
    double smallRoomCost = numberOfSmallRrooms * per_small_room;
    double totalCost = largeRoomCost + smallRoomCost;

    // Show costs
    cout << "Cost: $" << totalCost << endl;
    cout << "Tax: $" << totalCost * tax_rate << endl;
    cout << "++++++++++++++++++++++" << endl;
    cout << "Total estimate:" << totalCost + (totalCost * tax_rate) << endl;
    cout << "This estimate is valid for " << estimates_valid_days << endl;

    return 0;
}