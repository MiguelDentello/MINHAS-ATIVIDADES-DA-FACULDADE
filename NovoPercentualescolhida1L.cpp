/*
	Name: NovoPercentualescolhida1L.cpp
	Author: Miguel Dentello dos Santos
	Date: 03/07/25 21:10
	Description:	Fa�a um codigo que leia um valor
					e fa�a um reajuste no pre�o de acordo 
					com o percentual passado pelo usu�rio. 
					Ex: usu�rio digitou R$ 50,00 e quer reajustar em 10%, 
					como resultado deve-se exibir R$ 55,00.
*/
#include<stdio.h>
main()
{
	float valor, porc, porcen;
	valor = 0.0;
	porc = 0.0;
	
	printf("Digite o seu preco para adicionar uma porcentagem: ");
	scanf("%f", &valor);
	
	printf("Digite um a porcentagem para adicionar: ");
	scanf("%f", &porc);
	
	porcen = valor + (valor * porc / 100);
	
	printf("O seu valor eh: %.2f", porcen);
}//fim do programa
