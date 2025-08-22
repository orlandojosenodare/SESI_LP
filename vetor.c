#include <stdio.h>

int main() {
    int numeros[5];
    int soma = 0;

    printf("VETORES\n");

    for(int i = 0; i < 5; i++) {
        printf("Digite o %dº valor:\n", i + 1);
        scanf("%d", &numeros[i]);
    }

    for(int i = 0; i < 5; i++) {
        soma = soma + numeros[i];
    }

    printf("A soma de todas as posições é: %d\n", soma);

    return 0;
}