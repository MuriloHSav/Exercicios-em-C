/*Implemente um programa que solicita as notas das duas provas feitas por cada
um dos alunos de uma turma (as notas t�m de estar no intervalo [0 10]) e imprime
para cada um a m�dia das notas. O programa deve parar imediatamente ap�s ter sido
digitado o valor 50 para nota da primeira prova.*/

#include <stdio.h>

int main(){
	
	int nota1, nota2;
	float media;
	
	//la�o de repeti��o para adquirir as notas
	
	while(nota1 != 50){
		printf("Digite a nota da primeira prova: ");
		scanf("%d", &nota1);
		printf("Digite a nota da segunda prova: ");
		scanf("%d", &nota2);
		
		
	//C�lculo da m�dia
	
	media = (nota1 + nota2) / 2;
	printf("A sua media e:%.2f\n", media);
	}
}
