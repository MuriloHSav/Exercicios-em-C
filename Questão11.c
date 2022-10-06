/*Codifique um programa que leia a quantidade de alunas e de alunos. Depois
esse programa deve informar se essa turma possui mais alunos ou mais alunas. Se
essa turma possuir a quantidade de alunas maior que a de alunos, informe o total
de alunos dessa turma. O programa deve verificar se a quantidade de alunos é igual
a de alunas.*/

#include <stdio.h>

int main(){
	
	int alunos, alunas;
	
	//Entrada do número de alunos e alunas
	
	printf("Digite a quantidade de alunos da turma: ");
	scanf("%d", &alunos);
	printf("Digite a quantidade de alunas da turma: ");
	scanf("%d", &alunas);
	
	//Processamento e comparação através de uma condicional, junto com a impressão
	
	if(alunos == alunas){
		printf("Essa turma possui a mesma quantidade de alunos e alunas");
	}else if(alunos > alunas){
		printf("Essa turma tem mais alunos que alunas");
	}else{
		printf("Essa turma tem mais alunas que alunos");
	}
}
