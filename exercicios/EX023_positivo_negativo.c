#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL, "Portuguese");
    int num;

    printf("Me diga um n�mero e eu te direi se\nele � POSITIVO, NEGATIVO ou NULO.\n\n");
    printf("Digite um n�mero: ");
    fflush(stdin);
    scanf("%i", &num);
    printf("O valor %i digitado � ", num);
    if(num > 0) printf("POSITIVO.\n");
    else if (num < 0) printf("NEGATIVO.\n");
    else printf("NULO.\n");
}
