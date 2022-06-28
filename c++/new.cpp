#include <iostream>
int data;
int main()
{
    char symbol;
    int x{}, y{};
    std::cout<<"Enter a number x:";
    std::cin>>x;
    std::cout<<"Enter a number y:";
    std::cin>>y;
    std::cout << "Enter a character(+,-,* or /):";
    std::cin >> symbol;
    switch (symbol)
    {
    case '+':
        data =x+y;
            break;
    case '-':
        data =x-y;
            break;
    case '*':
        data =x*y;
            break;
    case '/':
        data =x/y;
            break;
    default:
        std::cout<<"Invalid character";
            break;
    }
    std::cout<<"The required answer is:"<<data;
}