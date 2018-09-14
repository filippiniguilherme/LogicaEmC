/* Faça um algoritmo que calcule a média de 3 números e apresente o resultado
no final. */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float n1,n2,n3,media;

int main()
{
	setlocale(LC_ALL, "portuguese");
	printf("\n Digite o primeiro número: ");
	scanf("%f", &n1);
	
	printf("\n Digite o segundo número: ");
	scanf("%f", &n2);
	
	printf("\n Digite o terceiro número: ");
	scanf("%f", &n3);
	
	media = (n1 + n2 + n3) / 3;
	printf("\n\n A média é: %0.2f\n\n", media);
	
	system("pause");
	return 0;
}
