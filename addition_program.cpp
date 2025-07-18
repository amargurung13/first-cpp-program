//sum of 2 numbers

#include <iostream>

int sum(int a, int b)
{
    return a+b;
}

int get_value()
{
    std::cout << "Enter the value: " ;
    int input{};
    std::cin >> input;
    return input;
}

int main()
{
    int x{get_value()};
    int y{get_value()};
    std::cout << "The sum of the numbers is: " << sum(x,y) << '\n';
    return 0;
}