/*
	Name: NovoAreatriangulo1L.cpp
	Author: Miguel Dentello dos Santos
	Date: 03/07/25 20:33
	Description:	escreva um programa que
					calcule a area de um triangulo
					formula: BasexAltura/2.
*/
#include<stdio.h>
main()
{
	float base, altura, area;
	
	printf("Digite a base do seu triangulo: ");
	scanf("%f", &base);
	
	printf("\n\nDigite a altura do seu triangulo: ");
	scanf("%f", &altura);
	
	area = (base * altura)/2;
	
	printf("A area do seu triangulo eh: %.2f", area);

}//fim do programa
