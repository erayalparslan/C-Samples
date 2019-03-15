#include <iostream>
#define SQUARE(x) (x*x)


int Fibonacci(int x)
{
    if (x < 2){
     return x;
    }
    return (Fibonacci (x - 1) + Fibonacci (x - 2));
}

int main(int argc, char const *argv[]) {

  int tmp = Fibonacci(41);
  std::cout << tmp << '\n';

  return 0;
}
