#include <stdio.h>

int main() {
    float nota1, nota2, nota3, media;

    // Solicita as três notas ao usuário
    printf("qual a nota: ");
    scanf("%f", &nota1);

    printf("segunda noda do ano: ");
    scanf("%f", &nota2);

    printf("relaxa e ma passa a ultima nota: ");
    scanf("%f", &nota3);

    // Calcula a média
    media = (nota1 + nota2 + nota3) / 3;

    // Exibe as notas e a média com duas casas decimais
    printf("\nAs notinhas do ano: %.2f, %.2f, %.2f", nota1, nota2, nota3);
    printf("\nTa fudido: %.2f\n", media);

    return 0;
}