#include <iostream>

int multiple(int,int);

int main()
{
    std::cout << "master1" << std::endl;
    std::cout << " git1" << std::endl;
    int a = 1;
    int b = 9;
    std::cout << multiple(a,b) << std::endl;
    return 0;
}

int multiple(int a, int b)
{
    return a * b;
}

