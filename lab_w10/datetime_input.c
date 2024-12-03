#include <stdio.h>

int main()
{
    printf("Enter the date with following format \"Weekday dd/mm/yyyy\" \n");
    char weekday[10];
    int day, month, year;
    scanf("%s %d/%d/%d", weekday, &day, &month, &year);
    printf("Enter the time with following format \"hh:mm:ss\" \n");
    int hour, minute, second;
    scanf("%d:%d:%d", &hour, &minute, &second);
    printf("Your entered date: %s, %.02d/%02d/%04d \n", weekday, day, month, year);
    printf("Your entered time: %02d:%02d:%02d", hour, minute, second);
    return 0;
}