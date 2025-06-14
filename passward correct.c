#include <stdio.h>
int main()
{
    int pass;
    printf("Enter the passward:");
    scanf("%d",&pass);

    if (pass == 1234){
        printf("Correct passward :");
    }
    else{
        printf("Wrong passward :");

    }
    return 0;
}
