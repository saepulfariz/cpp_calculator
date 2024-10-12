#include <cstdio>
#include <iostream>
using namespace std;

// g++ main.cpp -o main

int main()
{
    int bil1, bil2, result;
    string name;
    char aritmetic;
    // std::cout << "Hello World!";
    // printf("Calculator Simple");

    cout << "==================== \n";
    cout << "Calculator Simple C++ \n";
    cout << "==================== \n";
    cout << "== By Saepulfariz == \n";
    cout << "==================== \n";

    cout << "Input your name: ";
    cin >> name;

    cout << "Input bil 1: ";
    scanf("%d", &bil1);

    cout << "Input bil 2: ";
    scanf("%d", &bil2);

    cout << "Input aritmetic(+,-,*,/): ";
    cin >> aritmetic;

    cout << "==================== \n";
    cout << "Name : " << name << "\n";

    if (aritmetic == '+')
    {
        result = (bil1 + bil2);
    }
    else if (aritmetic == '-')
    {
        result = (bil1 - bil2);
    }
    else if (aritmetic == '*')
    {
        result = (bil1 * bil2);
    }
    else if (aritmetic == '/')
    {
        result = (bil1 / bil2);
    }

    cout << "==================== \n";
    cout << "Result " << bil1 << " " << aritmetic << " " << bil2 << " = " << result << " \n";

    cout << "==================== \n";
    cout << "==================== \n";

    return 0;
}
