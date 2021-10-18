#include <stdio.h>

void printArr(char *pArr)
{

    for (int i = 0; pArr[i] != '\0'; i++)
    {
        printf("%c", pArr[i]);
    }
}
int main()
{

    char name[100];

    printf(" -- Enter your name: ");

    scanf("%s", &name);

    printArr(name);

    return 0;
}