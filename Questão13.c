/*Dado um n�mero positivo, crie um programa que escreva todos os n�meros �mpares
menores e/ou iguais a esse n�mero e maiores ou igual a um.*/

#include <stdio.h>

int main(){
	
	int c, nume;
	
	//Entrada do n�mero
	
	printf("Digite um numero positivo: ");
	scanf("%d", &nume);
	
	//Processamento
	
	for(c=1; c<=nume; c++);
		if(c % 2 != 0){
			printf("%d - ", c)
		}
	}
}
