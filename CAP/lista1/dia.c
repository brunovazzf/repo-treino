#include <stdio.h>

/*int main() {
    int mes;
    scanf("%d", &mes);

    if (mes == 2) 
    {
        printf("28\n");
    }
    else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) 
    {
        printf("30\n");
    }
    else 
    {
        printf("31\n");
    }

    return 0;
}*/

/*int main()
{
    int mes;
    scanf("%d", &mes);

    switch(mes)
    {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
    printf("31\n");
    break;

    case 4: case 6: case 9: case 11:
    printf("30\n");
    break;

    case 2: 
    printf("28\n");
    break;
    }

    return 0;
}*/

int main()
{
    int dias_mes[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int mes;

    scanf("%d", &mes);

    printf("%d\n", dias_mes[mes]);

    return 0;
}