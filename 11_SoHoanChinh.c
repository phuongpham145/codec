#include <stdio.h>
#include <conio.h>
int main()
{
    int n, i, sum = 0;
    scanf("%d", &n);
    for (i = 1; i < n; i++) // 6 , 7
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    if (sum == n)
    {
        printf("%d la so hoan chinh", n);
    }
    else
    {
        printf("%d khong phai la so hoan chinh", n);
    }
    getch();
    return 0;
}