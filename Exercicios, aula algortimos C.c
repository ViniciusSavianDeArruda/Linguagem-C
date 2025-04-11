//Exercicios para praticar, linguagem C:

/*#include <stdio.h>

int main(){	
	int A, B, soma, subt, multi, divs;
	
	printf("Digite o primeiro valor:\n");
	scanf("%d",&A);
	printf("Digite o segundo valor:\n");
	scanf("%d",&B);
	
	soma = A + B;
	subt = A - B;
	multi = A * B;
	divs = A / B;
	
	printf("Resultados:\n");
    printf("soma: %d.\n", soma);
	printf("subtracao: %d.\n",subt);
	printf("multiplicacao: %d.\n",multi);
	printf("divisao: %d.\n",divs);
}*/

	
/*#include  <stdio.h>

main(){
	
	int idade, ano_atual, ano_nascimento;
	
	
	printf("Digite a idade que voce fara neste:");
	scanf("%d",&idade);
	
	printf("Digite o ano atual:");
	scanf("%d",&ano_atual);
	
	ano_nascimento= ano_atual - idade;
	
	printf("Voce nasceu no ano de %d.\n");
	
	return 0;
}*/



//Calcule e apresente a média final de um aluno, considerando que existem três avaliações no semestre.

/*#include <stdio.h>

main(){
	
	float nota1, nota2, nota3, media;
	
	printf("Digite a primeira nota:");
	scanf("%f",&nota1);
	printf("Digite a segunda nota:");
	scanf("%f",&nota2);
	printf("Digite a terceira nota:");
	scanf("%f",&nota3);
	
	media= (nota1 + nota2 + nota3)/3;
	
	printf("A media final do aluno é: %.2f\n",media);
	
    return 0;	
	
}*/

		
/*#include <stdio.h>

int main(){


    int idade1, idade2, soma ;
	
	printf("Valor da idade 1:");
	scanf("%d",&idade1);
	printf("Valor da idade 2:");
	scanf("%d",&idade2);
	
	soma = idade1 + idade2;
	
	
	printf("A soma entre a idade 1 e a idade 2 é: %d",soma);
	
}*/



/*#include <stdio.h>

main(){
	
	float nota1;
	
	printf("Digite a primeira nota:");
	scanf("%f",&nota1);
	
     if(nota1 >=6.0){
         printf("Aprovado!\n");
	 }else{
	 	printf("Reprovado!\n");
	 }  	 
}*/



/*#include <stdio.h>
   
   main(){
   	
   	float V;
   		
   	printf("Insira uma nota:\n");
   	scanf("%f",&V);
   	
   	if(V>=6.0){
   		printf("Aprovado!\n");
	   }else{
	   	printf("Reprovado!\n");
	   }
   }*/
   
   

/*#include <stdio.h>  

   int main(){

    int f;
    
   	printf("Insira um valor de 1 a 7:\n");
   	scanf("%d",&f);
   	
   	switch(f){
   		case 1:
   			printf("Domingo.\n");
   			break;
   		case 2:
		   printf("Segunda.\n");
		   break;
		case 3:
		  printf("terca feira.\n");  
		  break;
		case 4:
		   printf("quarta.\n");
		   break;
		case 5:
		  printf("quinta feira.\n");  
		  break;
		case 6:
		   printf("sexta feira.\n");
		   break;
		case 7:
		  printf("sabado.\n");  
		  break;   	   	 	
	   }
   }*/
   
    
   
//Escreva um algoritmo que leia a idade que uma pessoa fará neste ano , e então mostre na tela o ano em que ela nasceu.
    
/*#include <stdio.h>

   int main(){
   	
   	int idade,ano_nascimento, ano_atual;
   	
   	printf("Digite a idade que voce fara este ano:\n");
   	scanf("%d",&idade);
   	printf("Digite o ano atual:");
   	scanf("%d",&ano_atual);
   	
   	ano_nascimento = ano_atual - idade;
   	
   	printf("Voce nasceu no ano de.%d\n");
   	
   	return 0;
   	
   }*/
   
   
//Faça a leitura de dois números e mostre qual dos dois é o maior;

/*#include <stdio.h>

   int main(){
   	
   	float n1,n2;
   	
   	printf("Digite o primeiro numero:\n");
   	scanf("%f",&n1);
   	printf("Digite o segundo numero:\n");
   	scanf("%f",&n2);
    
    if (n1 > n2) {
        printf("O primeiro número %.2f é maior que o segundo número %.2f.\n", n1, n2);
    } else if (n2 > n1) {
        printf("O segundo número %.2f é maior que o primeiro número %.2f.\n", n2, n1);
    } else {
        printf("Os dois números são iguais.\n");
    }

    return 0;
 	
   }*/
   
  
