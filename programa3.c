#include <stdio.h>
/*
Switch

Usamos o switch para em casos onde tenhamos uma estrutura grande ou confusa de if, else e if else

#Pseudocódigo

Escolha(variável)
inicio
    Caso valor1:
        Instruções
    Caso valor2:
        instruções
    ..
    Caso valorN:
Fim

na linguagem C

switch(variável){
    case valor1:
        instruçoes;
        break;
    
    case valor2:
        instruçoes;
        break;
    
    default:
        instruçoes;
}
*/
int main(){
    int valor;

    printf("Digite um número de 1 a 7: ");
    scanf("%d", &valor);

    switch (valor) {
    case 1:
        printf("Domingo\n");
        break;
    case 2:
        printf("Segunda-feira\n");
        break;
    case 3:
        printf("Terça-feira\n");
        break;
    case 4:
        printf("Quarta-feira\n");
        break;
    case 5:
        printf("Quinta-feira\n");
        break;
    case 6:
        printf("Sexta-feira\n");
        break;
    case 7:
        printf("Sábado\n");
        break;
    default:
        printf("Valor inválido");
    }

}
