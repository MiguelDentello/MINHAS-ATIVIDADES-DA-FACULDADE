/*
	Name: Novoimparpar2L.cpp
	Author:	Miguel Dentello dos Santos
	Date: 04/07/25 18:31
	Description:	Fa�a um codigo que leia
					 um n�mero inteiro e diga
					 se ele � PAR ou �MPAR.
*/
#include<stdio.h>
main()
{
	int num;
	num = 0;
	
	printf("digite um numero para saber se ele � par ou impar: ");
	scanf("%d", &num);
	
	if(num %2 == 0)
		printf("ele e um numero par!");
	else if(num %2 == 1)
		printf("ele e um numero impar!");
	else
		printf("o que voce fez para dar errado?");
}//fim do programa 

