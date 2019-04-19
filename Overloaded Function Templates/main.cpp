//  Overloaded Function Templates


#include <iostream>
const int Lim = 8;

void Show(int a[]);
template <typename Any>
void Swap(Any &a, Any &b);

template <typename Any>
void Swap(Any *a, Any *b, int n);

int main(){
    using namespace std;
    int i = 10, j = 20;
    cout << "i, j = " << i << ", " << j << ".\n";
    cout << "Using compiler-generated int swapper:\n";
    Swap(i,j); // matches original template
    cout << "Now i, j = " << i << ", " << j << ".\n";
    int d1[Lim] = {0,7,0,4,1,7,7,6};
    int d2[Lim] = {0,7,2,0,1,9,6,9};
    cout << "Original arrays:\n";
    Show(d1);
    Show(d2);
    Swap(d1,d2,Lim); // matches new template
    cout << "Swapped arrays:\n";
    Show(d1);
    Show(d2);
    // cin.get();
    return 0;
}

template <typename Any>
void Swap(Any &a, Any &b) {
    Any temp;
    temp = a;
    a = b;
    b = temp;
}

template <typename Any>
void Swap(Any a[], Any b[], int n){
    Any temp;
    for (int i = 0; i < n; i++)
    {
    temp = a[i];
    a[i] = b[i];
    b[i] = temp;
    }
}
void Show(int a[])
{
    using namespace std;
    cout << a[0] << a[1] << "/";
    cout << a[2] << a[3] << "/";
    for (int i = 4; i < Lim; i++)
    cout << a[i];
    cout << endl;
}