//Faça a leitura de duas notas de um aluno. Calcule a média e apresente a mensagem "Aprovado" se a média for maior igual que 6, senão, apresente que ele foi "Reprovado".

/*#include <stdio.h>

int main() {
    float nota1, nota2, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    if (media >= 6) {
        printf("Aprovado\n");
    } else {
        printf("Reprovado\n");
    }

    return 0;
}*/



//Faça um algoritmo para o calculo da área de um retângulo:


/*#include <stdio.h>

float calcularArea(float comprimento, float largura) {
    return comprimento * largura;
}

int main() {
    float comprimento, largura;
  	
    printf("Digite o comprimento do retangulo:\n");
    scanf("%f", &comprimento);
    
    printf("Digite a largura do retangulo:\n");
    scanf("%f", &largura);
    
    float area = calcularArea(comprimento, largura);
    
    printf("A area do retangulo e: %.2f\n", area);
  
    return 0;
}*/



//Um carro percorreu determinada distância em determinado tempo.Desenvolva o algoritmo para ler estes dados e calcular a velocidade média do carro:
  
/*#include <stdio.h>
   
   int main(){
   	
    float distancia, tempo, velocidade_media;
    
    printf("Digite a distancia percorrida pelo carro(em km):");
    scanf("%f",&distancia);
    printf("Digite o tempo percorrido(em horas):");
    scanf("%f",&tempo);
   	
   	velocidade_media = distancia/tempo;
   	
   	printf("A velocidade media do carro foi de:%2f km/h\n",velocidade_media);
   	
   	return 0;l
   	
   	
   }*/

   
//Faça um programa que leia 3 valores em variáveis distintas, armazene a soma das duas primeiras em
//uma nova variável e o produto das duas últimas em outra. Mostre como resultado o produto das duas
//novas variáveis.

/*#include <stdio.h>

int main(){
	
	int a, b, c;
	int soma, produto, resultado;
	
	printf("Digite tres vslores inteiros:");
	scanf("%d %d %d",&a,&b,&c);
	
	soma = a + b;
	produto = b * c;
	resultado = soma * produto;
	
	printf("O resultado do produto entre a soma das duas primeiras e o produto das duas ultimas: %d\n", resultado);
	
	
	
	return 0;	
}*/



/*#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float raiz1, raiz2;
    
    printf("Calculo das raizes de uma equacao 2 grau - formula de Baskara:\n");
    
    printf("informe os coeficientes:\n");
    printf("a = ");
    scanf("%f", &a);
    printf("b = ");
    scanf("%f", &b);
    printf("c = ");
    scanf("%f", &c);

    raiz1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
    raiz2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
    
    printf("Raiz 1 = %f\n", raiz1);
    printf("Raiz 2 = %f\n", raiz2);

    return 0;
}*/


/*#include <stdio.h>
#include <math.h>

int main(){
	
	float x , termo1, termo2, termo3, resultado;
	
	printf("Digite o valor de x:");
	scanf("%f",&x);
	
	//calculos dos termos
	termo1 = x * x;
	termo2 = (3 * pow(x,x + 1)) / 2;
	termo3 = sqrt(x + 1);
	
	//resultado final
	resultado = termo1 + termo2 + termo3;
	
	printf("O resultado da equacao é: %f\n",resultado);
	
return 0;

}/*



/*#include <stdio.h>
#include <math.h>

int main(){
	
	float x, y, termo1, termo2, termo3, termo4, resultado;
	
	printf("Digite o valor de x:");
	scanf("%f",&x);
	
	printf("Digite o valor de y:");
	scanf("%f",&y);
	
	
	termo1 = sqrt(x) * y;
	termo2 = (x * y) / (2 * x);
	termo3 = 3 * 3;
	termo4 = (x * x) / 4;
	
	resultado = termo1 + termo2 + termo3 + termo4;
	
	printf("O resultado da equacao é:%f\n", resultado);
	
	return 0;
	
}*/





//Uma revenda de carros paga a seus vendedores um salário fixo de X reais por mês, acrescido de uma
//comissão de Y reais para cada carro vendido e 4% do valor total de suas vendas. Escreva um algoritmo
//que leia o código do vendedor, seu salário, o número de carros que ele vendeu no mês e o valor total de
//suas vendas. O algoritmo deve mostrar o código do vendedor e o seu salário final.

