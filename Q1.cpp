#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int calculo(int num_inteiro);

int main(){
    setlocale(LC_ALL,"Portuguese_Brazil");
	
	int valor, total;
	
	printf("Insira um N�mero: \n");
	scanf("%d", &valor);
	
	total = calculo(valor);
	
	printf("O S�matorio dos nu�meros entre 1 e o inserido �: %d \n", total); 

} 

int calculo(int num_inteiro){
	
	int total = 0;
	
	for(int cont = 2; cont < num_inteiro; cont++) {
	
		total = total + cont;
	}
	return total;
}

