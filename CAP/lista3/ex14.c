#include <stdio.h>

int main()
{
    float x, soma, pos;
    pos = 0;
    soma = 0;

    for (int i = 0; i < 6; i++)
    {
        scanf("%f", &x);

        if(x > 0)
        {
            pos++;
            soma += x;
        }
    }

    printf("%.0f valores positivos\n%.1f\n", pos, soma/pos);
    

    return 0;
}