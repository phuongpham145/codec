#include <stdio.h>
#include <conio.h>
#define MSG "Vi du su dung while\n"
int main(){
    int i ;
    while(i < 3){
        printf(MSG);
        i++;
    }
    getch();
    return 0;
}