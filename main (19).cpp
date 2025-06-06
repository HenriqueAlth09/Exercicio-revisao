#include <stdio.h>

int main() {
    int opc, taxa = 0;
    printf("==-- Hotel --==\n");
    for (int i = 0; i < 10; i++) {
        printf("O Quarto %d Está Ocupado? (1 para sim, 0 para não)\n", i + 1);
        scanf("%d", &opc);
        if (opc == 1) {
            taxa++;
        }
    }
    int calc = (taxa * 100) / 10;
    printf("Taxa de ocupação: %d%%\n", calc);
    return 0;
}