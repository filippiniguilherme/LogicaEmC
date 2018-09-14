/* Escreva um algoritmo para calcular o valor de y como função de x, segundo a
função y(x) = 3x + 2, num domínio real. */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float x, y;

int main ()
{
	setlocale(LC_ALL, "portuguese");
	
	printf("\n FUNÇÃO: y(x) = 3x + 2");
	
	printf("\n\n Digite o valor de x: ");
	scanf("%f", &x);
	
	y = 3 * x + 2;
	
	printf("\n\n O valor de Y é: %0.1f \n\n", y);
	
	system("pause");
	return 0;
	
	
}
