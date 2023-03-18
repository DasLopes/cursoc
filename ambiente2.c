#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL, "Portuguese");
    printf("O %s tem %i anos de idade.\n", "Robson", 38);
    printf("Seu peso atual é %6.2fKg\n", 70.5);
    printf("O seu sexo é %c", 'M');
}
