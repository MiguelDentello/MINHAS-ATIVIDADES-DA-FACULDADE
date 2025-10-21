/*
	Name: NovoPerimetro1L.cpp
	Author: Miguel Dentello dos Santos
	Date: 03/07/25 19:53
	Description:	Faça um programa que calcule um perimetro,
					sabendo que o valor de pi é 3,1416 e a formula é a seguinte
					2 X pi X Raio.	
*/
#include<stdio.h>
main()
{
	float pi, raio, circ;
	pi = 3,1416;
	
	printf("Digite o raio de sua circuferencia para calcular o perimetro: ");
	scanf("%f", &raio);
	
	circ = 2 * pi * raio;
	
	printf("O perimetro eh: %.3f", circ);
}//fim do programa
