/*
	Name:	NovoMaiormenor3L.cpp
	Author: Miguel Dentello dos Santos
	Date: 	07/07/25 11:52
	Description:	Faça um coddigo em que seja possível 
					ler 8 números inteiros e aponte, ao final 
					da leitura, qual é o MAIOR e qual é 
					o MENOR número lido! (Utilize laço FOR)
*/
#include<stdio.h>
main()
{
	int i, num, maior, menor;
	i = 0;
	maior = menor = num;
	
	for(i = 0; i < 8; i++)
	{
		printf("Digite o %d numero: ", i + 1);
		scanf("%d", &num);
		
		if(i == 0)  
		{
			maior = menor = num;
		}
		else 
		{
			if(num > maior)  
				maior = num;  

			if(num < menor)  
				menor = num;  
		}
	}//fim do for1
	printf("\no numero maior e: %d", maior);
	printf("\no numero menor e: %d", menor);
}//fim do programa
