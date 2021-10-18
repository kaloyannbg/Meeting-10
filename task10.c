/*
Задача 10. Напишете функция void itob(int n, char s[], int b), която
преобразува цяло число n в низ s базиран на основа b.
Например itob( n, s[], 16) представя числото n като шеснадесетично число в
стринга s[].
*/

#include <stdio.h>
#include <string.h>

void reverse(char s[])
{

    int length = strlen(s) - 1;

    int i = 0;

    while (length >= i)
    {
        char temp = s[i];

        s[i] = s[length];

        s[length] = temp;

        i++;

        length--;
    }
}

void itob(int number, char numberSystem[], int base)
{

    if(base != 2 && base != 8 && base != 16) {
        base = 16;
    }

    int count = 0;

    int rem = 0;

    while (number > 0)
    {

        rem = number % base;

        if (rem <= 9)
        {
            numberSystem[count] = rem + '0';
        }
        else if (rem == 10)
        {
            numberSystem[count] = 'A';
        }
        else if (rem == 11)
        {
            numberSystem[count] = 'B';
        }
        else if (rem == 12)
        {
            numberSystem[count] = 'C';
        }
        else if (rem == 13)
        {
            numberSystem[count] = 'D';
        }
        else if (rem == 14)
        {
            numberSystem[count] = 'E';
        }
        else if (rem == 15)
        {
            numberSystem[count] = 'F';
        }

        number /= base;
        count++;
    }

    numberSystem[count] = '\0';

    reverse(numberSystem);

    printf("  -- %s", numberSystem);
}

int main()
{

    char str[100];

    printf(" -- Enter number: ");

    int number = 0;

    scanf("%d", &number);

    int base = 0;

    printf(" -- Enter base: ");

    scanf("%d", &base);

    itob(number, str, base);

    return 0;
}