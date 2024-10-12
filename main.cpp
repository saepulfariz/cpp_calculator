#include <cstdio>
#include <iostream>
using namespace std;

// g++ main.cpp -o main

int main()
{
    int bil1, bil2;
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

    cout << "==================== \n";
    cout << "Result " << bil1 << " + " << bil2 << " = " << (bil1 + bil2) << " \n";

    cout << "==================== \n";
    cout << "==================== \n";

    return 0;
}
