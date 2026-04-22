// beecrowd - 3048 - senha secreta

#include <stdio.h>

int main()
{
    int N, v1, v2, cont;
    v2 = 1;
    cont = 1;

    scanf("%d", &N);
    for (int i = 1; i <= N; i++)
    {
        scanf("%d", &v1);
        if(v1 != v2)
        {
            cont++;
            v2 = v1;
        }
    }

    printf("%d\n", cont);

    return 0;
}