#include <stdio.h>
#include <locale.h>
#include <time.h>
void main (){
    setlocale(LC_ALL, "Portuguese");
    time_t t;
    time(&t);
    struct tm *data;
    data = localtime(&t);
    int ano_atual = data->tm_year + 1900;
    int ano_nasc;
    printf("Em que ano você nasceu? ");
    fflush(stdin);
    scanf("%i", &ano_nasc);
    int idade = ano_atual - ano_nasc;
    printf("-------------------------------------------\n");
    printf("Você tem %i anos, certo?\n", idade);
    printf("Seja bem-vindo(a) ao Banco Estudonauta!\n");
    if(idade >= 65) printf("=== ATENÇÃO! DIRIJA-SE PARA A FILA PREFERENCIAL ===\n");
    printf("-------------------------------------------\n");


}
