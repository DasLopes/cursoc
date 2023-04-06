#import <stdio.h>
void main(){
    char nome[30];
    printf("Digite seu nome: ");
    fflush(stdin);
    gets(nome);
    printf("Voce digitou %s", nome);
}
/*
void main(){
    char r;
    char s;
    printf("Digite so uma letra: ");
    fflush(stdin);
    r = getchar();
    printf("Digite outra letra: ");
    fflush(stdin);
    s = getchar();
    printf("Voce digitou as letras %c e %c", r, s);
}
/*
void main(){
    int n;
    float m;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    printf("Digite um numero real: ");
    scanf("%f", &m);
    printf("Voce acabou de digitar os valores %d e %.1f. Obrigado!", n, m);
}

%d  int
%f  float / double
%c  char
%s  cadeia
%e  notação
%hd short int
%ld long int
%hu unsigned short
%u  unsigned
%lu unsigned long
*/
