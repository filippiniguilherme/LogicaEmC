/* Escreva um algoritmo que leia dois números que deverão ser colocados,
respectivamente, nas variáveis VA e VB. O algoritmo deve, então, trocar os
valores de VA por VB e VB por VA e mostrar o conteúdo destas variáveis. */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int A,B,C;

int main ()
{
	setlocale(LC_ALL, "portuguese");
	
	printf("\n Digite o valor de A: ");
	scanf("%d", &A);
	
	printf("\n Digite o valor de A: ");
	scanf("%d", &B);
	
	printf("\n Valores inicias A: %d e B: %d\n", A, B);
	C = A;
	A = B;
	B = C;
	
	printf("\n Valores Finais A: %d e B: %d\n\n", A, B);
	
	system("pause");
	return 0;
	
}
