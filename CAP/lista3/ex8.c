#include <stdio.h>

int main()
{
    int i, j, cont;
    i = 1;
    j = 7;

    while(i <= 9)
    {
        j = 7;

        for(cont = 1; cont <= 3; cont++)
        {
            printf("I=%d J=%d\n", i, j);
            j--;
        }
        
        i += 2;
    }

    return 0;
}