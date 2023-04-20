#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL, "Portuguese");
    printf("Me diga dois números e eu colocarei\nos dois números em ordem crescente.\n");
    int a, b;
    printf("Primeiro número: ");
    fflush(stdin);
    scanf("%i", &a);
    printf("Segundo número: ");
    fflush(stdin);
    scanf("%i", &b);
    printf("Os números em ordem são ");
    (a < b)?printf("i% e %i.", a, b):printf("%i e %i", b, a);
}
