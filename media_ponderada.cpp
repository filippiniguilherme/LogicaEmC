/* Faça um algoritmo que receba 3 notas e respectivos pesos, calcule e mostre a
média ponderada dessas notas. */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float nota1,nota2,nota3,peso1,peso2,peso3, media_ponderada;

int main ()
{
	setlocale(LC_ALL, "portuguese");
	printf("\n\n Digite a primeira nota: ");
	scanf("%f", &nota1);
	
	printf("\n\n Digite o peso da primeira nota: ");
	scanf("%f", &peso1);
	
	printf("\n\n\n Digite a segunda nota: ");
	scanf("%f", &nota2);
	
	printf("\n\n Digite o peso da segunda nota: ");
	scanf("%f", &peso2);
	
	printf("\n\n\n Digite a terceira nota: ");
	scanf("%f", &nota3);
	
	printf("\n\n Digite o peso da terceira nota: ");
	scanf("%f", &peso3);
	
	
	system("cls");
	
	media_ponderada = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / (peso1 + peso2 + peso3);
	
	printf("\n\n A média ponderada é: %0.2f \n\n", media_ponderada);
	
	system("pause");
	
	return 0;
}
