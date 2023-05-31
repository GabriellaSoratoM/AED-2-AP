Gabriella Sorato Mendonca
8136626
02AN
Algorítmo e estrutura de dados

1- Exercicio 02 - Lista 1.c
15/02/2023
#include <stdio.h>

int main()
{
    int total, nulo, branco, valido;
    printf("Digite o numero total de votos: \n");
    scanf("%d", &total);

    printf("Digite o numero de votos nulos: \n");
    scanf("%d", &nulo);

    printf("Digite o numero de votos brancos: \n");
    scanf("%d", &branco);

    printf("Digite o numero de votos validos: \n");
    scanf("%d", &valido);

    valido = total - nulo - branco;

    printf("Percentual de Nulos = %.1f\n", nulo * 1.0 / total * 100);
    printf("Percentual de Brancos = %.1f\n", branco * 1.0 / total * 100);
    printf("Percentual de Validos = %.1f\n", valido * 1.0 / total * 100);

}


******************************************************************************

10- Exercicio 1 - Lista 2.c

08/03/2023
EXERCÍCIO 1
  Ler um conjunto de números reais, armazenando-o
  em vetor e calcular o quadrado das componentes
  deste vetor, armazenando o resultado em outro vetor.
  Os conjuntos tem 10 elementos cada. Imprimir todos
  os conjuntos(Vetores).
*******************************************************************************
#include <stdio.h>
#define TAM 10

void main()
{
    float v[TAM], vQuadrado[TAM];

    for (int i=0; i<TAM; i++) {
        printf("Digite um valor v[%d]: ", i);
        scanf("%f", &v[i]);
    }

    for (int i=0; i<TAM;i++){
        vQuadrado[i] = (v[i] * v[i]);
        printf("valor de v[%d]: %.1f e o seu quadrado é: %.1f\n", i, v[i], vQuadrado[i]);
    }
}

*******************************************************************************

11- Exercicio 2 - Lista 2.c

08/03/2023
EXERCÍCIO 2
Faça um programa que leia um vetor de 8 posições e, em seguida, leia também dois
valores X e Y quaisquer correspondentes a duas posições no vetor. Ao final seu
programa deverá escrever a soma dos valores encontrados nas respectivas posições
X e Y.
*******************************************************************************

#include <stdio.h>
#define TAM 8

void main()
{
    int v[TAM], x, y, soma;
    for (int i=0; i<TAM; i++) {
        printf("Digite um valor v[%d]: \n", i);
        scanf("%d", &v[i]);
    }

    printf("Digite o valor da primeira posição: \n");
    scanf("%d", &x);
    while(x < 0 || x >= TAM) {
        printf("Valor invalido. Digite outro valor: \n");
        scanf ("%d", &x);
    }
    printf("Digite o valor da segunda posição: \n");
    scanf("%d", &y);
    while(y < 0 || y >= TAM) {
        printf("Valor invalido. Digite outro valor: \n");
        scanf ("%d", &y);
    }

    soma = v[x] + v[y];
    printf("A soma dos dois valores é: %d", soma);
}

*******************************************************************************

12- Lista de Modulacao - Exercicio 3 -Desafio 22.03.c

22/03/2023
 
 Lista Modularização - Exercício 3
 
*******************************************************************************/
#include <stdio.h>

int primo (int x) {
  int retorno = 1; // Eh primo
  for (int i=2; i<= x/2; i++)
    if (x%i==0) retorno = 0; // Nao eh primo

  return retorno;
}
int somaPrimo (int n) {
    int soma=0, aux=2;
    while (n>0) {
        if (primo (aux)) {
            soma=soma+aux;n--; 
            printf ("\nPrimo=%d", aux);
        }
        aux++;
    }
    return soma;
}

int main(){
    int n, soma;
    printf("Quantos primos quer somar ? ");
    scanf ("%d", &n);
    soma = somaPrimo (n);
    printf ("\nSoma=%d", soma);
    return 0;
}

*******************************************************************************

13- Exercicio 1 - Do dia 29.03.c

29/03/2023
Saida: 6 printf com alterções antes e depois da chamada das funções
Entrada: Nenhuma
Processo: Criar uma função que retorne um valor inteiro, para
que ocorra uma alteração na variável no corpo main
Alterações:
mudança da tipagem da função para ser capaz de retornar um int
adicionar ao fim da função um return com o valor desejado
*******************************************************************************/

#include <stdio.h>

int muda(int);
int muda2();


int main(){
	int n=5;
	printf ("\nn = %d antes da chamada de muda", n);
	n = muda (n);
	printf ("\nn = %d depois da chamada de muda", n);
	printf("\n\n\n");
	n=5;
	printf ("\nn = %d antes da chamada de muda2", n);
	muda2();
	printf ("\nn = %d depois da chamada de muda2", n);
	return 0;
}

