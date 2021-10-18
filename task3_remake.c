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

    char strToDouble1[] = "01234as-dasd55a5.52bb5"; // print -555.525000
    char strToDouble2[] = "55aazxcx5.5sk12asdasdasd"; // print -555.525000
    char strToDouble3[] = "52x8xx.55sa2kaosd"; // print 52.550000 , because i (2) = 52(2)

    printf(" %s  in  double is:  %f\n",strToDouble1 ,atof(strToDouble1));
    printf(" %s  in  double is:  %f\n",strToDouble2 ,atof(strToDouble2));
    printf(" %s  in  double is:  %f\n",strToDouble3 ,atof(strToDouble3));

    return 0;
}

int isLetter(char c)
{

    int isLet = (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') ? 1 : 0;

    return isLet;
}

double atof(char *str)
{
    // Remove letters, and 123456 or increment positions, if have '-'
    char newArray[100];

    int strLength = strlen(str);

    int counterNewArray = 0;

    int isNegative = 0;

    for (int i = 0; i < strLength; i++)
    {
        if (str[i] == '-')
        {
            isNegative = 1;
            continue;
        }
        else if (str[i] == i + '0')
        {
            continue;
        }
        else if (isLetter(str[i]))
        {
            continue;
        }

        newArray[counterNewArray] = str[i];
        counterNewArray++;
    }

    newArray[counterNewArray] = '\0';

    int place = 1;

    double total = 0;

    int digit = 0;

    int pointNum = 0;

    for (int i = counterNewArray - 1; i >= 0; i--)
    {
        if (newArray[i] == '.')
        {
            int temp = i;
            while (temp > 0)
            {
                pointNum++;
                temp--;
            }
        }
        else if (newArray[i] != '.')
        {
            digit = newArray[i] - 48;
            total = total + (digit * place);
            place = place * 10;
        }
    }

    int divisor = 1;

    for (int i = 0; i < pointNum; i++)
    {
        divisor = divisor * 10;
    }

    total = total / divisor;

    if (isNegative)
    {
        total = total - (total * 2);
        return total;
    }
    return total;
}
