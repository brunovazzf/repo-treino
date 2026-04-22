#include <stdio.h>

int main() {
    int grand_prix, p, resultados[105][105];

    while (scanf("%d %d", &grand_prix, &p) && (grand_prix != 0 || p != 0)) {
        
        for(int i = 0; i < grand_prix; i++) {
            for(int j = 0; j < p; j++) {
                scanf("%d", &resultados[i][j]);
            }
        }

        int S;
        scanf("%d", &S); 

        for(int sistema = 0; sistema < S; sistema++) {
            int K, regras[105] = {0};
            scanf("%d", &K);
            for (int j = 0; j < K; j++) {
                scanf("%d", &regras[j]);
            }

            int pontos_totais[105] = {0}; 
            for(int c = 0; c < grand_prix; c++) {
                for(int pil = 0; pil < p; pil++) {
                    int pos = resultados[c][pil];
                    if (pos <= K) {
                        pontos_totais[pil] += regras[pos - 1];
                    }
                }
            }
        
            int maior = pontos_totais[0];
            for (int i = 1; i < p; i++) {
                if (pontos_totais[i] > maior) {
                    maior = pontos_totais[i];
                }
            }
            int primeiro = 1; 
            for (int i = 0; i < p; i++) {
                if (pontos_totais[i] == maior) {
                    if (!primeiro) printf(" "); 
                    printf("%d", i + 1);       
                    primeiro = 0;              
                }
            }
            printf("\n");
        }
    }
    return 0;
}