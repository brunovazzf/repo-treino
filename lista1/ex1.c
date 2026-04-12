#include <stdio.h>

#define PI 3.14159

int main() {
    double r;
    double area;
    
    scanf("%lf", &r);
    
    area = PI * (r * r);
    
    printf("A=%.4lf\n", area);

    return 0;
}