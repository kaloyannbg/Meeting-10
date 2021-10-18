/*
Задача 8 Напишете функция void reverse(char s[]), която обръща низа
char s[ ]
*/

#include <stdio.h>
#include <string.h>

void reverse(char s[]);

int main()
{

    char string[] = "Code Academy";

    printf("%s", string);

    reverse(string);

    printf("%s", string);

    return 0;
}

void reverse(char s[])
{

    int length = strlen(s)-1;

    printf("\nlength: %d\n", length);

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