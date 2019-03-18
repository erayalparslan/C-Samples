/*
Now you can type as many lines of input as you want. The function will continue to accept
characters until you enter the terminating character (or until you exceed the size of the array).
*/

#include <iostream>
using namespace std;


void someFunction(int mArray[]);

int main()
{
    const int MAX = 40;
    char str[MAX];
    
    cout << "\nEnter a string: " << endl;
    cin.get(str, MAX, '$');
    
    cout << "\nYou entered: " << str << endl;
    return 0;
}


void someFunction(int mArray[]){
    for (int i=0; i<5; i++) {
        cout << "*";
    }
}
