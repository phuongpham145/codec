#include <stdio.h>
#include <conio.h>
float Sum(float x, float n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return x;
    return (1 + x / n) * Sum(x, n - 1) - (x / n) * Sum(x, n - 2);
}
int main()
{
    int x, n;
    printf("Enter x and n: ");
    scanf("%d %d", &x, &n);
    printf("Sum: %.2f", Sum(x, n));
    getch();
    return 0;
}