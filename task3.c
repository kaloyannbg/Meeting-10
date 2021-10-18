/*
Упражнение 3.* Добавете проверка във функцията int atof(char
*s) дали подаденият стринг няма показни позиции преди числото,
и ако има, ги премахнете. Проверете дали числото не е
отрицателно и, ако е така, включете знака в резултата
*/

#include <stdio.h>
#include <string.h>

double atof(char *str);
int isLetter(char c);

int main()
{

    char strToDouble[] = "1256.555-sad555";

    // atof(strToDouble);

    printf("%f", atof(strToDouble));

    return 0;
}

int isLetter(char c)
{

    int isLet = (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') ? 1 : 0;

    return isLet;
}

double atof(char *str)
{

    char convertedStr[100];

    int length = strlen(str) - 1;

    int digit = 0;

    double total = 0;

    int place = 1;

    int pointNum = 0;

    int pointPlace = 1;

    int isNegative = 0;

    int countStr = 0;

    int countConvertedStr = 0;

    while (str[countStr] != '\0')
    {
        if (str[countStr] == '-')
        {
            isNegative = 1;
        }
        else if (!isLetter(str[countStr]) && str[countStr] != countStr + '0')
        {
            convertedStr[countConvertedStr] = str[countStr];
            countConvertedStr++;
        }

        countStr++;
    }

    convertedStr[countConvertedStr] = '\0';

    for (int i = countConvertedStr; convertedStr[i] != '.'; i--)
    {
        ++pointNum;

        pointPlace = pointPlace * 10;
    }

    // printf("Length: %d\n PointPos: %d\n", length, pointPlace);

    for (int i = countConvertedStr; i >= 0; i--)
    {

        if (convertedStr[i] != '.')
        {
            digit = convertedStr[i] - 48;
            total = total + (digit * place);
            place = place * 10;
        }
    }

    total = total / pointPlace;

    if(isNegative) {
        total = total - (total * 2);
        return total;
    }

    return total;
}
