#include <iostream>

using namespace std;

int main()
{
    std::cout << "Task 1" << ' ';
    std::cout << sizeof(int) << ' ';
    std::cout << sizeof(short int) << ' ';
    std::cout << sizeof(long long int) << ' ';
    std::cout << sizeof(float) << ' ';
    std::cout << sizeof(double) << ' ';
    std::cout << sizeof(long double) << ' ';
    std::cout << sizeof(char) << ' ';
    std::cout << sizeof(bool) << ' ';
    std:cout << endl;

    std::cout << "Task 2" << ' ';


    int value;
    cin >> value;
    unsigned int order = sizeof(int) * 8;
    unsigned int mask = 1 << order - 1;
    for (i = 1; i <= order; i++)
    {
        putchar(value & mask ? '1' : '0');
        value <<= 1;
        if (i % 8 == 0)
        {
            putchar(' ');
        }
        if (i % order - 1 == 0)
        {
            putchar(' ');
        }
    }

std:cout << endl;






    std::cout << "Task 3" << ' ';

    union {
        float pi = 3.14;
        int a;
    };

    mask = 1 << order - 1;
    for (i = 1; i <= order; i++)
    {
        putchar(a & mask ? '1' : '0');
        a <<= 1;
        if (i % 8 == 0)
        {
            putchar(' ');
        }
        if (i % order - 1 == 0)
        {
            putchar(' ');
        }
    }
    return 0;
}

