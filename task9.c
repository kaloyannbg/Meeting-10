/*
Задача 9. Използвайте do-while цикъл, за да напишете функцията void
itoa(int n, char s[ ]), която преобразува число в символен низ (обратната
функция на atoi). do-while цикълът e необходим, тъй като в масива s[ ] ще
трябва да се постави поне един символ, дори ако n е нула. Ако n = 123, за
да вземем последната цифра, трябва да разделим n по модул(%) на
основата на бройната система 10. За да получите символ число, трябва да
съберете резултата с '0' т.е. 48. За да вземете следващото число, трябва да
разделите n на 10. Това продължава докато n е различно от нула. Това
генерира низа в обратен ред – 321, затова използваме функцията
reverse(char s[]); от задача 18 , за да обърнем низа.
*/

#include <stdio.h>
#include <string.h>

void toa(int numberToString);
void reverse(char s[]);

int main() {

    int number = 1235;

    toa(number);

    return 0;
}

void toa(int numberToString) {

    int tempNum = numberToString;

    int rem = 0;

    char array[100];

    int i = 0;
    do {

        rem = tempNum % 10;

        array[i] = rem + '0';

        tempNum/=10;

        i++;

    } while (tempNum != 0);

    array[i] = '\0';

    reverse(array);

    printf("%s", array);

}

void reverse(char s[])
{

    int length = strlen(s)-1;

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

