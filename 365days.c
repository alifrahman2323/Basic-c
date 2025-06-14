#include <stdio.h>
int main()
{
    int n,y,m,d;
    printf("Enter a number of days:");
    scanf("%d",&n);

    y = n / 365;

    n = n-(365*y);
    m = n / 30;

    d = n - (m*30);

    printf("%d\n Years :",y);
    printf("%d\n Months :",m);
    printf("%d\n Days :",d);

    return 0;

}
