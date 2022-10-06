/*Escreva um programa que leia 3 notas de um aluno e a média (ME) das notas dos
exercícios realizados por ele. Calcular a média de aproveitamento, usando a
fórmula: MA =(N1 + N2*2 + N3*3 + ME)/7. A partir da média, informar o conceito de
acordo com a tabela:
maior ou igual a 9 (A)
maior ou igual a 7.5 e menor que 9 (B)
maior ou igual a 6 e menor que 7.5 (C)
maior ou igual a 4 e menor que 6 (D)
menor que 4 (E)
*/

#include <stdio.h>

int main(){

	float nota1, nota2, nota3, mediaexercicios, mediageral;
	
	//Entrada das notas
	
	printf("Digite sua primeira nota: ");
	scanf("%f", &nota1);
	printf("Digite sua segunda nota: ");
	scanf("%f", &nota2);
	printf("Digite sua terceira nota: ");
	scanf("%f", &nota3);
	printf("Digite sua media das notas de exercicios: ");
	scanf("%f", &mediaexercicios);
	
	//Calculo e classificação da média
	
	mediageral = (nota1 + nota2*2 + nota3*3 + mediaexercicios) / 7.0;
	
	if(mediageral >= 9 && mediageral <= 10){
        printf("Sua media e %.2f e o seu conceito e A", mediageral);
    }
    else if(mediageral >= 7.5 && mediageral < 9){
        printf("Sua media e %.2f e o seu conceito e B", mediageral);
    }
    else if(mediageral >= 6 && mediageral < 7.5){
        printf("Sua media e %.2f e o seu conceito e C", mediageral);
    }
    else if(mediageral >= 4 && mediageral < 6){
        printf("Sua media e %.2f e o seu conceito e D", mediageral);
    }
    else{
        printf("Sua media e %.2f e o seu conceito e E", mediageral);
	}
}
