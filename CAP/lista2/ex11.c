// aumetno
#include <stdio.h>

int main()
{
    float salario, i;
    scanf("%f", &salario);

    if(salario >= 0 && salario <= 400)
    {
        i = 0.15;
    }
    else if (salario > 400 && salario <= 800)
    {
        i = 0.12;
    }
    else if (salario > 800 && salario <= 1200)
    {
        i = 0.10;
    } //
    else if (salario > 1200 && salario <= 2000)
    {
        i = 0.07;
    }
    else
    {
        i = 0.04;
    }

    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %.0f %%\n", salario + salario*i, salario*i, i*100);

    return 0;
}