// avg 3
#include <stdio.h>
int main() 
{
    float N1, N2, N3, N4, NE, m1, m2;
    scanf("%f %f %f %f", &N1, &N2, &N3, &N4);

    m1 = (2*N1 + 3*N2 + 4*N3 + 1*N4)/10.0;
    printf("Media: %.1f\n", m1);

    if (m1 >= 7.0)
    {
        printf("Aluno aprovado.\n");
    }
    else if (m1 < 5.0)
    {
        printf("Aluno reprovado.\n");
    }
    else {
        printf("Aluno em exame.\n");
        scanf("%f", &NE);
        printf("Nota do exame: %.1f\n", NE);
        m2 = (m1 + NE)/2.0;
        if (m2 >= 5.0)
        {
            printf("Aluno aprovado.\n");
        }
        else printf("Aluno reprovado.\n");

        printf("Media final: %.1f\n", m2);
    }
    
    return 0;
}