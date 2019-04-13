#include <iostream>

int main(){
    using namespace std;
    int rats = 1007;
    int& rodents = rats;


    cout << "val is: " << rodents << endl;

    cout << "address of rats is: " << &rats << endl;
    cout << "ddressof rodents is: " << &rodents << endl;

    rodents  += 77;

    cout << "val is: " << rats << endl;
    cout << "val is: " << rodents << endl;
    return  0;
}