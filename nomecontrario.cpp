/*
	Name: nomecontrario.cpp
	Author:	Miguel Dentello dos Santos
	Date: 15/09/25 09:03
	Description:Escreva um programa que
				leia seu nome, armazene em
				um vetor, passe para uma função
				imprimi-lo ao contrario
*/
#include<stdio.h>
char lerNome();
void impnome(char *, int);
void impnomecon(char *, int);
main()
{
	char nome[30];
	
	int tam = sizeof(nome)/sizeof(char);
	int i;
	puts("digite seu nome: ");
	for(int i = 0; i < tam; i++)
	{
		nome[i] = lerNome();
		if(nome[i] == '\n')
			break;
	}
		puts("\nseu nome:");
		impnome(nome, tam);
		
		puts("\n\nseu nome ao contrario:");
		impnomecon(nome, tam);
		
}//fim do programa
char lerNome()
{
	char nomes;
	
	scanf("%c", &nomes);
	return nomes;
}

void impnome(char *N, int tam)
{
	for(int i = 0; i < tam; i++)
		printf("%c", N[i]);
}

void impnomecon(char *N, int tam)
{
	for(int i = tam - 1; i >= '\0'; i--)
	printf("%c", N[i]);
}
