#import <stdio.h>
#import <locale.h>
void main(){
    setlocale(LC_ALL, "Portuguese");
    int num;
    printf("Digite um número qualquer: ");
    scanf("%i", &num);
    printf("O número %i que você digitou é %s",
           num, (num%2==0?"PAR":"ÍMPAR"));
}
