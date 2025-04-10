//Lista 2 algoritmos A
//1.Escreva um algoritmo para ler três valores inteiros e escrever na tela o maior deles. Considere que todos os valores são diferentes.

/*#include <stdio.h>

int main(){
	
	int a, b, c, maior;
	
	printf("Digite o primeiro valor:");
	scanf("%d",&a);
	
	printf("Digite o segundo valor:");
	scanf("%d",&b);
	
	printf("Digite terceiro valor:");
	scanf("%d",&c);
	
	if(a > b && a > c ){
		printf("O maior valor é:%d\n", a);	
	}else if(b > a && b > c){
		printf("O maior valor é:%d\n", b);		
	}else{
		printf("O maior valor é:%d\n", c);
	}
	
	return 0;
}*/


//2.2. Desenvolva um algoritmo para ler quatro valores inteiros, calcular a sua média, e escrever na tela os que são superiores à média.

/*#include <stdio.h>

int main(){
	
	int a, b, c, d;
	float media;
	
	printf("Digite 4 valores inteiros:");
	scanf("%d %d %d %d",&a,&b,&c,&d);
	
	media = (a + b + c + d) / 4.0;
	
	printf("Os valores superiores a media(%.2f):\n", media);
	
	if (a > media){
		printf("%d",&a);	
	}if (b > media){
		printf("%d",&b);
	}if(c > media){
		printf("%d",&c);		
	}if(d > media){
		printf("%d", &c);
	}
	
}*/


//3.Escreva um algoritmo para ler a quantidade de horas aula trabalhadas por dois professores e o valor por hora recebido por cada um deles. Mostrar na tela qual dos professores tem o maior salário total.


/*#include <stdio.h>

int main(){
	
	float horas_prof1, horas_prof2, valor_hora_prof1, valor_hora_prof2, salario_prof1, salario_prof2;
	
	printf("Digite quantas horas o primeiro professor trabalhou:");
	scanf("%f", &horas_prof1);
	
	printf("Digite quantas horas o segundo professor trabalhou:");
	scanf("%f", &horas_prof2);
	
	printf("Digite o valor da hora do primeiro professor:");
	scanf("%f", &valor_hora_prof1);
	
	printf("Digite o valor da hora do segundo professor:");
	scanf("%f", &valor_hora_prof2);
	
	salario_prof1 = horas_prof1 * valor_hora_prof1;
	salario_prof2 = horas_prof2 * valor_hora_prof2;
	
	if(salario_prof1 > salario_prof2){
		printf("O professor 1 tem o maior salario: RS %.2f\n", salario_prof1);
	}else if(salario_prof2 > salario_prof1){
		printf("O professor 2 tem o maior salario: RS %.2f\n", salario_prof2);
	}else{
		printf("Ambos os professores tem o mesmo salario: RS %.2f\n",salario_prof1);
	}
	
	return 0;
}*/


//4.Escreva um algoritmo para ler dois valores e uma das seguintes operações a serem executadas(codificadas da seguinte forma: 1 – Adição, 2 – Subtração, 3 – Multiplicação e 4 – Divisão).Calcular e escrever o resultado dessa operação sobre os dois valores lidos.

/*#include <stdio.h>

int main() {
    float valor1, valor2, resultado;
    int operacao;

    // Leitura dos valores e da operação
    printf("Digite o primeiro valor: ");
    scanf("%f", &valor1);
    
    printf("Digite o segundo valor: ");
    scanf("%f", &valor2);
    
    printf("Escolha a operação (1 - Adição, 2 - Subtração, 3 - Multiplicação, 4 - Divisão): ");
    scanf("%d", &operacao);

    // Verifica se a operação é divisão e valor2 é zero
    if (operacao == 4 && valor2 == 0) {
        printf("Erro: Divisão por zero não permitida.\n");
        return 1;  // Encerra o programa com um erro
    }

    // Vetor de resultados para as operações
    float resultados[] = {
        valor1 + valor2,  // Adição
        valor1 - valor2,  // Subtração
        valor1 * valor2,  // Multiplicação
        valor1 / valor2   // Divisão
    };

    // A operação é diretamente escolhida pelo índice
    resultado = resultados[operacao - 1];

    // Exibe o resultado
    printf("O resultado da operação é: %.2f\n", resultado);

    return 0;
}*/


//5.Escreva um algoritmo para ler a idade de uma pessoa e mostrar qual sua situação de eleitor, conforme as seguintes condições: se a idade for menor que 16 anos, informar que a pessoa não está apta a votar. Se a idade for maior ou igual a 16 anos e menor que 18 anos ou superior a 70 anos, informar que o voto é facultativo. Caso contrário, informar que o voto é obrigatório. 




