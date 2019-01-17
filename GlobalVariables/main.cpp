#include <iostream>
using namespace std;

const int COST_PER_CARPET = 30;
const double TAX_RATE     = 0.06;
const int VALID_DAYS      = 30;

int main(){
    int numOfCarpets;
    double cost;
    double tax;
    double total;
    
    cout << "Welcome to Eray's carpet cleaning service!\n";
    cout << "How man carpets you want to get cleaned?: ";
    cin >> numOfCarpets;
    
    cost = numOfCarpets * COST_PER_CARPET;
    tax  = numOfCarpets * COST_PER_CARPET * TAX_RATE;
    total = cost + tax;
    
    cout << "\nEstimate cost of the cleaning service: \n";
    cout << "Number of carpets: " << numOfCarpets << endl;
    cout << "Price per carpet: $"  << COST_PER_CARPET << endl;
    cout << "Cost: $" << cost << endl;
    cout << "Tax:  $" << tax  << endl;
    cout << "\n=================================================\n";
    cout << "Total pay: $" << total << endl;
    cout << "This estimate is valid for " << VALID_DAYS << " days.\n\n";
    
    return 0;
}
