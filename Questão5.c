/*Escreva um programa que imprime a tabela ASCII (código decimal, código hexa, caractere)para os códigos de 0 a 127*/

#include <stdio.h>

int main(){

	int c;

	//Laço de repetição para impressão da tabela ASCII

	for(c = 0; c < 128; c++){
		printf("%c\n", c);
	}
}
