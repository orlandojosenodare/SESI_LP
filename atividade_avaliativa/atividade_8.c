#include <stdio.h>

void main()

{

	float valor = 0;

	printf("Insira seu valor: ");
	scanf("%f", &valor );


	if ( valor < 50 ) {
		valor = (valor * 0.05) + valor;
	} else if( valor < 100 ) {
		valor = (valor * 0.10) + valor;
	} else {
		valor = (valor * 0.15) + valor;
	}

	printf("\nO novo preco do produto: %.2f", valor);
}