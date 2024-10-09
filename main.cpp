#include <cstdio>
#include <iostream>
using namespace std;

// g++ main.cpp -o main

int main()
{
    int bil1, bil2;
    // std::cout << "Hello World!";
    // printf("Kalkulator Sederhana");

    cout << "==================== \n";
    cout << "Calculator Simple C++ \n";
    cout << "==================== \n";
    cout << "== By Saepulfariz == \n";
    cout << "==================== \n";

    cout << "Input bil 1: ";
    scanf("%d", &bil1);

    cout << "Input bil 2: ";
    scanf("%d", &bil2);

    cout << "==================== \n";
    cout << "Result " << bil1 << " + " << bil2 << " = " << (bil1 + bil2) << " \n";

    cout << "==================== \n";
    cout << "==================== \n";

    return 0;
}
