/*O quadrado de um número natural n é dado pela soma dos n primeiros números
ímpares consecutivos. Por exemplo, 12=1, 22=1+3, 32=1+3+5, 42=1+3+5+7, etc. Dado
um número n,calcule seu quadrado usando a soma de ímpares ao invés de produto. */

#include <stdio.h>

int main(){
	
	int c, n, con, resultado=0;
	
	//Entrada do valor
	
	printf("Digite um número: ");
	scanf("%d", &n);
	
	printf("%d^2 = ", n);
	
	//Processamento dos dados
	
	for(c=0, cal=n*n; cal>resultado; c++);
		if(c%2 != 0){
			printf(" %d^2 = ", n);
			resultado += c;
		}else if(resultado != cal){
			printf("+");
		}
	}
	//Impressão do resultado
	
	printf(" = %d", resultado);
}
