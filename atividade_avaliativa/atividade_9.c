#include <stdio.h>

int main() {
    float numero1, numero2;

    
    printf("primeiro numero: ");
    scanf("%f", &numero1);

    printf("segundo número: ");
    scanf("%f", &numero2);

    
    if (numero1 > numero2) {
        printf("O maior número é: %.2f\n", numero1);
    } else if (numero2 > numero1) {
        printf("O maior número é: %.2f\n", numero2);
    } else {
        printf("Os dois números são iguais.\n");
    }

    return 0;
}