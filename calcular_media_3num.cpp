/* Fa�a um algoritmo que calcule a m�dia de 3 n�meros e apresente o resultado
no final. */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float n1,n2,n3,media;

int main()
{
	setlocale(LC_ALL, "portuguese");
	printf("\n Digite o primeiro n�mero: ");
	scanf("%f", &n1);
	
	printf("\n Digite o segundo n�mero: ");
	scanf("%f", &n2);
	
	printf("\n Digite o terceiro n�mero: ");
	scanf("%f", &n3);
	
	media = (n1 + n2 + n3) / 3;
	printf("\n\n A m�dia �: %0.2f\n\n", media);
	
	system("pause");
	return 0;
}
