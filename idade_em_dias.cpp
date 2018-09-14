/* Desenvolva um programa que exibe a idade em dias */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int idade, idade_dias;

int main ()
{
	setlocale(LC_ALL, "portuguese");
	printf("\n Digite sua idade: ");
	scanf("%d", &idade);
	
	idade_dias = idade * 365;
	
	printf("\n Idade em dias: %d \n\n", idade_dias);
	
	system("pause");
	return 0;
}

