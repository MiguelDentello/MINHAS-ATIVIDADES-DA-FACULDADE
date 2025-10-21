/*
	Name:	NovoTrocadevariaveis.cpp2L
	Author: Miguel Dentello dos Santos
	Date: 04/07/25 18:05
	Description: 	Escreva um programa que leia
				 	dois números inteiros, guarde-os 
					em duas variáveis(x e y), mostre na tela. 
					Após isso, troque os valores das 
					variáveis em memória, ou seja, 
					o valor de x deve ser guardado 
					na variável y e viceversa.
					Mostrar os novos valores das variáveis.
*/
#include<stdio.h>
main()
{
	int x, y, z;
	x = 0;
	y = 0;
	
	printf("Digite um numero inteiro para guardar no X: ");
	scanf("%d", &x);
	
	printf("Digite um numero inteiro para guardar no Y: ");
	scanf("%d", &y);
	
	puts("\nSuas variaveis:");
	
	printf("X = %d",x);
	printf("\nY = %d",y);
	
	puts("\n-VARIAVEIS TROCADAS:");
	
	z = x;
	x = y;
	y = z;
	
	printf("X = %d",x);
	printf("\nY = %d",y);
}//fim do programa 
