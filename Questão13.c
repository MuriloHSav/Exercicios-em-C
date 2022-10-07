/*Dado um número positivo, crie um programa que escreva todos os números ímpares
menores e/ou iguais a esse número e maiores ou igual a um.*/

#include <stdio.h>

int main(){
	
	int c, nume;
	
	//Entrada do número
	
	printf("Digite um numero positivo: ");
	scanf("%d", &nume);
	
	//Processamento
	
	for(c=1; c<=nume; c++);
		if(c % 2 != 0){
			printf("%d - ", c)
		}
	}
}
