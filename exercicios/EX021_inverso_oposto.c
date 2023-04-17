#include <stdio.h>
#include <locale.h>
void main(){
    float n;
    printf("Digite um número: ");
    fflush(stdin);
    scanf("%f", &n);
    if(n < 0) printf("O oposto de %.0f é igual a %.0f", n, n*-1);
    else printf("O inverso de %.0f é igual a %.4f.", n, 1 / n);
}
