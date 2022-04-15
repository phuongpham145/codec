#include <stdio.h>
#include <conio.h>
int main()
{
    int a[100], n, sum = 0, i;
    printf("Nhap n = ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
        if(a[i] > 0){
            sum += a[i];
        }
        //sum += a[i];
    }
    printf("Tbc cac phan tu trong mang = %f", (float)sum / n);
    getch();
    return 0;
}