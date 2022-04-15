#include <stdio.h>
#include <conio.h>
int main() // 2h15'30' , 2h59phut50s
{
    int hour, minute, second;
    printf("Enter the hour, minute, and second : ");
    scanf("%d%d%d", &hour, &minute, &second);
    printf("Now is %d hour %d minute %d second.", hour, minute, second);
    int bonusSec;
    printf("\nEnter the bonus second you want to add : ");
    scanf("%d", &bonusSec);
    second += bonusSec; // second = second + bonusSec 
    // bonusSec = 40s => 2h15'70' , 90s
    if (second >= 60)
    {
        second -= 60; // 10s second = second - 60;// 30s
        minute++; // 16 phút// 60 phút
        if (minute >= 60)
        {
            minute -= 60; // 0 phút
            hour++; //3h
            printf("Now is %d hour %d minute %d second.", hour, minute, second);
        }
        else
        {
            printf("Now is %d hour %d minute %d second.", hour, minute, second);
        }
    }
    else
    {
        printf("Now is %d hour %d minute %d second.", hour, minute, second);
    }
    getch();
    return 0;
}