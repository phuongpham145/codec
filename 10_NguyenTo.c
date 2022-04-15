#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    int n, i ;
    scanf("%d", &n);
    for (i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            printf("So khong nguyen to");
            return 0;
        }
    }
    printf("So nguyen to");
    return 0;
}