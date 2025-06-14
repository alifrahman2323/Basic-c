#include <stdio.h>
int main()
{
    double a,b,c,d,last,m,sum;
    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
    m = (a * 2 + b * 3 + c * 4 + d)/ 10;
    printf("Media : %.lf\n",m);

    if(m >= 5.0){
        printf("Aluno aprovado.\n");
    }
    else if(m >= 5.0)
    {
        printf("Aluno em exame.\n");
        scanf("%lf",&last);
        printf("Note do exam : %lf\n",last);
        if(last + sum / 2.0 > 5.0){
            printf("Aluno aprovado.\n");
        }
        else{
            printf("Aluno reprovado.\n");
        }
        printf("Media final : %lf\n",(last + m) / 2.0);
    }
    else{
        printf("Aluno reprovado.\n");
    }
    return 0;

}
