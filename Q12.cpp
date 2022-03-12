#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int potencia( int n1, int n2);

int main() {
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	int num1, num2, resposta;
	
	printf("Digite a base da potência: ");
	scanf("%d", &num1);
	
	printf("Digite o expoente da potência: ");
	scanf("%d", &num2);
	
	resposta = potencia(num1, num2);
	
	printf("O resultado da potência é: %d", resposta);
}

int potencia( int n1, int n2){
	int resultado;
	
	for(int cont = 1; cont <= n2; cont++){
		resultado = n1 * n2;	
	}
	return resultado;
}
