#import <stdio.h>
#import <locale.h>
void main(){
    setlocale(LC_ALL, "Portuguese");
    int num;
    printf("Digite um n�mero qualquer: ");
    scanf("%i", &num);
    printf("O n�mero %i que voc� digitou � %s",
           num, (num%2==0?"PAR":"�MPAR"));
}
