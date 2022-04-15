#include <stdio.h>
int main()
{
    double sinx = 0, x;
    scanf("%lf", &x); // x = 3
    double n = 1, u = 1;
    double gt = x; 
    while (gt >= 0.0001)
    {
        sinx += u * gt; // 3 , 3 - gt
        u *= -1.00000;
        gt *= (x * x) / (2 * n * (2 * n + 1)); // 2 * 1 * 3 ; gt = gt * (x*x)/(2*n*(2*n+1))
        n++; // 2 
    }
    printf("%.6f", sinx);
    return 0;
}
// int power(double x, int n)
// {
//     int i;
//     double sum = 1;
//     for (i = 1; i <= n; i++)
//     {
//         sum *= x;
//     }
//     return sum;
// }