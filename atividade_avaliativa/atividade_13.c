#include <stdio.h>

int main() {
    int numero, soma = 0, contador = 0;

    printf("numeros 10 :\n");

    while (contador < 10) {
        printf("Número %d: ", contador + 1);
        scanf("%d", &numero);

        if (numero > 0) {
            soma += numero;
            contador++;
        } else {
            printf("Apenas números positivos\n");
        }
    }

    float media = soma / 10.0;

    printf("\ média dos positivos é: %.2f\n", media);

    return 0;
}