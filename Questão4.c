/*Fa�a um programa que l� dois valores e imprime: (0,1)
a) se o primeiro valor for menor que o segundo, a lista de valores do primeiro at� o segundo;
b) se o primeiro valor for menor que o segundo a lista de valores do segundo at� o primeiro
em ordem decrescente;
c) se ambos forem iguais a mensagem "valores iguais".*/

#include <stdio.h>

int main(){

	int nume1, nume2, c;
	
	// Entrada dos valores
	
	printf("Digite um valor: ");
	scanf("%d", &nume1);

	printf("Digite um valor: ");
	scanf("%d", &nume2);
	
	//Condi��o respons�vel pela separa��o e classifica��o dos valores recebidos.
	
	if(nume1 < nume2){
		printf("O primeiro valor e menor e a lista de valores do primeiro ate o segundo e: ");
		for(c=nume1; c < nume2; c++){
			printf("%d - ", c);
		}
	} else if (nume2 < nume1){
		printf("O primeiro valor e maior e a lista de valores do segundo ate o primeiro e: ");
		for(c = nume1; c>= nume2; c--){
			printf("%d - ", c);
		}
	} else{
		printf("Os valores digitados sao iguais");
	}
}
