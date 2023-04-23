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


