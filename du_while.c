#include <stdio.h>

int main() {
    int i = 0;

    printf("Incremento de 0 a 10:\n");
    do {
        printf("%d\n", i);
        i++;
    } while(i <= 10);

    printf("Decremento de 11 a 0:\n");
    do {
        printf("%d\n", i);
        i--;
    } while(i >= 0);

    return 0;
}