/*#include <stdio.h>

int main(){
	
	int num_de_carros_vendidos,codigo_vendedor;
	float salario_fixo, comissao_por_carro, valor_total_vendas, salario_final;
	
	printf("Digite o codigo do vendedor:");
	scanf("%d",&codigo_vendedor);
	
	printf("Digite seu salario fixo:");
	scanf("%f",&salario_fixo);
	
	printf("Digite o numero de carros que vendeu por mes:");
	scanf("%d",&num_de_carros_vendidos);
	
	printf("Digite o valor total de suas vendas:");
	scanf("%f",&valor_total_vendas);
	
	
	comissao_por_carro = 50.0;
	salario_final = salario_fixo + (num_de_carros_vendidos * comissao_por_carro) + (0.04 * valor_total_vendas);
	
	printf("\nCodigo do vendedor:%d",codigo_vendedor);
	printf("\nSalario final:R$ %.2f",salario_final);
	
	return 0;	
}*/




//Escreva um algoritmo que leia a matrícula, o valor da hora e o número de horas trabalhadas por um
//empregado. O algoritmo deve escrever a matrícula e o salário líquido do empregado, calculado
//conforme as seguintes regras:
//o salário bruto mensal é o produto das horas trabalhadas pelo valor da hora;
//sobre o salário bruto mensal é aplicado um desconto de 9% referente ao INSS;
//sobre o salário bruto mensal é aplicado um desconto de 8% referente ao FGTS;
//o salário líquido é o salário bruto mensal menos os encargos (descontos).

/*#include <stdio.h>

	int main(){
		
		int matricula;
		float salario_liquido, valor_hora, num_horas_trabalhados, salario_bruto, inss, fgts;
		
	printf("Digite o numero da sua matricula:");
	scanf("%d",&matricula);
	
	printf("Digite o valor da hora :");
	scanf("%f",&valor_hora);
		
	printf("Digite o numero de horas trabalhados:");
	scanf("%f",&num_horas_trabalhados);	
	
	salario_bruto = valor_hora * num_horas_trabalhados;
	inss = salario_bruto * 0.09;
	fgts = salario_bruto * 0.08;
	salario_liquido = salario_bruto -(inss + fgts);
	
	printf("Matricula:%d\n",matricula);
	printf("Salario liquido:%f\n",salario_liquido);
	
return 0;

}*/



