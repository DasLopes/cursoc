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
    printf("HOR�RIO DO FILME: 19h - PRE�O DO INGRESSO: R$20\n");
    printf("-----------------------------------------------\n");
    float din;
    printf("Quanto dinheiro voc� tem? R$");
    fflush(stdin);
    scanf("%f", &din);
    printf("Agora s�o %i horas.\n", hora);
    (hora < 19) ? printf("Voc� consegue comprar o ingresso!") : printf("Infelizmente n�o � poss�vel comprar o ingresso");
}

