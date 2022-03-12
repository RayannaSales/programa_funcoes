#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int calculo(int num_inteiro);

int main(){
    setlocale(LC_ALL,"Portuguese_Brazil");
	
	int valor, total;
	
	printf("Insira um Número: \n");
	scanf("%d", &valor);
	
	total = calculo(valor);
	
	printf("O Sómatorio dos nuúmeros entre 1 e o inserido é: %d \n", total); 

} 

int calculo(int num_inteiro){
	
	int total = 0;
	
	for(int cont = 2; cont < num_inteiro; cont++) {
	
		total = total + cont;
	}
	return total;
}

