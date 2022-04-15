#include <stdio.h>
#include <conio.h>
#include <math.h>
#define pi 3.14
int main()
{
    int radius;
    scanf("%d", &radius);
    printf("Chu vi = %f", radius * 2 * pi);
    printf("Dien tich = %f", radius * radius * pi);
    getch();
    return 0;
}