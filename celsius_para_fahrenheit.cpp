/* Leia uma temperatura dada na escala Celsius (C) e imprima o equivalente em
Fahrenheit (F). (Fórmula de conversão: F = 9/5 * C + 32). */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float celsius;
float fahrnheit;

int main ()
{
	setlocale(LC_ALL, "portuguese");
	
	printf("\n Digite a temperatura em Celsius: ");
	scanf("%f", &celsius);
	
	fahrnheit = (celsius * 1.8) + 32;
	
	printf("\n Temperatura em Celsius: %0.1f\n Temperatura em Fahrnheit: %0.1f\n\n", celsius, fahrnheit);
	
	system("pause");
	
	return 0;
}
