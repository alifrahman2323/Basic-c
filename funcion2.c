#include <stdio.h>
double square (double num)
{
    return (num * num);
}
int main()
{
    int num ;
    double n;
    printf("\n \n Function : find square any numnber : \n");
    printf("-----------------------------------------------");

    printf("Input any number for aquare : ");
    scanf("%d",&num);
    n = square(num);
    printf("The square %d is :  %.2f\n",num,n);
    return 0;

}
