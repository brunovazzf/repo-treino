// idade em dias

#include <stdio.h>

int main()
{
    int total = 0, ano, mes, resto_mes, dias;

    scanf("%d", &total);

    ano = total / 365;
    resto_mes = total % 365;
    mes = resto_mes / 30;
    dias = resto_mes % 30;

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", ano, mes, dias);

    return 0;
}