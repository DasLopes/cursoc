#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL, "Portuguese");
    printf("Me diga três números e eu colocarei\neles em ordem pra você.\n\n");
    int maior, intermediario, menor, aux;
    printf("Primeiro número: ");
    fflush(stdin);
    scanf("%i", &maior);
    printf("Segundo número: ");
    fflush(stdin);
    scanf("%i", &intermediario);
    printf("Terceiro número: ");
    fflush(stdin);
    scanf("%i", &menor);

    if(maior < intermediario){
        aux = maior;
        maior = intermediario;
        intermediario = aux;
    }
    if(maior < menor){
        aux = maior;
        maior = menor;
        menor = aux;
    }
    if(menor > intermediario){
        aux = menor;
        menor = intermediario;
        intermediario = aux;
    }
    printf("--------------------------------------\n");
    printf("MAIOR: %i\n", maior);
    printf("INTERMEDIARIO: %i\n", intermediario);
    printf("MENOR: %i\n", menor);
}
