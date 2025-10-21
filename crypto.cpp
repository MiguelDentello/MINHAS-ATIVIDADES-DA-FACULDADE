/*
	Name: crypto.cpp
	Author: 
	Date: 08/09/25 08:20
	Description:programa para cifrar uma mensagem realizando,
				uma merge entre dois vetores de caracteries.
*/
#include<stdio.h>
//sessao de prototipação
	void merge(char[], char[]);

//variaveis globais
	int i,j;
	char crypto[40];//funcao dos 2 vetores

main()
{
	i = j =0;
	char nome[20];
	char docs[20];
	
	printf("digite seu nome completo: ");
	gets(nome);
	printf("informe seu cpf e rg: ");
	gets(docs);
	
	merge(nome,docs);
	
	puts("\ntexto cifrado:");
	for(j = 0; crypto[j] != '\0'; j++)
		printf("%c", crypto[j]);
			
}//fim do programa

//funçao para realizar a mistura "merge" entre os dois vetores
void merge(char nome[], char docs[])
{
	for(i = 0; nome[i] != '\0'; i++)
	{
		crypto[j] = nome[i];
		crypto[j+1] = docs[i];
		j = j+2;
	}
}
