// beecrowd - 2006

#include <stdio.h>

int main()
{
    int alvo, chute;
    int certo = 0;

    scanf("%d", &alvo);

    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &chute);

        if(chute == alvo)
        {
            certo++;
        }
    }

    printf("%d\n", certo);

    return 0;
}