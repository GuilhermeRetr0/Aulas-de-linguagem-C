#include <stdio.h>
//Estrutura de repetição
//do while = faça enquanto

/*Ultilizando quando você precisa de um loop onde não
se tenha um número fixo de elementos, mas que tenha um critério de parada e a
condição de parada é checada após a primeira execução

PROBLEMA:
Faça um programa no qual recebea e some números inteiros até que
o número de entrada seja maior que 0 e apresente a soma final
*/
int main(){

    int numero, soma = 0;

    printf("Informe um número: ");
    scanf("%d", &numero);
    do{
    
    //Entrada
    printf("Informe um número: ");
    scanf("%d", &numero);

    //Processamento
    soma = soma + numero;
    }
    
    while(numero != 0);

    printf("A soma é %d", soma);

    return 0;
}