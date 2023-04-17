#include <stdio.h>
#include <locale.h>
#include <time.h>
void main(){
    setlocale(LC_ALL, "Portuguese");
    time_t t;
    time(&t);
    struct tm *data;
    data = localtime(&t);
    int anoAtual = data->tm_year;
    int anoNasc;
    printf("Em que ano você nasceu? ");
    fflush(stdin);
    scanf("%i", &anoNasc);
    int idade = anoAtual - anoNasc + 1900;
    printf("---------------------------------\n");
    printf("Sua idade atual é %i\n", idade);
    if(idade >= 18) printf("Já fez 18 anos. Espero sinceramente que você tenha se alistado.");
    else printf("Você ainda não tem 18 anos. Não pode se alistar.");
}
