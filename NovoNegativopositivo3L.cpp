/*
	Name: 	NovoNegativopositivo3L.cpp
	Author: Miguel Dentello dos Santos
	Date: 	07/07/25 11:07
	Description:	Escrever um codigo que leia 12 valores, 
					um de cada vez, e que conte quantos destes 
					valores são NEGATIVOS e quantos são POSITIVOS, 
					exibindo ao final a soma total dos positivos e dos
					negativos, separadamente: (Utilize laço WHILE)
*/
#include<stdio.h>
main()
{
	int i, numpos, numneg, num, somaneg, somapos;
	i = 0;
	numpos = 0;
	numneg = 0;
	num = 0;
	somaneg = 0;
	somapos = 0;
	
	puts("Digite 12 numeros mudando para negativos e positivos:");
	while(i < 12)
	{
		printf("Digite o %d numero: ", i + 1);
		scanf("%d", &num);
		i++;
			
			if(num < 0)
			{
				numneg++;
				somaneg = somaneg + num;
				
			}else
			{
				numpos++;
				somapos = somapos + num;
			}
				
				
	}//fim do while 1
	
	printf("\nnumeros negativos: %d", numneg);
	printf("\nnumeros positivos: %d", numpos);
	printf("\nsoma dos negativos: %d", somaneg);
	printf("\nsoma dos positivos: %d", somapos);

}// fim do programa
