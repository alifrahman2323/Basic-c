#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mark1 , mark2 , mark3, mark4 , mark5;
    int sum;
    //------------------------------------------------------------//

    float average , percentage;
    printf("Hello sir , Welcome to our software : \n");

    //================================================================//

    printf("Enter the mark of sub 1 out of 100 : \n");
    scanf("%d",&mark1);


    printf("Enter the mark of sub 2 out of 100 : \n");
    scanf("%d",&mark2);


    printf("Enter the mark of sub 3 out of 100 : \n");
    scanf("%d",&mark3);


    printf("Enter the mark of sub 4 out of 100 : \n");
    scanf("%d",&mark4);

    printf("Enter the mark of sub 5 out of 100 : \n");
    scanf("%d",&mark5);

    sum = mark1 + mark2 + mark3 + mark4 + mark5;
    printf("Summation of all subject is : %d\n",sum);

    average = sum / 5;
    printf("Average is : %.2f\n",average);

    percentage = (sum * 100) / 500;
    printf("Your percentage is : %.4f\n",percentage);

    if (percentage >= 90 && percentage <= 100){

        printf("\n In GPA = 4.00");
        printf("\n Grade: A+");
    }
     else if (percentage >= 80 && percentage <= 94){

        printf("\n In GPA = 3.70");
        printf("\n Grade: A");
    }

     else if (percentage >= 80 && percentage <= 84){

        printf("\n In GPA = 3.3");
        printf("\n Grade B+");
    }

    else if (percentage >= 70 && percentage <= 74){

        printf("\n In GPA = 2.7 ");
        printf("\n Grade B-");
    }
     else if (percentage >= 65 && percentage <= 69){

        printf("\n In GPA = 2.3");
        printf("\n Grade: C+");
    }

     else if (percentage >= 60 && percentage <= 64){

        printf("\n In GPA = 2.0");
        printf("\n Grade: C-");
    }
    else if (percentage >= 55 && percentage <= 59){

        printf("\n In GPA = 1.7");
        printf("\n Grade: D+");
    }

    else if (percentage >= 50 && percentage <= 54){

        printf("\n In GPA = 1.3");
        printf("\n Grade: D-");
    }
     else if (percentage >= 0 && percentage <= 50){

        printf("\n In GPA = 0.00");
        printf("\n Grade: F");
    }
    printf("Thank you for using our application.\n ");

    return 0 ;

}
