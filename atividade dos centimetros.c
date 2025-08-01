#include <stdio.h>

int main() {
    float cm, metros;

    // Solicita o valor em centímetros
    printf("quantos centímetros vc tem la ele em: ");
    scanf("%f", &cm);

    // Converte para metros (1 metro = 100 centímetros)
    metros = cm / 100;

    // Exibe o resultado
    printf("%.2f isso equivalem a uns %.2f metros.\n", cm, metros);

    return 0;
}