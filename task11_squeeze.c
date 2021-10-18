/*
Задача 11 напишете функция void squeeze(char s[], char c), която
премахва символа с от низа s[]
*/

#include <stdio.h>

void squeeze(char str[], char c)
{
    int i = 0;
    for (i; str[i] != '\0'; i++)
    {
        if (str[i] == c)
        {
            str[i] = ' ';
        }
    }
}

int main()
{

    char string[] = "Codix - Code - Academy";

    char Symb = 'o';

    printf("Before: %s\n", string);

    squeeze(string, Symb);

    printf("After : %s", string);


    return 0;
}