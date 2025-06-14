#include <stdio.h>
int main()
{
    int x, y;
    float result;

    printf("Enter First Number :");
    scanf("%d",&x);

    printf("Enter Second number :");
    scanf("%d",&y);

    if (y != 0){
            result = x / y;
        printf("%.1f \n",result);
    }
    else {
        printf("Division not possible.\n");
    }
    return 0 ;
}
