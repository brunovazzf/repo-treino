// pneu

#include <stdio.h>

int main() {
    int M = 0, N = 0, diff = 0;

    scanf("%d", &N);
    scanf("%d", &M);
    
//    if (N >= 1 && N <= 40 && M >= 1 && M <= 40) {
    
        diff = N - M; 
        
        // 5. Tudo que acontece "se for verdade" fica dentro das chaves
        printf("%d\n", diff); 
//    }
    
    return 0;
}