int muda(int n){
	n = 10;
	printf("\nn = %d dentro da funcao muda", n);
	return n;
}

int muda2(){
	int n = 10;
	printf("\nn = %d dentro da funcao muda2", n);
}

*******************************************************************************

14- Exercicio 2 - Do dia 29.03.c

9/03/2023
Saida: se o inteiro fornecido esta entre o intervalo(max e min fornecidos tambem)
Entrada: tres inteiros, o termo a ser verificado, o valor maximo e o valor minimo
processo: Criar uma função que recebe tres int como parametro e verifica com if
se o numero esta ou nao dentro do intervalo
dentro: return 0
fora: return 1
*******************************************************************************/

#include <stdio.h>

int verificaValo(int, int, int);

int main(){

	int x, max, min;
	printf("Insira o valor:");
	scanf("%d", &x);
	printf("Insira o valor maximo do intervalo: ");
	scanf("%d", &max);
	printf("Insira o valor do minimo do interalo: ");
	scanf("%d", &min);

	if(verificaIntervalo(max, min, x))
		printf("\nO valor %d esta dentro do intervalo entre %d ate %d\n", x, min, max);
	else
		printf("\nO valor %d esta fora do intervalo entre %d ate %d\n", x, min, max);

	return 0;
}

int verificaIntervalo(int max, int min, int x){
	if(x>min && x<max)
		return 1;
	else
		return 0;
}

*******************************************************************************
9/03/2023
Saida: posicao do maior inteiro
Entrada: tres inteiros
processo: criar funcao que receba tres inteiros como parametros
e retornar a posicao do maior
*******************************************************************************/
15- Exercicio 3 - Do dia 29.03.c

#include <stdio.h>

int posicaoMaior(int, int, int);

int main(){

	int a, b, c;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);

	printf("O maior numero esta na posicao %d", posicaoMaior(a, b, c));

	return 0;
}

int posicaoMaior(int a, int b, int c){
	if(a>b && a>c)
		return 1;
	else if(b>a && b>c)
		return 2;
	else
		return 3;
}


2- Exercicio 3 - Lista 1.c

******************************************************************************
15/02/2023

#include <stdio.h>

int main()
{
    int carros; 
    float valor, salario, comissao;

    printf("Digite o salario do funcionario: \n");
    scanf("%f", &salario);

    printf("Digite o numero de carros vendidos: \n");
    scanf("%d", &carros);

    printf("Digite o valor total dos carros vendidos: \n");
    scanf("%f", &valor);

    printf("Digite a comissao por carro: \n");
    scanf("%f", &comissao);

    salario = salario + carros * comissao + 0.05 * valor;

    printf("O salario total do funcionario e: %.1f", salario);

    return 0;
}

*******************************************************************************

3- Exercicio 4 - maçãs.c

15/02/2023
As maçãs custam R $1,30 cada se forem compradas menos de uma dúzia, e R $1,00 se forem compradas pelo
menos 12. Escreva um programa que leia o número de maçãs compradas e escreva o custo total da compra.
*******************************************************************************/
#include <stdio.h>

int main()
{
    int maca;
    float valorMaca, valorTotal;

    printf("Digite o total de macas compradas: \n");
    scanf("%d", &maca);

    if(maca < 12)
        valorMaca = 1.30;
    else valorMaca = 1.00;

    valorTotal = valorMaca * maca;
    printf("O valor das macas e: %.2f", valorTotal);

    return 0;
}

*******************************************************************************

4- Exercicio 5 - Lista 1.c

Ler o salário fixo e o valor das vendas efetuadas pelo vendedor de uma empresa. Sabendo-se que ele recebe
uma comissão de 3% sobre o total das vendas até R $1.500,00 mais 5% sobre o que ultrapassar este valor,
calcular e escrever o seu salário total.
*******************************************************************************
#include <stdio.h>

int main()
{
    float salariofx, valorvenda, comissao, salariofn;
    printf("Digite o salario do funcionario: \n");
    scanf("%f", &salariofx);

    printf("Digite o valor das vendas efetuadas pelo funcionario: \n");
    scanf("%f", &valorvenda);

    if(valorvenda <= 1500)
        comissao = 0.03;
    else comissao = 0.05;

    salariofn = salariofx + comissao * salariofx;

    printf("O salario final do vendedor e de: R$%.2f", salariofn);

    return 0;
}

*******************************************************************************

5- Exercicio 6 - Lista 1.c

