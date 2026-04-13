// beecrowd - 1176

#include <stdio.h>

/*int fibonacci(int x){
    if (x == 0)
    return 0;
    if (x == 1)
    return x;
    else 
    return fibonacci(x - 1) + fibonacci (x - 2);
*/

int main()
{  
    int T, n;
    unsigned long long fib[61];

    fib[0] = 0;
    fib[1] = 1;

    for(int i = 2; i < 61; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    scanf("%d", &T);

    for(int i = 0; i < T; i++)
    {
        scanf("%d", &n);
        printf("Fib(%d) = %llu\n", n, fib[n]);
    }
    return 0;
}