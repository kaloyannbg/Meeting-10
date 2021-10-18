/*
Задача 7. Напишете функция, която прави същото, както в задача
6, но е рекурсивна.
*/

#include <stdio.h>

int factorial(long double i);

int main()
{

    printf("%le", factorial(5));

    return 0;
}

int factorial(long double i)
{

    if (i <= 1)
    {
        return 1;
    }
    else
    {
        return i * factorial(i - 1);

    }
}