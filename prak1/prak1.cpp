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
    int value;
    cin >> value;
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
    cout << endl;


    cout << "Task 3" << ' ';

    union {
        float pi = 3.14;
        int a;
    };

    mask = 1 << order - 1;
    for (int i = 1; i <= order; i++)
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
    cout << endl;


    cout << "Task 4" << ' ';

    union {
        double pi_1;
        int b[2];
    };

    mask = 1 << order - 1;
    for (int j=0; j <= 1; j++){
     for (int i = 1; i <= order; i++)
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
    }
    cout << endl;
    return 0;
}

