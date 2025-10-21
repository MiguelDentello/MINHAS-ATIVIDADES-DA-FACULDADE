/*
	Name: NovoNivelobesidade.cpp2L
	Author: Miguel Dentello dos Santos
	Date: 03/07/25 23:05
	Description:	Escreva um algoritmo que classifique 
					o IMC de uma pessoa, a partir da 
					leitura de altura e peso, exibindo a 
					mensagem adequada conforme a tabela abaixo:
					Menor que 18,5 Baixo peso
					18,5 a 24,9 Peso adequado
					25,0 a 29,9 Sobrepeso
					30,0 a 34,9 Obesidade grau I
					35,0 a 39,9 Obesidade Severa
					Acima de 40,0 Obesidade Mórbida		
*/
#include <stdio.h>
main()
{
	float altura, peso, imc;
	altura = 0.0;
	peso = 0.0;
	imc = 0.0;
	
	printf("digite sua altura: ");
	scanf("%f", &altura);
	
	printf("digite seu peso: ");
	scanf("%f", &peso);
	
	imc = peso / (altura * altura);
	printf("seu imc eh: %.2f",imc);
	
	if(imc < 18.50)
		printf("\nvoce esta com baixo peso");
	else if(imc > 18.50 && imc < 24.90)
		printf("\nvoce esta com o peso adequado");
	else if(imc > 25.00 && imc < 29.90)
		printf("\nvoce esta com sobrepeso");
	else if(imc > 30.00 && imc < 34.90)
		printf("\nvoce esta com obesidade grau 1");
	else if(imc > 35 && imc < 39.90)
		printf("\nvoce esta com obesidade severa");
	else
		printf("\nvoce esta com obesidade morbida");
}//fim do programa
