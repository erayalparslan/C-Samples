#include <iostream>

//  Function Templates


template <typename Any>
void Swap(Any &a, Any &b);

int main(){
    using namespace std;

    int a = 10, b = 20;
    cout << "Before Swap" << endl;
    cout << "a: " << a << ", b: " << b << endl;

    Swap(a,b);

    cout << "After Swap" << endl;
    cout << "a: " << a << ", b: " << b << endl;


    double c = 10.88, d = 20.99;
    cout << "Before Swap" << endl;
    cout << "c: " << c << ", d: " << d << endl;

    Swap(c,d);

    cout << "After Swap" << endl;
    cout << "c: " << c << ", d: " << d << endl;

    return  0;
}

template <typename Any>
void Swap(Any &a, Any &b) {
    Any temp;
    temp = a;
    a = b;
    b = temp;
}