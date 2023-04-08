#import <stdio.h>
#import <string.h>
void main(){
    //strcpy -> atribuições dentro da string
    char nome[10];
    strcpy(nome, "Robson");
    printf("Nome = %s\n", nome);

    //strlen -> mostra o tamanho da string
    printf("Tamanho = %i\n", (strlen(nome)));

    //strcmp -> compra as strings
    char nome1[] = "Lopes";
    char nome2[] = "Santos";
    printf("Resultado = %i\n", strcmp(nome1, nome2));

    //strcat -> concatenação, juntas o conteúdo das strings
    printf("nome + nome1 = %s\n", strcat(nome, nome1));
    //importe: strcat não apenas mostra a string ela também modifica,
    //deixando a string com novo conteúdo.

    //strupr -> string para maiuscula
    printf("nome = %s\n", strupr(nome));

    //strlwr -> string para minuscula
    printf("nome = %s\n", strlwr(nome));
}
