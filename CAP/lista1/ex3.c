// nota esquecida

#include <stdio.h>

int main()
{
    int A = 0, B = 0, M = 0;

    scanf("%d", &A);
    scanf("%d", &M);
    
    B = (2 * M) - A;

    if(M >= 0 && M <= 100 && A >= 0 && A <= 100)
    {
        printf("%d\n", B);
    }
}