//A comissão de formatura de um curso está organizando a festa de formaturra da sua turma e levantou as seguintes informações:
//custo do salão (capacidade de 800 pessoas, com mesas de 4 pessoas): R$ 2.000,00
//custo da sonorização: R$ 500,00
//custo da decoração: R$ 800,00
//Além destes custos, que deverão ser rateados igualmente entre os formandos, há custos cuja divisão é proporcional ao número de convidados do formando. São eles:
//segurança: necessário um segurança para cada 80 pessoas na festa
//garçom: um garçom consegue atender 48 pessoas
//bebida
//Escreva um algoritmo que leia a matrícula de cada um dos 5 formandos com seus respectivos números
//de convidados. Ele também deve ler os custos de um segurança, de um garçom e da bebida. O algoritmo
//deve calcular e escrever, para cada formando, o custo da festa para ele.
	
	
/*#include <stdio.h>

int main() {
    int formandos[5][2]; 
    float custo_salao = 2000.0, custo_sonorizacao = 500.0, custo_decoracao = 800.0;
    float custo_seguranca, custo_garcom, custo_bebida;
    float custo_total_fixo, custo_individual_fixo[5], custo_individual_variavel[5], custo_total[5];
    int total_convidados = 0;

    printf("Digite o custo de um segurança: ");
    scanf("%f", &custo_seguranca);
    printf("Digite o custo de um garçom: ");
    scanf("%f", &custo_garcom);
    printf("Digite o custo da bebida por pessoa: ");
    scanf("%f", &custo_bebida);

    printf("Digite a matrícula do formando 1: ");
    scanf("%d", &formandos[0][0]);
    printf("Digite o número de convidados do formando 1: ");
    scanf("%d", &formandos[0][1]);
    total_convidados += formandos[0][1];

    printf("Digite a matrícula do formando 2: ");
    scanf("%d", &formandos[1][0]);
    printf("Digite o número de convidados do formando 2: ");
    scanf("%d", &formandos[1][1]);
    total_convidados += formandos[1][1];

    printf("Digite a matrícula do formando 3: ");
    scanf("%d", &formandos[2][0]);
    printf("Digite o número de convidados do formando 3: ");
    scanf("%d", &formandos[2][1]);
    total_convidados += formandos[2][1];

    printf("Digite a matrícula do formando 4: ");
    scanf("%d", &formandos[3][0]);
    printf("Digite o número de convidados do formando 4: ");
    scanf("%d", &formandos[3][1]);
    total_convidados += formandos[3][1];

    printf("Digite a matrícula do formando 5: ");
    scanf("%d", &formandos[4][0]);
    printf("Digite o número de convidados do formando 5: ");
    scanf("%d", &formandos[4][1]);
    total_convidados += formandos[4][1];

    custo_total_fixo = (custo_salao + custo_sonorizacao + custo_decoracao) / 5;

    int convidados;
    
    convidados = formandos[0][1];
    custo_individual_fixo[0] = custo_total_fixo;
    custo_individual_variavel[0] = ((total_convidados / 80.0) * custo_seguranca) * (convidados / (float)total_convidados) +
                                   ((total_convidados / 48.0) * custo_garcom) * (convidados / (float)total_convidados) +
                                   (convidados * custo_bebida);
    custo_total[0] = custo_individual_fixo[0] + custo_individual_variavel[0];

    convidados = formandos[1][1];
    custo_individual_fixo[1] = custo_total_fixo;
    custo_individual_variavel[1] = ((total_convidados / 80.0) * custo_seguranca) * (convidados / (float)total_convidados) +
                                   ((total_convidados / 48.0) * custo_garcom) * (convidados / (float)total_convidados) +
                                   (convidados * custo_bebida);
    custo_total[1] = custo_individual_fixo[1] + custo_individual_variavel[1];

    convidados = formandos[2][1];
    custo_individual_fixo[2] = custo_total_fixo;
    custo_individual_variavel[2] = ((total_convidados / 80.0) * custo_seguranca) * (convidados / (float)total_convidados) +
                                   ((total_convidados / 48.0) * custo_garcom) * (convidados / (float)total_convidados) +
                                   (convidados * custo_bebida);
    custo_total[2] = custo_individual_fixo[2] + custo_individual_variavel[2];

    convidados = formandos[3][1];
    custo_individual_fixo[3] = custo_total_fixo;
    custo_individual_variavel[3] = ((total_convidados / 80.0) * custo_seguranca) * (convidados / (float)total_convidados) +
                                   ((total_convidados / 48.0) * custo_garcom) * (convidados / (float)total_convidados) +
                                   (convidados * custo_bebida);
    custo_total[3] = custo_individual_fixo[3] + custo_individual_variavel[3];

    convidados = formandos[4][1];
    custo_individual_fixo[4] = custo_total_fixo;
    custo_individual_variavel[4] = ((total_convidados / 80.0) * custo_seguranca) * (convidados / (float)total_convidados) +
                                   ((total_convidados / 48.0) * custo_garcom) * (convidados / (float)total_convidados) +
                                   (convidados * custo_bebida);
    custo_total[4] = custo_individual_fixo[4] + custo_individual_variavel[4];

    printf("\nResumo dos custos:\n");
    
    printf("Formando 1 (Matrícula: %d):\n", formandos[0][0]);
    printf("  Custo fixo: R$ %.2f\n", custo_individual_fixo[0]);
    printf("  Custo variável: R$ %.2f\n", custo_individual_variavel[0]);
    printf("  Custo total: R$ %.2f\n\n", custo_total[0]);

    printf("Formando 2 (Matrícula: %d):\n", formandos[1][0]);
    printf("  Custo fixo: R$ %.2f\n", custo_individual_fixo[1]);
    printf("  Custo variável: R$ %.2f\n", custo_individual_variavel[1]);
    printf("  Custo total: R$ %.2f\n\n", custo_total[1]);

    printf("Formando 3 (Matrícula: %d):\n", formandos[2][0]);
    printf("  Custo fixo: R$ %.2f\n", custo_individual_fixo[2]);
    printf("  Custo variável: R$ %.2f\n", custo_individual_variavel[2]);
    printf("  Custo total: R$ %.2f\n\n", custo_total[2]);

    printf("Formando 4 (Matrícula: %d):\n", formandos[3][0]);
    printf("  Custo fixo: R$ %.2f\n", custo_individual_fixo[3]);
    printf("  Custo variável: R$ %.2f\n", custo_individual_variavel[3]);
    printf("  Custo total: R$ %.2f\n\n", custo_total[3]);

    printf("Formando 5 (Matrícula: %d):\n", formandos[4][0]);
    printf("  Custo fixo: R$ %.2f\n", custo_individual_fixo[4]);
    printf("  Custo variável: R$ %.2f\n", custo_individual_variavel[4]);
    printf("  Custo total: R$ %.2f\n\n", custo_total[4]);

    return 0;
}*/



	







   
   
   
   
   
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
   
   
   
   





