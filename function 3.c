// awap two number using function
#include <stdio.h>
void swap (int *,int *);
int main()
{
    int num1,num2;
    printf("Enter Firsr number : ");
    scanf("%d",&num1);

    printf("Enter Second number : ");
    scanf("%d", &num2);

    printf("Before swapping :%d%d\n\n",num1,num2);
    swap(&num1,&num2);

    printf("After swapping : %d%d%d\n\n",num1,num2);
    return 0;
}
void swap(int *p,int *q)
{
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}
