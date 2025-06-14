#include <stdio.h>
#include <math.h>
int main()
{
    float x1 ,y1 , x2, y2 ,dis;

    printf("Enter the value :");
    scanf("%f%f%f%f",&x1,&y1,&x2,&y2);

    dis = ((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));

    printf("Distance is : %.4f",sqrt(dis));

    return 0;

}
