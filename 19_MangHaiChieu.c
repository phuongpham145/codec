#include <stdio.h>
#include <conio.h>
int main()
{
    int a[100][100], i, j, n, m;
    printf("Nhap so hang, cot: ");
    scanf("%d%d", &n, &m);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nMang vua nhap la:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    getch();
    return 0;
}
