#include <stdio.h>

// Funções para cada operação
int soma(int a, int b) {
    return a + b;
}

int subtracao(int a, int b) {
    return a - b;
}

int multiplicacao(int a, int b) {
    return a * b;
}

float divisao(int a, int b) {
    if (b == 0) {
        printf("Erro: Divisão por zero não é permitida!\n");
        return 0;
    }
    return (float) a / b;
}

int main() {
    printf("----------------------\n");
    printf("-   CALCULADORA  -   -\n");
    printf("----------------------\n");
    printf("-   [1] SOMA          -\n");
    printf("-   [2] SUBTRAÇÃO     -\n");
    printf("-   [3] MULTIPLICAÇÃO -\n");
    printf("-   [4] DIVISÃO       -\n");
    printf("----------------------\n");

    int opcao = 0;
    printf("SELECIONE UMA DAS OPÇÕES: ");
    scanf("%d", &opcao);

    int num1, num2;

    if (opcao >= 1 && opcao <= 4) {
        printf("Digite o primeiro número: ");
        scanf("%d", &num1);
        printf("Digite o segundo número: ");
        scanf("%d", &num2);

        switch (opcao) {
            case 1:
                printf("%d + %d = %d\n", num1, num2, soma(num1, num2));
                break;
            case 2:
                printf("%d - %d = %d\n", num1, num2, subtracao(num1, num2));
                break;
            case 3:
                printf("%d * %d = %d\n", num1, num2, multiplicacao(num1, num2));
                break;
            case 4:
                if (num2 != 0)
                    printf("%d / %d = %.2f\n", num1, num2, divisao(num1, num2));
                else
                    printf("Erro: Divisão por zero não é permitida!\n");
                break;
        }
    } else {
        printf("Opção inválida! Por favor, selecione uma opção entre 1 e 4.\n");
    }

    return 0;
}