#import <stdio.h>
#import <locale.h>
void main(){
    setlocale(LC_ALL, "Portuguese");
    int num, desl;
    printf("Digite um n�mero: ");
    fflush(stdin);
    scanf("%i", &num);
    printf("Digite o deslocamento: ");
    fflush(stdin);
    scanf("%i", &desl);
    printf("\n----- OPERA��ES SHIFT -----\n");
    printf("Calculando %i >> %i � igual a %i.\n", num, desl, (num >> desl));
    printf("Calculando %i << %i � igual a %i.\n", num, desl, (num << desl));
}
