#import <stdio.h>
#import <string.h>
void main(){
    //strcpy -> atribui��es dentro da string
    char nome[10];
    strcpy(nome, "Robson");
    printf("Nome = %s\n", nome);

    //strlen -> mostra o tamanho da string
    printf("Tamanho = %i\n", (strlen(nome)));

    //strcmp -> compra as strings
    char nome1[] = "Lopes";
    char nome2[] = "Santos";
    printf("Resultado = %i\n", strcmp(nome1, nome2));

    //strcat -> concatena��o, juntas o conte�do das strings
    printf("nome + nome1 = %s\n", strcat(nome, nome1));
    //importe: strcat n�o apenas mostra a string ela tamb�m modifica,
    //deixando a string com novo conte�do.

    //strupr -> string para maiuscula
    printf("nome = %s\n", strupr(nome));

    //strlwr -> string para minuscula
    printf("nome = %s\n", strlwr(nome));
}
