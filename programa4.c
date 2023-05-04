#include <stdio.h>
//Estrutura de repetições for, while, do while
//for = para, while = faça, do while = faça enquanto

/*
ultilizando o For (para)

Faça um programa que receba e some 5 inteiros e apresente a soma no final;
*/
int main(){
    //Variáves
    int numero, soma = 0;

    //Para o int i iniciando em 0; enquanto i < 5; incrementa o i em 1
    //inicialização, critério de parada e forma de incremento
    for(int i = 0; i < 5; i++){

    //Entrada
    printf("Informe um número: ");
    scanf("%d", &numero);

    soma = soma + numero;
    }
    //Saída
    printf("A soma é %d", soma);

    return 0;
}

