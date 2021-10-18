/*
Задача 6. Напишете функция, която изчислява произведението на
числата от 1 до 30.
*/

#include <stdio.h>

int main()
{

     long double total = 1;

    for (int i = 30; i > 0; i--)
    {
        total = total * i;
    }

    printf("%le of numbers between 1 and 30", total);

    return 0;
}