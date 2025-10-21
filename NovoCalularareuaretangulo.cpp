/*
	Name: NovoCalularareuaretangulo.cpp
	Author: Miguel Dentello dos Santos
	Date: 03/07/25 19:40
	Description:	Elabore um algoritmo que calcule
					a área de um retangulo lendo frente e fundo,
					mostrando o resultado final.
*/
#include<stdio.h>
main()
{
	int area, altura, comp;
	
	printf("Digite a altura do seu retangulo: ");
	scanf("%d", &altura);
	
	printf("\n\nDigite o comprimento do seu retangulo: ");
	scanf("%d", &comp);
	
	area = altura * comp;
	printf("\n\na area do seu retangulo eh: %d", area);
}//fim do programa
