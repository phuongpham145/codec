#include <stdio.h>
#include <conio.h>
int main()
{
    int password = 123456;
    int input;
    do
    {
        printf("Nhap password: ");
        scanf("%d", &input);
        if (input != password)
        {
            printf("Password sai!\n");
        }
    } while (input != password);
    printf("Password dung!");
    getch();
    return 0;
}