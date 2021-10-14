#include <iostream>

using namespace std;

int main()
{
    cout << "Task 1" << ' ';
    cout << sizeof(int) << ' '; //4, long int = int
    cout << sizeof(short int) << ' '; //2
    cout << sizeof(long long int) << ' '; //8, bc double the int
    cout << sizeof(float) << ' '; //4
    cout << sizeof(double) << ' '; //8
    cout << sizeof(long double) << ' '; //8, bc long long double would be 16
    cout << sizeof(char) << ' '; //1
    cout << sizeof(bool) << ' '; //1
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

    mask = 1 << order - 1; // маска побитового сравнения
    for (int i = 1; i <= order; i++)
    {
        putchar(a & mask ? '1' : '0');
        a <<= 1;
        if (i % 8 == 0) // если остаток деления от 8 равен 0
        {
            putchar(' '); // то вставляем пробел, отделяя другое значение (отделяем 8 битов от других 8 битов)
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
        putchar(b[j] & mask ? '1' : '0');
        b[j] <<= 1;
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