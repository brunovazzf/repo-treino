#include <stdio.h>

int main()
{
    int B, G, bola;
    scanf("%d %d", &B, &G);
    bola = G/2;

    if (B >= bola)
    {
        printf("Amelia tem todas bolinhas!\n");
    }
    else
    {
        printf("Faltam %d bolinha(s)\n", (G/2) - B);
    }

    return 0;
}