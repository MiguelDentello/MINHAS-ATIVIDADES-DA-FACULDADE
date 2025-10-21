/*
	Name: texto2.cpp
	Author:Miguel Dentello dos Santos 
	Date: 08/09/25 10:43
	Description: Programa para demonstrar
				 o uso de ponteiros com 
				 tratamento de strings
*/
#include <stdio.h>

main()
{
    char nome[50];
    int tam = 0;

    printf("Nome: ");
    gets(nome);

    while (nome[tam] != '\0')
        tam++;

    printf("\nTamanho do vetor: %d", tam);
    printf("\nNome digitado: %s", nome);
}//fim do programa
