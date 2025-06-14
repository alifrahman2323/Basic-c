#include <stdio.h>
int main()
{
    int x, y, total = 0;
    printf("Enter the first number :");
    scanf("%d",&x);

    printf("Enter the second number : ");
    scanf("%d",&y);

    if(x > y){
        printf("Desinding");
    }
    else{
        printf("Assending");
    }
    return 0;
}
