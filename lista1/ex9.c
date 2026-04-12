// balloon of honor

#include <stdio.h>

int main()
{
    int pos;
    char L;

    scanf(" %c", &L);

    pos = L - 'A' + 1;

    printf("%d\n", pos);

    return 0;
}