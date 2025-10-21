/*
	Name: NovoAlturamulherhomemIMC2L.cpp
	Author: Miguel Dentello dos Santos
	Date: 03/07/25 21:57
	Description:	Faça um programa que leia sexo, altura e peso
					de uma pessoa e mostre:
					a. Mensagem "Você é Homem" ou "Você é Mulher"
					b. Classifique a altura da pessoa de acordo com o sexo, ou seja:
					Homens:
					Altura Estatura
					Abaixo de 1,60 Baixo
					1,60 até 1,75 Mediana
					Acima de 1,75 Alto
					Mulheres:
					Altura Estatura
					Abaixo de 1,50 Baixo
					1,50 até 1,65 Mediana
					Acima de 1,65 Alto
					c. Calcule o IMC da pessoa considerando a fórmula:
					IMC = peso / (altura * altura)
*/
#include<stdio.h>
main()
{
	char sexo;
	float altura, peso, imc;
	sexo = ' ';
	altura = 0.0;
	peso = 0.0;
	imc = 0.0;
	
	printf("Digite o seu sexo M/F: ");
	scanf(" %c", &sexo);
	
	printf("digite a sua altura: ");
	scanf("%f", &altura);
	
	printf("Digite o seu Peso: ");
	scanf("%f", &peso);
	
	if(sexo == 'm'||sexo == 'M')
	{//inicio if homem
		printf("voce e um homem!!");
	if(altura < 1.60)
		printf("\nvoce e um homem baixo");
	else if(altura > 1.60 && altura < 1.75)
		printf("\n voce e um homem mediano");
	else
		printf("\nvoce e um homem alto");
		
	}//fim if homem
	else if(sexo == 'f'||sexo == 'F')
	{//inicio if mulher
		printf("\nVoce e uma mulher!!");
	if(altura < 1.50)
		printf("\nvoce e uma mulher baixa");
	else if(altura > 1.50 && altura < 1.65)
		printf("\nvoce e uma mulher mediana");
	else 
		printf("\nvoce e uma mulher alta");
	}//fim if mulher
	else
	{//inicio if invalido
		printf("sexo invalido");
	}//fim if invalido
		
	imc = peso / (altura * altura);
	
	printf("\nseu IMC eh: %.2f", imc);
}//fim do programa






