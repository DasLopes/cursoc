#import <stdio.h>
#import <locale.h>
void main(){
    char letra;
    printf("Digite uma letra: ");
    letra = getchar();
    printf("Antes da letra %c temos a letra %c. Depois temos a letra %c.\n",
           letra, (letra-1), (letra+1));
}
