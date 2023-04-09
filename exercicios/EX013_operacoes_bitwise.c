#import <stdio.h>
#import <locale.h>
void main(){
    setlocale(LC_ALL, "Portuguese");
    int n1, n2;
    printf("Digite o primeiro valor: ");
    fflush(stdin);
    scanf("%i", &n1);
    printf("Digite o segundo valor: ");
    fflush(stdin);
    scanf("%i", &n2);
    printf("\n\n------ OPERAÇÕES BITWISE --------\n");
    printf("Calculando %i & %i é igual a %i.\n", n1, n2, (n1 & n2));
    printf("Calculando %i | %i é igual a %i.\n", n1, n2, (n1 | n2));
    printf("Calculando %i ^ %i é igual a %i.\n", n1, n2, (n1 ^ n2));
}
