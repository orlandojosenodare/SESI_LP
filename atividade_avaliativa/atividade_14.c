#include <stdio.h>

int ehPrimo(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i <= n / 2; i++)
        if (n % i == 0) return 0;
    return 1;
}

int main() {
    int numeros[10], soma = 0, entrada, i = 0;

    printf("Digite 10 números inteiros positivos:\n");
    while (i < 10) {
        scanf("%d", &entrada);
        if (entrada > 0) {
            numeros[i++] = entrada;
            soma += entrada;
        }
    }

    printf("\nMédia: %.2f\n", soma / 10.0);
    printf("Verificação de números primos:\n");
    for (i = 0; i < 10; i++) {
        if (ehPrimo(numeros[i]))
            printf("%d é primo\n", numeros[i]);
        else
            printf("%d não é primo\n", numeros[i]);
    }

    return 0;
}