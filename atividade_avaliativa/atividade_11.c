#include <stdio.h>

int main() {
    int valor = 0;

   
    while (valor <= 100000) {
        printf("Valor atual: %d\n", valor);
        valor += 1000;
    }

}