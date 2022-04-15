#include <stdio.h>
#include <conio.h>
#include <math.h>
int main() //2x^2 + 3x + 5
{
    float a, b, c, delta;
    scanf("%f %f %f", &a, &b, &c);
    if (a == 0)
    {
        if (b == 0)
        {
            if (c == 0)
            {
                printf("Phuong trinh vo so nghiem");
            }
            else
            {
                printf("Phuong trinh vo nghiem");
            }
        }
        else
        {
            printf("Phuong trinh co nghiem duy nhat : %f", -c / b);
        }
    }
    else
    {
        delta = b * b - 4 * a * c;
        if (delta < 0)
        {
            printf("Phuong trinh vo nghiem");
        }
        else if (delta == 0)
        {
            printf("Phuong trinh co nghiem duy nhat: %f", -b / 2 * a);
        }
        else
        {
            float x1 = -b - sqrt(delta) / 2 * a;
            float x2 = -b + sqrt(delta) / 2 * a;
            printf("Phuong trinh co hai nghiem phan biet:\n x1 = %f \n x2 = %f", x1, x2);
        }
    }
    getch();
    return 0;
}