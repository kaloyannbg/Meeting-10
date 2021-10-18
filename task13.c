/*
Задача 13. Напишете функцията void lower(char s[]), която
преобразува главните букви в малки.
 */

#include <stdio.h>

int isUpper(char c);

void lower(char s[]);

int main()
{

    char string[] = "CODEACADEMY";

    lower(string);

    printf("%s", string);

    return 0;
}

void lower(char s[])
{

    int i = 0;

    while (s[i] != '\0')
    {

        if (isUpper(s[i]))
        {
            s[i] = s[i] + 32;
        }
        i++;
    }
}

int isUpper(char c)
{

    int isUpperLetter = (c >= 'A' && c <= 'Z');
    return isUpperLetter;
}