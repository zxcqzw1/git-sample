#include <iostream>

int sum(int,int);

int main()
{
    std::cout << "master1" << std::endl;
    std::cout << " git1" << std::endl;
    int a = 1;
    int b = 9;
    std::cout << sum(a,b) << std::endl;
    return 0;
}

int sum(int a, int b)
{
    return a + b;
}

