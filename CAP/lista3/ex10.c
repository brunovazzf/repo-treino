#include <stdio.h>
#include <math.h>

#define PI 3.14

int main() {
    int N;
    float x, r;

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%f", &x);

        r = sqrt(x / (4 * PI));

        if (r < 12) 
        {
            printf("vermelho = R$ %.2f\n", x * 0.09);
        } 
        else if (r <= 15) 
        { 
            printf("azul = R$ %.2f\n", x * 0.07);
        } 
        else 
        {
            printf("amarelo = R$ %.2f\n", x * 0.05);
        }
    }

    return 0;
}