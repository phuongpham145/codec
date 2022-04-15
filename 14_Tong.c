#include <stdio.h>
#include <conio.h>
int sumTwoNumbers(int a, int b){
    return a + b;
}
int main(){
    int a, b;
    printf("Nhap a = ");
    scanf("%d", &a);
    printf("Nhap b = ");
    scanf("%d", &b);
    printf("Tong = %d", sumTwoNumbers(a, b));
    getch();
    return 0;
}
