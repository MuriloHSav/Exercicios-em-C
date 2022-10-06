/*Desenvolva um programa para comparar a idade de Pedro, de Joana e de Ismael
e informar quem é o mais velho. Considere que essas pessoas possuem idades diferentes.*/

#include <stdio.h>

int main(){
	
	int pedro, joana, ismael;
	
	//Entrada de idades
	
	printf("Digite a idade de Pedro: ");
	scanf("%d", &pedro);
	printf("Digite a idade de Joana: ");
	scanf("%d", &joana);
	printf("Digite a idade de Ismael: ");
	scanf("%d", &ismael);
	
	//Comparando as idades
	
	if(pedro > joana && pedro > ismael){
		printf("Pedro é o mais velho");
	}else if(joana > pedro && joana > ismael){
		printf("Joana é a mais velha");
	}else if(ismael > joana && ismael > pedro){
		printf("O Ismael é o mais velho");
	}else{
		printf("Você digitou idades iguais, tente novamente");
	}
}

