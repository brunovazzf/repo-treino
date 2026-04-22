#include <stdio.h>

int main()
{   
    int N;
    if(scanf("%d", &N) != 1) return 0;

    for (int i = 1; i < 10000; i++)
    {
        if(i % N == 2)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}