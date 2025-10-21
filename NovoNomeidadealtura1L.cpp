/*
	Name: NovoNomeidadealtura1L.cpp
	Author: Miguel Dentello dos Santos
	Date: 03/07/25 20:49
	Description:	Engendre um algoritmo que leia 
					nome, idade e altura de uma pessoa
					 e mostre esses dados na tela.
*/
#include<stdio.h>
main()
{
	char nome[50];
	int idade;
	float altura;
	idade = 0;
	altura = 0.0;
	
	printf("Digite o seu nome: ");
	scanf("%c", &nome);
	
	printf("\nDigite a sua idade: ");
	scanf("%d", &idade);
	
	printf("\nDigite a sua altura: ");
	scanf("%f", &altura);
	
	printf("\n\nesse  o seu nome: %c", nome);
	printf("\nessa e a sua idade: %d", idade);
	printf("\nessa e a sua altura: %.2f", altura);
	
	
}//fim do programa
