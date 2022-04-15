#include <stdio.h>
#include <conio.h>
int main()
{
    int year, age;
    do
    {
        printf("Nhap nam sinh: ");
        scanf("%d", &year);
    } while (year < 1900 || year > 2022);
    age = 2022 - year;
    printf("Tuoi cua ban la: %d", age);
    getch();
    return 0;
}