/*
	Name: 	NovoPareseimpares3L.cpp
	Author:	Miguel Dentello dos Santos
	Date: 	07/07/25 16:43
	Description:	Engendre um codigo que leia 15 números inteiros 
					(positivos e negativos) e mostre:
					a. Quantos são PARES;
					b. A soma dos números ÍMPARES;
					c. Qual é soma maior? PARES ou ÍMPARES.
					d. A subtração de PARES menos os ÍMPARES.
*/
#include<stdio.h>
main()
{
	int i, num, nump, somaip,somap, subpi;
	i = 0;
	num = 0;
	nump = somaip = subpi = somap = 0;
	puts("digite 15 numeros inteiros: ");
	do
	{
		printf("digite o %d numero: ", i + 1);
		scanf("%d", &num);
		i++;
		
		if(num %2 == 0)
		{
			nump++;
			somap += num;
			
		}else if(num %2 != 0)
		{
			somaip += num;	
		}
	}while(i < 5);//fim do while1
	
	printf("quantidade de numeros PARES: %d", nump);
	printf("\nA soma dos numeros IMPARES: %d", somaip);
	printf("\nA soma dos numeros PARES: %d", somap);
	if(somap > somaip)
		printf("\na soma dos pares sao o maior.");
	else
		printf("\na soma dos impares sao maior.");
	
	subpi = somap - somaip;
	printf("\na subtracao dos pares menos os impares eh: %d", subpi);		
}//fim do programa
