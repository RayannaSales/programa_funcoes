#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void analisar(int num);

int main(){
    setlocale(LC_ALL,"Portuguese_Brazil");
    
    int numero;
    
    printf("Insira um valor: \n");
    scanf("%d", &numero);
    
    analisar(numero);
}

void analisar(int num){
	if(num < 0){
		printf("O seu número é negativo. ");
	}
	else{
		printf("O seu número é positivo.");
	}
}
