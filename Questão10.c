/*Fa�a um programa que receba um n�mero inteiro e que verifique se esse n�mero
� par ou �mpar. O programa deve informar se o n�mero � par, caso afirmativo informar
tamb�m se � ou n�o maior que 15 ou se o n�mero � �mpar, caso afirmativo informar se
� ou n�o menor que 50.*/

#include <stdio.h>

int main(){
	
	int nume;
	
	//Entrada de n�meros
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &nume);
	
	//Processamento, classifica��o e impress�o do n�mero
	
	if(nume % 2 == 0){
		printf("O numero e par\n");
		if(nume > 15){
			printf("O numero e maior que 15");
		} else{
			printf("O numero e menor que 15");
		}
	}else{
		printf("O numero e impar\n");
		if(nume < 50){
			printf("O numero e menor que 50");
		}else{
			printf("O numero e maior que 50");
		}
	}
}
