#import <stdio.h>
#import <locale.h>
void main(){
    setlocale(LC_ALL, "Portuguese");
    printf("Digite um n�mero: ");
    int num;
    scanf("%d", &num);
    printf("Analisando o n�mero %i, seu dobro � %i e a ter�a parte � %.2f.\n",
           num, (num * 2), ((float)num / 3)); //coer��o: for�a altera��o do tipo da variavel.
}
