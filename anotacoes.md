#include <stdio.h>
#include <locale.h>
void main(){
	setlocale(LC_ALL, "Portuguese");
	//quando queremos usar acentuações na lingua portuguesa
}
\n nova linha
\t tabulação
\b backspace
\r retorno
\\ barra
\" aspas duplas
\? interrogação
\a beep
%% porcentagem

// comentário na mesmo linha
/* comentário em multriplas linhas */

Tipos primitivos

char
int
float
double


saídas formatadas

%d ou %i    inteiro
%f          float
%c          char
%s          strings
%u          unsigned
%e          notação simbolo matemático
%hd         short int
%ld         long int
%hu         unsigned sort
%lu         unsigned long

exemplo

printf("Seu peso atual é %.1fKg.", 70.5) //formatada com uma casa decimal após o ponto.

//Entrada de dados

//lendo números

int num;
float med;

scanf("%i", &num);
scanf("%f", &med);

//lendo caracteres

char resp;
scanf("%c", &resp);
resp = getchar(); //recomendavel

//lendo strings

char nome[30];
scanf("%s", &nome);
gets(nome); //recomendavel

//gerando números aleatórios

#import <stdio.h>
#import <stdlib.h>
#import <time.h>
void main (){
    srand(time(NULL));
    int n = rand() % 10; // gera números entre 0 e 9
    int n = rand() % 10+1; //gera números entre 1 e 10
    int n = rand() % 50+1; //gera números entre 1 e 50
}

// coerção: força uma alteração no tipo da variavel

int n;
(float)n;

//limpa a memoria, colocar antes da entrada de dados

fflush(stdin);

//ordem de precedência

()
+ -  unario -3
* / %
+ -  binario 2+3

//resutlado sempre lógico

true 1
false 0

// Operador ternário

#import <stdio.h>
void main(){
    float media = 5.5;
    printf("resultado %s", media >= 7 ? "aprovado" : "reprovado");
}

// Operações com strings

#import <string.h>

strcpy() // atribuições dentro string
strlen() // conta a string (tamanho)
strcmp() // compara as strings
strcat() // concatenação
strupr() // string para maiuscula
strlwr() // string para minuscula

// conversão binario para decimal

1   1   0   1   // binario
2³  2²  2¹  2°  
8   4   2   1
8 + 4 + 1 = (13)10  // decimal

// convesão decimal para binaria

(13)10
2³  2²  2¹  2°
8   4   2   1
1   1   0   1

// capturando data, hora, ano do sistema

#import <time.h> // inclusão da biblioteca

void main(){
    time_t t;   // variavel que recebera a data atual
    time(&t);   // ativação da variavel t
    struct tm *data;    // criação da estrutura e uma variavel apontando para essa estrutura
    data = localtime(&t);   // localtime vai pegar vários comandos dessa estrutura e direcionar para a variavel data poder mostrar na tela

    int anoAtual = data -> tm_year + 1900;
    printf("Ano atual = %i", anoAtual); // mostra na tela ano atual

/*
tm_mday dia do mes [1-31]
tm_mon  mês [0-11]
tm_year ano [a partir de 1900]
tm_wday dia da semana [0-6]
tm_yday dia do ano [0-365]
tm_hour hora [0-23]
tm_min minutos [0-59]
tm_sec segundos [0-59]
*/
}
