#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int media_de_valores(int valor);

int main() {
    setlocale(LC_ALL,"Portuguese_Brazil");
    
    int num, media, resposta;
    
    printf("Programa para calcular média a partir dos valores informados\n");
    printf("Para parar, digite 0\n\n");
    
    printf("Digite um valor(s), para retornarmos a media: ");
    scanf("%d", &num);
    
    resposta = media_de_valores(num);
    
    printf("Média = %d ", resposta);
    
}

int media_de_valores(int valor) {
    
    int media = 0, quantidade = 0, soma = 0;
    
    while(valor != 0) {
        soma = soma + valor;
        quantidade++;
        
        printf("Digite um valor(s), para retornarmos a media: ");
        scanf("%d", &valor);
    }
    media = soma / quantidade;
    
    return media;
}
