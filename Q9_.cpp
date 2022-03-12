#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int divisores (int num){
	int div;
	int d;
	
	for (d = 1; d <= num; d++){
		if(num % d == 0){
			div= div + d;
		}
	}
	
	return div;
}

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int a, total;
	
	printf("Insira um Número:  \n");
	scanf("%d", &a);
	
	total = divisores (a);
	
	printf("O resultado desta soma é: %d \n", total);
}