15/02/2023
Considere o seguinte algoritmo. Realize o teste de mesa para os valores dados e preencha o quadro::
início
    ler x
    ler y 
    z = (x*y) + 5
    se z <= 0 então
        resposta = 'A'
    senão
        se z <= 100 então
            resposta =  'B'
        senão
            resposta = 'C'
        fim_se
    fim_se
    escrever z, resposta
fim
*******************************************************************************/
#include <stdio.h>

int main()
{
    int x, y, z;
    char resposta, A, B, C;

    scanf("%d%d", &x, &y);
    z = (x*y) + 5;

    if(z <= 0)
        printf("Z, A");
    else
        if (z <= 100)
            printf("Z, B");
        else printf("Z, C");
}

*******************************************************************************

6- Exercicio 5 - Lista 2.c

01/03/2023
*******************************************************************************
#include <stdio.h>
#include <stdlib.h>


int main() {

    int i, opcao, vetor[6];

    for(i = 0; i < 6; i++){
        printf("Digite o valor da posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }

            for(i = 5; i >= 0; i--){
                printf("%d", vetor[i]);
            }

    return 0;

}

*******************************************************************************

7- Exercicio 3 - Lista 2.c

Leia um vetor de 10 posições
conte e escreva quantos valors pares ele possui.
*******************************************************************************/
#include <stdio.h>

int main(){

    int valores[10], i , numPar = 0;

    printf ("Digite 10 valores inteiros : \n") ;
        for (i =0 ; i < 10 ; i++){
            scanf ("%d", &valores[i]);
        }

    for (i = 0; i < 10; i++){
        if (valores [i] % 2 == 0){
            numPar++;
        }
    }

    printf ("\nExistem: %d numeros pares", numPar);

    return 0;
}

******************************************************************************

8- Exercicio 7 - Lista 2.c

01/03/2023
Faça um programa que preencha um vetor com 10 numeros reais.
Calcule e mostre:
a) Soma dos numeros positivos desse vetor.
b) Quantidade de negativos
*******************************************************************************/
#include <stdio.h>

int main()
{
    int cont, quantNegativo = 0;
    float vetor[10],somaPositivo = 0;

        printf("Digite 10 numeros Reais : \n");

            for(cont = 0; cont < 10;  cont++){
                scanf("%f", &vetor[cont]);

                if(vetor[cont] < 0 ){
                    quantNegativo++;
                }

                if(vetor[cont] > 0 ){
                    somaPositivo += vetor[cont];
                }


            }

            printf("Quantidade negativos: %d\nSoma dos positvos: %.2f",quantNegativo,somaPositivo);

    return 0;
}

******************************************************************************

9- Exercicio 4 - DESENVOLVA A LOGICA (PROCESSAMENTO).c

01/03/2023
lISTA 2 - EXERCÍCIO 4
          A) imprima o maior elemento 
          B) imprima a posição do maior elemento
******************************************************************************/
#include <stdio.h>
#define TAM 10
int main()
{
    int v[TAM], maior, posicao;
    // entrada
    for (int i=0; i<TAM; i++) {
        printf("Digite um valor v[%d]: ", i);
        scanf("%d", &v[i]);
    }
    // processamento
    for (int i=0; i<TAM; i++) {     

        if (v[i]>maior){
            maior = v[i];
            posicao = i;
        }

    }
    printf("\nO maior elemento é %d e está na posição %d", maior, posicao);

    return 0;
}

******************************************************************************

Lista Modularização (PARA ENTREGA)/Exercicio 1.c

05/04/2023
Lista Modularização - EXERCÍCIO 1
Escreva um programa que implemente uma funcão que retorne a diferenca entre 
dois números inteiros digitados pelo usuário.  
******************************************************************************/
#include <stdio.h>

int main() {
    int  valor1, valor2, resultado;

    printf("Digite o primeiro número: ");
    scanf("%d", &valor1);

    printf("Digite o segundo número: ");
    scanf("%d", &valor2);

    resultado = valor1 - valor2;

    printf("A diferença entre %d e %d é %d", valor1, valor2, resultado);

    return 0;
}

******************************************************************************
Lista Modularização (PARA ENTREGA)/Exercicio 2.c

05/04/2023
Lista Modularização - EXERCÍCIO 2
 Escreva uma funcão que retorne a divisão entre dois números inteiros. 
 Atencao para a questão da divisão por zero! A divisão não pode ocorrer se o divisor for zero.   
******************************************************************************/

float divisao(int valor1, int valor2) {

    if (valor2 == 0) {
        printf("Erro: divisao por zero!\n");
        return 0;
    } else {
        return (float) valor1 / valor2;
    }
}

