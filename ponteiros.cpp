/*
	Name:	ponteiros.cpp
	Author:	Miguel Dentello dos Santos 
	Date: 08/09/25 09:56
	Description:Programa para demonstrar
				o conceito e uso dos
				ponteiros
*/

#include<stdio.h>
main()
{
	int a, b, c;
	a = b = c = 5;
	char respS = 'S';
	char respN = 'N';
	int vet[7], vet2[4];
	
	printf("conteudo de A: %d", a);
	printf("\nconteudo de B: %d", b);
	printf("\nconteudo de C: %d", c);
	printf("\nconteudo de respS: %c", respS);
	printf("\nconteudo de respN: %c", respN);
		
	printf("\n\nendereco da variavel A: %p", &a);
	printf("\nendereco da variavel B: %p", &b);
	printf("\nendereco da variavel C: %p", &c);	
	printf("\nendereco da variavel respS: %p", &respS);	
	printf("\nendereco da variavel respN: %p", &respN);	
	printf("\nendereco do vetor vet1: %p", &vet);	
	printf("\nendereco do vetor vet2: %p", &vet2);	
	printf("\nultimo endereco do vetor vet1: %p", &vet[6]);	

}// fim do programa

