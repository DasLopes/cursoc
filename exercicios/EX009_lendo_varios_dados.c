#import <stdio.h>
#import <locale.h>
void main(){
    char nome[10];
    float nota1, nota2;
    printf("Nome do aluno: ");
    fflush(stdin);
    gets(nome);
    printf("Nota 1: ");
    fflush(stdin);
    scanf("%f", &nota1);
    printf("Nota 2: ");
    fflush(stdin);
    scanf("%f", &nota2);
    printf("O aluno %s tirou as notas %.1f e %.1f.\n", nome, nota1, nota2);
    printf("A média final foi de %.1f.\n", (nota1+nota2)/2);
}
