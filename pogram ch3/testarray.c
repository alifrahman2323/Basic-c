 #include <stdio.h>
int main()
{
    int mynum[] = {125, 45, 48, 70};
    mynum[0] = 2001;

    printf("The value of index is : %d \n",mynum[0]);
    printf("The value of index is : %d \n",mynum[1]);
    printf("The value of index is : %d \n",mynum[2]);
    printf("The value of index is : %d \n",mynum[3]);

    return 0;
}
