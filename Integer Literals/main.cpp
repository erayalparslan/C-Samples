#include <iostream>
using namespace std;


/*
 *
 *  C++ lets you write integers in three different number bases: base10, base 16, base 8
 *
*/

int main()
{

    // Different base to decimal


    int a = 42, b = 0x42, c = 042;
    cout << "Decimal 42 is: " << a << endl;
    cout << "Hexadecimal 42 is: " << b << endl;
    cout << "Octal 42 is: " << c << endl;
    cout << "\n************************" << endl;

    // Decimal base to different base

    int d = 42;

    cout << "Decimal 42 is: " << d << endl;
    cout << hex;  // Manipulator for changing base
    cout << "Hex 42 is: " << d << endl;
    cout << oct;  // Manipulator for changing base
    cout << "Octal 42 is: " << d << endl;

    return 0;
}