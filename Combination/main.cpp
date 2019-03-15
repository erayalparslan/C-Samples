#include<iostream>
using namespace std;


// Functions

int factorial(int value){
    if ( value < 2 )
        return value;
    return value * factorial(value - 1);
}

int combination(int val1, int val2){
    return factorial(val1) / ( factorial((val1 - val2)) * factorial(val2) );
}
void findCombination(){
    int val1;
    int val2;
    long int res;

    cout << "*********************************************\nThis console program solves combination problems\n\n\n";

    do {
        cout << "Enter the first number: ";
        cin >> val1;
        if (val1 <= 0 || val1 > 10)
            cout << "\n******************************\nRequirements are not met...\n******************************\n" << endl;
    } while(val1 <= 0 || val1 > 10);

    do {
        cout << "Enter the second number: ";
        cin >> val2;
        if (val2 <= 0 || val2 > 10)
            cout << "\n******************************\nRequirements are not met...\n******************************\n" << endl;
    } while(val2 <= 0 || val2 > 10);
    res = combination(val1, val2);

    printf("\n================================\nCombination of %d and %d is: %li\n================================\n\n", val1, val2, res);
}



// Main

int main(){
    findCombination();
return 0;
}
