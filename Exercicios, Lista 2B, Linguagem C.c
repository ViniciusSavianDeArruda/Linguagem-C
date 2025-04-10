//Lista de Exercicios 2B, Escolher 3 exercicos para fazer 

//1. Escrever um algoritmo que efetue as operações de uma calculadora com 4 operações. O algoritmo lê o primeiro operando, a operação ( ‘+’, ‘-’, ‘*’ e ‘/’) e o operando. O algoritmo deve escrever na tela:
//1º operando operação 2º operando = resultado
//Por exemplo, se forem lidos os valores 2 * 5, o algoritmo deverá escrever:2*5 = 10

#include <stdio.h>
int main(){
	
	float operando1, operando2, resultado;
	char operacao;
	
	printf("Digite a operacao no formato:numero(ex: 2 * 5):");
	scanf("%f %c %f", &operando1, &operacao, &operando2);
	
	switch (operacao){
		case '+':
			resultado = operando1 + operando2;
			break;
			
		case '-':
			resultado = operando1 - operando2;
			break;
			
		case '*':
			resultado = operando1 * operando2;
			break;
			
		case '/':
			if(operando2 != 0)
				resultado = operando1 / operando2;
			else{
				printf("Erro: divisao por zero nao é permitida.\n");
				return 1;
			}
			break;
			
			printf("Erro: operador invalido. Use +, -, *, ou /.\n");
			return 1;
	}
	
	printf("%.2f %c %.2f = %.2f\n", operando1, operacao, operando2, resultado);
	
	return 0;
}
