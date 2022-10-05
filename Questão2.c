/*Crie um programa que receba o valor da temperatura em Fahrenheit e imprime o
correspondente em Celsius e em Kelvin:*/

#include <stdio.h>

int main(){
	
	int fahrenheit, celsius, kelvin;
	
	//Entrada de dados
	
	printf("Digite uma temperatura em Fahrenheit: ");
	scanf("%d", &fahrenheit);
	
	//Processamento e Convers�o das medidas
	
	celsius = (fahrenheit - 32) * 5/9;
	kelvin = (fahrenheit - 32) * 5/9 + 273,15;
	
	//Apresenta��o dos resultados ap�s a convers�o
	
	printf("Convers�o de Fahrenheit para Celsius: %dC\n", celsius);
	printf("Convers�o de Fahrenheit para Kelvin: %dK\n", kelvin);
	}
