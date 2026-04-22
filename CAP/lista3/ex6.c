#include <stdio.h>

int main()
{
    int N, T, V, TOTAL;
    TOTAL = 0;
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        scanf("%d %d", &T, &V);
        TOTAL += T*V;
    }

    printf("%d\n", TOTAL);

    return 0;
}