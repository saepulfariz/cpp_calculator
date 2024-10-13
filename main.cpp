#include <cstdio>
#include <iostream>
#include <cctype> // Untuk tolower()
using namespace std;

// g++ main.cpp -o main

void menu()
{
    int bil1, bil2, result;
    string name;
    char aritmetic;
    // std::cout << "Hello World!";
    // printf("Calculator Simple");

    // windows
    // system("cls");

    // unix
    // system("clear");

    // general
    cout << "\033[2J\033[1;1H";

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

    if (aritmetic == '+' || aritmetic == '-' || aritmetic == '*' || aritmetic == '/')
    {
        cout << "==================== \n";
        cout << "Result " << bil1 << " " << aritmetic << " " << bil2 << " = " << result << " \n";
    }
    else
    {
        cout << "==================== \n";
        cout << "Please input (+,-,*,/)\n";
    }

    cout << "==================== \n";
    cout << "==================== \n";
}

int main()
{
    bool repeat = true;
    char repeat_char;

    while (repeat == true)
    {
        menu();
        cout << "Repeat (y), End (x) :";
        cin >> repeat_char;

        if (toupper(repeat_char) == 'y')
        {
            repeat = true;
        }
        else
        {
            repeat = false;
        }
    }
    return 0;
}
