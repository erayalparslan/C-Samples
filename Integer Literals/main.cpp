#include <iostream>
using namespace std;


/*
 *
 *  C++ lets you write integers in three different number bases: base10, base 16, base 8
 *
*/

int main()
{

    int a = 42, b = 0x42, c = 042;
    cout << "Decimal 42 is: " << a << endl;	// 42
    cout << "Hexadecimal 42 is: " << b << endl; // 66
    cout << "Octal 42 is: " << c << endl;	// 34

    return 0;
}