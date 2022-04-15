#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    float x1, y1, x2, y2;
    scanf("%f %f %f %f", &x1, &y1, &x2, &y2);
    float hsg = (y2 - y1) / (x2 - x1);
    float distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("He so goc: %f\n Distance: %f\n", hsg, distance);
    getch();
    return 0;
}