int main() {
    int valor1, valor2;
    float resultado;

    printf("Digite o primeiro número: ");
    scanf("%d", &valor1);

    printf("Digite o segundo número: ");
    scanf("%d", &valor2);

    resultado = divisao(valor1, valor2);

    printf("A divisao entre %d e %d é %f", valor1, valor2, resultado);

    return 0;
}


Lista Modularização (PARA ENTREGA)/Exercicio 3.c

05/04/2023
Lista Modularização - EXERCÍCIO 3
Escreva um programa que calcule a área de um círculo a partir de uma funcão 
especialmente desenhada para isso; essa funcão recebe o valor do raio e retorna a área do círculo.    
******************************************************************************/

#include <stdio.h>

float Area(float raio) {
    return 3.14159 * raio * raio;
}

int main() {
    float raio, area;

    printf("Digite o valor do raio: ");
    scanf("%f", &raio);

    area = Area(raio);

    printf("A area do circulo de raio %.2f é %.2f", raio, area);

    return 0;
}

******************************************************************************

Lista Modularização (PARA ENTREGA)/Exercicio 4.c

05/04/2023
Lista Modularização - EXERCÍCIO 4
Crie um sistema de caixa eletrpnico, utilizando menus (switch) e outros 
recursos, que realizem operacões financeiras a partir de funcões especificamente 
projetadas para tal. Lembre-se de que o caixa eletronico é um programa que roda 
como repeticão contínua, até que o usuário decida encerrar as operacões. 
Operações: Depósito, Saque e Saldo.  
******************************************************************************/
#include <stdio.h>

float saldo = 0.0;

void deposito() {
    float valor;
    printf("\nDigite o valor do deposito: ");
    scanf("%f", &valor);
    saldo += valor;
    printf("\nDeposito realizado com sucesso!\n");
}

void saque() {
    float valor;
    if (saldo <= 0.0) {
        printf("\nSaldo insuficiente para saque.\n");
        return;
    }
    printf("\nDigite o valor do saque: ");
    scanf("%f", &valor);
    if (valor > saldo) {
        printf("\nSaldo insuficiente para saque.\n");
        return;
    }
    saldo -= valor;
    printf("\nSaque realizado com sucesso!\n");
}

void consultaSaldo() {
    printf("\nSeu saldo atual é: R$%.2f\n", saldo);
}

int main() {
    int opcao = 0;
    while (opcao != 4) {

        printf("\nSelecione uma opcao:\n");
        printf("1 - Deposito\n");
        printf("2 - Saque\n");
        printf("3 - Consulta de saldo\n");
        printf("4 - Sair\n");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                deposito();
                break;
            case 2:
                saque();
                break;
            case 3:
                consultaSaldo();
                break;
            case 4:
                printf("\nEncerrando programa...\n");
                break;
            default:
                printf("\nOpcao invalida.\n");
                break;
        }
    }
    return 0;
}

******************************************************************************
Lista Modularização (PARA ENTREGA)/Exercicio 5.c

05/04/2023
Lista Modularização - EXERCÍCIO 5
Crie uma funcão que determine se dado caracter está entre ‘a’ e ‘z’. Dica: 
Use a tabela ASCII.  
******************************************************************************/
#include <stdio.h>

int AZ(char letra) {
    if (letra >= 'a' && letra <= 'z') {
        return 1;
    } else {
        return 0; 
    }
}

int main() {
    char letra;
    printf("Digite um caractere: ");
    scanf("%c", &letra);
    if (AZ(letra)) {
        printf("O caractere '%c' está entre 'a' e 'z'\n", letra);
    } else {
        printf("O caractere '%c' não está entre 'a' e 'z'\n", letra);
    }
    return 0;
}

******************************************************************************

Lista Modularização (PARA ENTREGA)/Exercicio 6.c

05/04/2023
Lista Modularização - EXERCÍCIO 6
Escreva um programa que implemente uma funcão que passe dado número inteiro 
como parametro, e este desenhe um número equivalente a “*” na tela.   
******************************************************************************/
#include <stdio.h>

void Asteriscos(int numero) {
    int contador = 0;
    while (contador < numero) {
        printf("*");
        contador++;
    }
    printf("\n");
}

int main() {
    int numero;
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);
    Asteriscos(numero);
    return 0;
}

******************************************************************************

Lista Modularização (PARA ENTREGA)/Exercicio 7.c

05/04/2023
Lista Modularização - EXERCÍCIO 7
Escreva uma funcão que retorne o cubo do valor passado como argumento. 
******************************************************************************/

#include <stdio.h>

int cubo(int numero) {
    return (numero * numero * numero);
}

int main() {
    int numero;
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    int resultado = cubo(numero);
    printf("O cubo de %d é %d\n", numero, resultado);

    return 0;
}
