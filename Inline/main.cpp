#include <iostream>

inline double square(double x) { return x * x; }

int main(){
	using namespace std;
	double a = 10.0;
	cout << "square of " << a << " is: " << square(a) << endl;
}