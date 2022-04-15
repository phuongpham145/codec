#include <stdio.h>
#include <conio.h>
void EnterArray(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}
void PrintArray(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}   
void sumTwoArray(int a[], int b[], int c[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        c[i] = a[i] + b[i];
    }
}
void maxArray(int a[], int n)
{
    int i, max;
    max = a[0];
    for (i = 1; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    printf("Max = %d", max);
}   
int main(){
    int a[100], b[100], c[100], n;
    printf("Nhap n = ");
    scanf("%d", &n);
    EnterArray(a, n);
    EnterArray(b, n);
    sumTwoArray(a, b, c, n);
    PrintArray(c, n);
    maxArray(c, n);
    getch();
    return 0;   
}