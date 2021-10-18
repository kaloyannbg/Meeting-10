/*
Задача 2. Напишете функцията int atof(char *s), която
преобразува стринг в число с десетична запетая. Тази функция е
подобна на разглежданата по-горе atoi(char *s), само че когато се
стигне до . точката, отделяща цялата част от дробната, трябва
да се пусне още един цикъл, който да изчисли числото в
дробната част по същия начин, както е числото в цялата част.
Само че тук при дробната част трябва да имаме една
променлива, която да умножаваме по 10 всеки път до края на
дробната част power *= 10; Накрая трябва да разделим
полученото число на тази променлива, за да получим реалното
число с плаващата запетая на точното място.
*/

#include <stdio.h>
#include <string.h>

double atof(char *str);

int main()
{

    char strToDouble[] = "55.103222";

    //atof(strToDouble);

    printf("%f", atof(strToDouble));

    return 0;
}

double atof(char *str)
{

    int length = strlen(str) - 1;

    int digit = 0;

    double total = 0;

    int place = 1;

    int pointNum = 0;

    int pointPlace = 1;

    for (int i = length; str[i] != '.'; i--)
    {
        ++pointNum;

        pointPlace = pointPlace * 10;
    }

    //printf("Length: %d\n PointPos: %d\n", length, pointPlace);

    for (int i = length; i >= 0; i--)
    {

        if (str[i] != '.')
        {
            digit = str[i] - 48;
            total = total + (digit * place);
            place = place * 10;
        }
    }

    return total = total / pointPlace;
}

/*

double atof(char *str)
{

    double total = 0;

    int place = 1;

    int digit = 0;

    int counterAfterDot = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {

        if (str[i] == '.')
        {

            int j = i+1;
            for (j; str[j] != '\0'; j++)
            {
                digit = str[j] - 48;

                total = total + (place * digit);

                place = place * 10;
            }
            break;
        }
        if (str[i] != '.')
        {

            digit = str[i] - 48;

            total = total + (place * digit);

            place = place * 10;
        }
    }

    return total;
}
*/