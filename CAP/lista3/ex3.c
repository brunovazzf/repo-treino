#include <stdio.h>

int main()
{
    int opcao = 0;
    int alcool = 0, gasolina = 0, diesel = 0;
    
    while (opcao != 4)
    {
        scanf("%d", &opcao);

        if(opcao == 1)
        {
            alcool++;
        }

        else if(opcao == 2)
        {
            gasolina++;
        }
        else if(opcao == 3)
        {
            diesel++;
        }
    } 

    printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n", alcool, gasolina, diesel);

    return 0;
}