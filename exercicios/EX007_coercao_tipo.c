#import <stdio.h>
#import <locale.h>
void main(){
    setlocale(LC_ALL, "Portuguese");
    printf("Digite um número: ");
    int num;
    scanf("%d", &num);
    printf("Analisando o número %i, seu dobro é %i e a terça parte é %.2f.\n",
           num, (num * 2), ((float)num / 3)); //coerção: força alteração do tipo da variavel.
}
