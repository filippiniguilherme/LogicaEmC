/* Escreva um algoritmo para calcular o valor de y como fun��o de x, segundo a
fun��o y(x) = 3x + 2, num dom�nio real. */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float x, y;

int main ()
{
	setlocale(LC_ALL, "portuguese");
	
	printf("\n FUN��O: y(x) = 3x + 2");
	
	printf("\n\n Digite o valor de x: ");
	scanf("%f", &x);
	
	y = 3 * x + 2;
	
	printf("\n\n O valor de Y �: %0.1f \n\n", y);
	
	system("pause");
	return 0;
	
	
}
