#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL, "Portuguese");
    printf("Olá\n");
    printf("Meu nome é \"Robson\".");
}
