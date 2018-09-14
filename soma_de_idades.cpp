/*Faça um algoritmo que leia o nome e as idades de duas pessoas e mostre a
soma das idades destas pessoas. */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

char nome1[40],nome2[40];
int idade1, idade2, soma;

int main ()
{
	setlocale(LC_ALL, "portuguese");
	printf("\n Digite seu nome: ");
	scanf("%s", &nome1);
	fflush(stdin);
	
	printf("\n Digite sua idade: ");
	scanf("%d", &idade1);
	fflush(stdin);
	
	printf("\n Digite seu nome: ");
	scanf("%s", &nome2);
	fflush(stdin);
	
	printf("\n Digite sua idade: ");
	scanf("%d", &idade2);
	fflush(stdin);
	
	system("cls");
	printf(" Nome 1: %s Idade 1: %d\n\n\n Nome 2: %s Idade 2: %d", nome1,idade1,nome2,idade2);
	
	soma = idade1 + idade2;
	printf("\n\n Soma das idades é: %i\n\n\n", soma);
	
	system("pause");
	return 0;
}
