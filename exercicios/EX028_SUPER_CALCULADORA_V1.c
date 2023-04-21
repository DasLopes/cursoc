#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL, "Portuguese");
    int n1, n2;
    printf("VALOR 1 = ");
    fflush(stdin);
    scanf("%i", &n1);
    printf("VALOR 2 = ");
    fflush(stdin);
    scanf("%i", n2);
    printf("======================\n");
    printf("+\tAdição\n");
    printf("-\tSubtração\n");
    printf("*\tMultiplicação\n");
    printf("\\\tDivisão\n");
    printf("\n======================\n");
    printf("Digite sua opção => ");
    char escolha;
    //fflush(stdin);
    scanf("%c", &escolha);
    printf("------------------------------------------\n");
    float res;
    switch(escolha){
    case '+':
        printf("O resultado de %i + %i é igual a %i.", n1, n2, n1 + n2);
        break;
    case '-':
        printf("O resultado de %i - %i é igual a %i.", n1, n2, n1 - n2);
        break;
    case '*':
        printf("O resultado de %i * %i é igual a %i.", n1, n2, n1 * n2);
        break;
    case '/':
        res = n1 / n2;
        printf("O resultado de %i // %i é igual a %.2f.", n1, n2, res);
        break;
    default:
        break;
    }
    printf("------------------------------------------\n");
    printf("Volte sempre");

}
