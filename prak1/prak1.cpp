#include <iostream>

using namespace std;

int main()
{
    cout << "Task 1" << ' ';
    cout << sizeof(int) << ' ';
    cout << sizeof(short int) << ' ';
    cout << sizeof(long long int) << ' ';
    cout << sizeof(float) << ' ';
    cout << sizeof(double) << ' ';
    cout << sizeof(long double) << ' ';
    cout << sizeof(char) << ' ';
    cout << sizeof(bool) << ' ';
    cout << endl;

    cout << "Task 2" << ' ';


    int value = 127;
    unsigned int order = sizeof(int) * 8;
    unsigned int mask = 1 << order - 1;
    for (int i = 1; i <= order; i++)
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

    return 0;
}

