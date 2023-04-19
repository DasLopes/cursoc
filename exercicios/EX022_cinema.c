#include <stdio.h>
#include<time.h>
#include<locale.h>
void main(){
    setlocale(LC_ALL, "Portuguese");
    time_t t;
    time(&t);
    struct tm *data;
    data = localtime(&t);
    int hora = data->tm_hour;
    printf("============= CINEMA ESTUDONAUTA ==============\n");
    printf("HORÁRIO DO FILME: 19h - PREÇO DO INGRESSO: R$20\n");
    printf("-----------------------------------------------\n");
    float din;
    printf("Quanto dinheiro você tem? R$");
    fflush(stdin);
    scanf("%f", &din);
    printf("Agora são %i horas.\n", hora);
    (hora < 19) ? printf("Você consegue comprar o ingresso!") : printf("Infelizmente não é possível comprar o ingresso");
}

