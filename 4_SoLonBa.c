#include <stdio.h>
#include <conio.h>
// Đợi các bạn vào đủ 15h chúng ta sẽ bắt đầu nhé :))
int main()
{
    int a, b, c, max;
    scanf("%d%d%d", &a, &b, &c);
    max = a;
    if (max < b)
        max = b;
    if (max < c)
        max = c;
    printf("max = %d\n", max);
    getch();
    return 0;
}