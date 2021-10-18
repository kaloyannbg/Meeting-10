/*
Задача 14*. Напишете функция int getline(char s[],int lim), която чете ред в
s[] и връща дължината му.
*/

#include <stdio.h>
#include <string.h>

int getLine(char s[]);

int main()
{

    char s[100];

    printf("  -- Please enter something: ");

    scanf("%s", &s);

    int length = getLine(s);

    printf("%d", length);
}

int getLine(char s[])
{

    int i = 0;

    int length = 0;

    for (i; s[i] != '\0'; i++)
    {
        length++;
    }

    return length;
}
/*

ПЪРВО РАЗБРАХ ЗАДАЧАТА ПО ТОЗИ НАЧИН, ПОСЛЕ НАПРАВИХ ГОРНИЯ КОД СЛЕД ОЩЕ ЕДНО ПРОЧИТАНЕ

void getline(char str[], int length[]);

int main()
{

    char str[100] = "RED1\nRED2TS\nRED3TEST\n";
    int lengthOfNewLines[100];

    getline(str, lengthOfNewLines);

    return 0;
}

void getline(char str[], int length[])
{

    int i = 0;

    int charsCount = 0;

    int newLineCount = 0;

    while (str[i] != '\0')
    {

        if (str[i] != '\n')
        {
            charsCount++;
        }

        if (str[i] == '\n')
        {
            length[newLineCount] = charsCount;
            newLineCount++;
            charsCount = 0;
        }
        i++;
    }

    for (i = 0; i < newLineCount; i++)
    {
        printf("Line %d. %d symbols\n", i + 1, length[i]);
    }
}

*/