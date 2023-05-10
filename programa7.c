#include <stdio.h>
/*
Tipos de dados

Tipos numéricos:
    - Inteiros
    - Reais
*/
int main(){
    //inteiros
    //float ; //7, 890 ...

    //reais
    float media, nota1, nota2; //23.4, 1.23 ...
    //double outra_media; //23.4, 1.23 ...

    printf("Qual é a primeira nota ?");
    scanf("%f", &nota1);

    printf("Qual é a primeira nota ?");
    scanf("%f", &nota2);

    media = nota1 + nota2 / 2;

    printf("Sua média é %.1f", media);

    return 0;
}
