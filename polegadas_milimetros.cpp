/* Leia uma quantidade de chuva dada em polegadas e imprima o equivalente em
milímetros (25,4 mm = 1 polegada). */

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

#define conversao 25.4;

int polegadas;
float milimetros;
int main ()
{
	setlocale(LC_ALL, "portuguese");
	printf("\n Digite a quantidade de chuva em polegadas: ");
	scanf("%d", &polegadas);
	
	milimetros = polegadas * conversao;
	
	printf("\n A chuva em milimetros é: %0.1fm \n\n", milimetros);
	system("pause");
	return 0;
}
