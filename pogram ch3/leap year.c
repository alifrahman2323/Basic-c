#include <stdio.h>
int main()
{
    int year;
    printf("Enter any year :");
    scanf("%d",&year);

    if(year % 400 == 0){
        printf("Leap year",year);
    }
    else if(year % 100 == 0){
        printf("%d is not leap year :");
    }

    else if (year % 4 == 0){
        printf("Leap year ",year);
    }
    else{
        printf("Not leap year");
    }
    return 0;
}
