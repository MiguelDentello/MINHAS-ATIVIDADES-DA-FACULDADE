/*
	Name:	NovoMaiormenor3L.cpp
	Author: Miguel Dentello dos Santos
	Date: 	07/07/25 11:52
	Description:	Fa�a um coddigo em que seja poss�vel 
					ler 8 n�meros inteiros e aponte, ao final 
					da leitura, qual � o MAIOR e qual � 
					o MENOR n�mero lido! (Utilize la�o FOR)
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
