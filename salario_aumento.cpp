/* Fa�a um algoritmo que receba o sal�rio de um funcion�rio, calcule e mostre o
novo sal�rio, sabendo-se que este teve um aumento de 25%. */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float salario, aumento, salariofinal;

int main ()
{
	setlocale(LC_ALL,"portuguese");
	
	printf("\n Digite o valor do sal�rio: ");
	scanf("%f", &salario);
	
	aumento = salario * 0.25;
	
	salariofinal = salario + aumento;
	
	printf("\n Valor do aumento: %0.2f", aumento);
	printf("\n\n O sal�rio final com aumento �: %0.2f\n\n", salariofinal);
	
	system("pause");
	return 0;
}
