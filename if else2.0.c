#include <stdio.h>
int main()
{
    int temp = 32;
    scanf("%d",&temp);

    if(temp > 30){
        printf("It's a hot day :");
    }
    else if(temp > 20){
        printf("Beautiful day : ");
    }
    else{
        printf("cold day ; ");
    }

}
