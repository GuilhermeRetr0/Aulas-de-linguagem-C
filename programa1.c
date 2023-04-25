//Aula sobre variáveis
#include <stdio.h>

int main(){ // A chave delimita um bloco de código (início do bloco)
	//Declarando variáveis
	int idade; //Inteiro

	//Declarando e inicializando variáveis
	//int idade = 0;

	//Função para escrever algo na saída padrão (console)
	printf("Qual sua idade ? "); //O ponto e vírgula em C, finaliza o comando

	//Recebendo dados
	scanf("%d", &idade);

    //Saída
	printf("A sua idade é %d", idade);

	return 0;
}//Fim do bloco
