#include <stdio.h>

int main()
{
	float c = 0


	printf("Quantos graus Celsius?\n");
	scanf("%f", &c);
	printf("A temperatura de Fahrenheit %2.f", c * (9.0/5.0) + 32);

	return 0;
}