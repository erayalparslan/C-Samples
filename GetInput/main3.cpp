// cin & cout chaining

#include <iostream>


int main(){
    int num1, num2;
    std::cout << "enter two numbers: ";
    std::cin >> num1 >> num2;
    
    std::cout << num1 << " + " << num2 << " is " << num1+num2 << std::endl;
    
    return 0;
}
