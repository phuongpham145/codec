// Sort array of integers in ascending order
#include <stdio.h>
#include <conio.h>
int main()
{
    int a[100], n, i, j, temp;
    printf("Nhap n = ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    printf("Mang vua nhap la: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("Mang vua sap xep la:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    getch();
    return 0;
}