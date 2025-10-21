/*
	Name: comparar.cpp
	Author: Miguel Dentello dos Santos
	Date: 15/09/25 10:17-
	Description:Um codigo que compare
				duas strings (vetor de caracteres),
				diga qual é a maior delas
				e até que ponto elas são iguais
*/
#include <stdio.h>

void comparar(char *, char *);

main() 
{
    char nome[50];
    char nome2[50];

    puts("Digite o primeiro nome: ");
    gets(nome);

    puts("Digite o segundo nome: ");
    gets(nome2);

    comparar(nome, nome2);
}//fim do programa

void comparar(char *N, char *N2) {
    int i = 0;

    while (N[i] != '\0' && N2[i] != '\0' && N[i] == N2[i]) {
        i++;
    }

    if (N[i] > N2[i])
        printf("O primeiro nome eh maior.\n");
    else if (N[i] < N2[i])
        printf("O segundo nome eh maior.\n");
    else
        printf("Os nomes sao iguais.\n");

}




