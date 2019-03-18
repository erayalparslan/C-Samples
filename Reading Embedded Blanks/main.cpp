#include <iostream>
using namespace std;


void someFunction(int mArray[]);

int main()
{
    const int MAX = 30;
    char str[MAX];
    
    cout << "\nEnter a string: " << endl;
    cin.get(str, MAX);
    
    cout << "\nYou entered: " << str << endl;
    return 0;
}


void someFunction(int mArray[]){
    for (int i=0; i<5; i++) {
        cout << "*";
    }
}
