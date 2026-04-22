#include <stdio.h>

int main()
{
    float n, m;
    int cont;
    n = 0;
    m = 0;
    cont = 0;
    
    while(1)
    {
    scanf("%f", &n);
    if(n > 10 || n < 0)
    {
        printf("nota invalida\n");
    }
    else
    {
        m += n;
        cont++;
    }

    if(cont == 2){
        m /= 2;
        break;
    }
    }

    printf("media = %.2f\n", m);
        
    return 0;
}