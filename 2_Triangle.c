#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    float a, b, c, p;
    scanf("%f%f%f", &a, &b, &c);
    float perimeter = a + b + c;
    p = perimeter / 2;
    float area = sqrt(p * (p - a) * (p - b) * (p - c));
    printf("Perimeter: %f\n Area: %f\n\n", perimeter, area);
    getch();
    return 0;
}