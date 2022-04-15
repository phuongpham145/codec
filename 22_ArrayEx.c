#include <stdio.h>
#include <conio.h>
int EnterArray(int a[], int n)
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
int maxArray(int a[], int n)
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
    return max;
}
int minArray(int a[], int n)
{
    int i, min;
    min = a[0];
    for (i = 1; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    return min;
} 
int sumArray(int a[], int n)
{
    int i, sum;
    sum = 0;
    for (i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }
    return sum;
}
int sortArray(int a[], int n)
{
    int i, j, temp;
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
}
void findInSquare(int a[], int n){
    
}
int main(){
    int a[100], b[100], c[100], n;
    printf("Nhap n = ");
    scanf("%d", &n);
    EnterArray(a, n);
    EnterArray(b, n);
    sumArray(a, n);
    PrintArray(a, n);
    maxArray(a, n);
    minArray(a, n);
    sortArray(a, n);
    PrintArray(a, n);
    getch();
    return 0;   
}