/*Fa�a um programa que mostre todos os n�meros pares existentes entre 1 e 50.*/

#include <stdio.h>

int main(){
	
	int par;
	
	//Condicional para filtrar pares e �mpares
	
	for(par = 1; par < 51; par++){
		if(par % 2 == 0){
			printf("%d - ", par);
		}
	}
}
