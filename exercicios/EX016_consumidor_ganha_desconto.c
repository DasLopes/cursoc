#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL, "Portuguese");
    float valor;
    printf("Qual foi o valor total das comprar? R$");
    fflush(stdin);
    scanf("%f", &valor);
    printf("-------------------------------\n");
    if(valor <= 500)printf("Você comprou R$%.2f na nossa loja.\nVolte Sempre!\n", valor);
    else{
        printf("========= ATENÇÃO ===========\n");
        printf("Por fazer mais de R$%.2f em compras, vocẽ vai receber R$%.2f de desconto\n", valor, (valor/100*10));
        printf("O valor a ser pago é R$ %.2f! Volte Sempre!", valor-valor/100*10);
    }
    printf("\n-------------------------------\n");
}
