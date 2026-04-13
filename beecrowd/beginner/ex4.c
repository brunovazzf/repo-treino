// beecrowd - 1066

#include <stdio.h>

int main()
{
    int n;
    int pares = 0, impares = 0, positivos = 0, negativos = 0;

    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &n);
        if (n % 2 == 0)
            pares++;
            
        else impares++;

        if (n > 0)
            positivos++;

        else if (n < 0)
        negativos++;
    }

    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n", pares, impares, positivos, negativos);
}