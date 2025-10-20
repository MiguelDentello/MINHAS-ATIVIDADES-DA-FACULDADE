/*
	Name: pizzaria.cpp
	Author: Miguel Dentello dos Santos
	Date: 14/06/25 11:41
	Description: 	Faça um programa que 
					exiba para o usuário um menu de uma pizzaria com 10 sabores
	 				e apresente para o pizzaiolo a 
					opção escolhida pelo cliente.
*/
#include<stdio.h>
#include<windows.h>
main()
{
	int sabores;
	
	while(1)
	{
		
		sabores = 0;
		system("cls");
		printf("\n===-PIZZARIA DO SERGIO===\n");
		printf("=======================================\n");
		printf("Ola bom dia, pessa seu pedido \n1. Mussarela \n2. Brocolis \n3. Calabresa \n4. Quatro queijos \n5. Frango \n6. Frango com Catupiry \n7. Bolo de chuva \n8. Portuguesa \n9. Atum \n10. O proprio entregador.");
		printf("\n\nPeca seu pedido: ");
		scanf("%d", &sabores);
			switch(sabores)
			{
				case 1: puts("Obrigado pelo seu Pedido!!!\n\n\n\n\nELE QUER UMA PIZZA DE MUSSARELA, FACA AGORA!!!!!!\n ");
						break;
				
				case 2: puts("Obrigado pelo seu Pedido!!!\n\n\n\n\nELE QUER UMA PIZZA DE BROCOLIS, FACA AGORA!!!!!!\n");
						break;
				
				case 3: puts("Obrigado pelo seu Pedido!!!\n\n\n\n\nELE QUER UMA PIZZA DE CALABRESA, FACA JA!!!!!!\n ");
						break;
				
				case 4: puts("Obrigado pelo seu Pedido!!!\n\n\n\n\nELE QUER UMA PIZZA DE QUATRO QUEIJOS, FACA AGORA!!!!!\n");
						break;
				
				case 5: puts("Obrigado pelo seu Pedido!!!\n\n\n\n\nELE QUER UMA PIZZA DE FRANGO, PARA JA!!!!!\n");
						break;
				
				case 6: puts("Obrigado pelo seu Pedido!!!\n\n\n\n\nELE QUER UMA PIZZA DE FRANGO COM CATUPIRY, FACA AGORA!!!!!\n");
						break;
				
				case 7: puts("Obrigado pelo seu Pedido!!!\n\n\n\n\nELE QUER UMA PIZZA DE BOLO DE CHUVA, FACA AGORA!!!!!\n");
						break;
				
				case 8: puts("Obrigado pelo seu Pedido!!!\n\n\n\n\nELE QUER UMA PIZZA DE PORTUGUESA\n");
						break;
				
				case 9: puts("Obrigado pelo seu Pedido!!!\n\n\n\n\nELE QUER UMA PIZZA DE ATUM\n");
						break;
				
				case 10: puts("Obrigado pelo seu Pedido!!!\n\n\n\n\nele quer comer o entregador, providencie isso!\n");
						 break;
				
				default:puts("nao temos essa opcao\n");
			}//fim do case
			if(sabores >= 11)
				exit(0);
			else
				system("pause");
		
	}//fim do while
}//fim do programa
