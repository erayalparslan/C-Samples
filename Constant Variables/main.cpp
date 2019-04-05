#include <iostream>

int main()
{
    /*

    // CONSTANT INTEGER


    const int *a = new int(20);
    int *b = new int(10);

    std::cout << "Address of a is: "  << a << std::endl;
    std::cout << "Address of b is: "  << b << std::endl;


    a = b;

    std::cout << "=================="<< std::endl;

    std::cout << "Address of a is: "  << a << std::endl;
    std::cout << "Address of b is: "  << b << std::endl;


    std::cout << "=================="<< std::endl;

    std::cout << "Value of a is: "  << *a << std::endl;
    std::cout << "Value of b is: "  << *b << std::endl;

    *b = 22;
    *b = 4444;

    std::cout << "=================="<< std::endl;

    std::cout << "Value of a is: "  << *a << std::endl;
    std::cout << "Value of b is: "  << *b << std::endl;
*/

    // -----------------------------------------------------------------


    // CONSTANT POINTER


    //int *const d = new int(40);
    int *p = new int(70);
    int* const c = new int(30);

    std::cout << "Value of c: " << *c << std::endl;
    std::cout << "Address of c: " << c << std::endl;
    std::cout << "Value of p: " << *p << std::endl;
    std::cout << "Address of p: " << p << std::endl;

    *c = 70000;

    std::cout << "=================="<< std::endl;

    std::cout << "Value of c: " << *c << std::endl;
    std::cout << "Address of c: " << c << std::endl;
    std::cout << "Value of p: " << *p << std::endl;
    std::cout << "Address of p: " << p << std::endl;



    return 0;
}
