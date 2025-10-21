/*
	Name: NovoIdade2L.cpp
	Author: Miguel Dentello dos Santos
	Date: 04/07/25 17:48
	Description: 	Faça um programa que leia a 
					idade de uma pessoa e classifique
					conforme a tabela abaixo:
					Até 2 anos Bebê
					3 a 10 Criança
					11 a 19 Adolescente
					20 a 65 Adulto
					Acima de 65 Idoso
*/					
#include<stdio.h>
main()
{
	int idade;
	idade = 0;
	
	printf("Digite a sua idade em anos: ");
	scanf("%d", &idade);
	
	if(idade <= 2)
		printf("\nVoce eh um bebe");
	else if(idade >= 3 && idade <= 10)
		printf("\nVoce é uma crianca");
	else if(idade >= 11 && idade <= 19)
		printf("\nVoce e um adolescente");
	else if(idade >= 20 && idade <= 65)
		printf("\nVoce e um adulto");
	else
		printf("\nvoce e um idoso");
}//fim do programa
