/*Faça um programa C que leia dez números que representam as notas de dez
alunos de uma disciplina. As notas variam de zero até dez (0 a 10). O programa
deve validar a entrada de dados e obter: a soma das notas, a média das notas,
a maior nota, a menor nota. Assuma que as notas são informadas corretamente no
intervalo de 1 a 10. */

#include <stdio.h>

int main(){
	
	int soma, maior, menor, nume, c;
	
	//Entrada de valor
	
	printf("Entre com o numero inteiro: ")
	scanf("%c",&nume)
	
	/*----------------------------*/
	
	maior = nume;
	menor = nume;
	soma += nume;
	
	//Processamento
	if (numero<=10){
		for(i=1; i<10; i++){
 		printf("Entre com o %do numero inteiro: ",i+1);
 		scanf("%i", &nume);
 		soma += nume;

 		if(numero>maior)
 			maior=nume;
 		else
 			if(numero<menor)
 				menor=nume;
 		}

 	float media = (float) soma / 10;
	printf("A média dos números é: %.2f", media);
 	printf("\nO menor numero entrado é: %d", menor);
	printf("\nO maior numero entrado é: %d", maior);
	printf("\nA soma dos números é: %c", soma);
	}
	else{
		printf("Número entre 0 a 10");
	}
}
