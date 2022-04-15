#include <stdio.h>
#include <conio.h>
#include <math.h>
//10 phut nua bat dau
int suma(int n)
{
    int i, sum = 0;
    //scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum += i * (i + 1); // sum = sum + i*(i+1)
    }
    //printf("%d", sum);
    return sum;
}
int sumb(int n)
{
    int i, sum = 0;
    for (i = 1; i <= n; i++)
    {
        sum += pow(i, i); // x^a = pow(x,a)
    }
    return sum;
}
float sumc(int n)
{
    int i;
    float sum = 0;
    for (i = 1; i <= n; i++)
    {
        sum += 1.0 / i;
    }
    return sum;
}
int main()
{
    int n;
    do
    {
        printf("Nhap kieu muon tinh tong: \n 1. Kieu a \n 2. Kieu b \n 3. Kieu c \n 4. Thoat \n");
        scanf("%d", &n);
    } while (n < 1 || n > 4);
    switch (n)
    {
    case 1:
        printf("Nhap n = ");
        scanf("%d", &n);
        printf("Tong = %d", suma(n));
        break;
    case 2:
        printf("Nhap n = ");
        scanf("%d", &n);
        printf("Tong = %d", sumb(n));
        break;
    case 3:
        printf("Nhap n = ");
        scanf("%d", &n);
        printf("Tong = %f", sumc(n));
        break;
    case 4:
        printf("Thoat chuong trinh");
        break;
    default:
        break;
    }
    getch();
    return 0;
}