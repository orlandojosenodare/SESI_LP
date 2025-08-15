#include <stdio.h>

int main() {
    int idade;
    int dias;

    printf("Digite sua idade em anos: ");
    scanf("%d", &idade);

    dias = idade * 365;  // Considerando anos com 365 dias

    printf("Você viveu aproximadamente %d dias.\n", dias);

    return 0;
}