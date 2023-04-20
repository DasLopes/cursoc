#include <stdio.h>
#include <locale.h>
#include <time.h>
void main (){
    time_t t;
    time(&t);
    struct tm *data;
    data = localtime(&t);
    int anoAtual = data->tm_year + 1900;
    printf("%i", anoAtual);

    printf("Atualmente estamos no ano de %i.\n", anoAtual);
    printf("Em que ano você nasceu? ");
    int ano_nasc;
    fflush(stdin);
    scanf("%i", &ano_nasc);
    printf("-----------------------------------------\n");
    printf("Sua idade atual é %i.\n", anoAtual - ano_nasc);
    printf("Seu alistamento foi em %i, já se passaram %i anos.\n", (ano_nasc + 18), anoAtual - (ano_nasc + 18));
    printf("-----------------------------------------\n");
}
