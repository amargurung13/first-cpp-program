#include <iostream>

int get_input()
{
    std::cout << "Enter the first number: ";
    int num1{};
    std::cin >> num1;
    std::cout << "Enter the second number: ";
    int num2{};
    std::cin >> num2;
    int add{num1+num2};
    return add;
}

int main()
{
    int result{get_input()};
    std::cout << "The sum of the numbers are: " << result << '\n';
    return 0;
}
