#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL, "Portuguese");
    float preco;
    int opcao;
    printf("Digite o preço de um produto R$");
    fflush(stdin);
    scanf("%f", &preco);
    printf("   ESCOLHA UM PERÍODO\n");
    printf("========================\n");
    printf("1\tCarnaval [+10]\n");
    printf("2\tFérias Escolares [+20]\n");
    printf("3\tDia das crianças [+5]\n");
    printf("4\tBlack Friday [-30]\n");
    printf("5\tNatal [-5]\n");
    printf("========================\n");
    printf("Digite sua opção => ");
    scanf("%i", &opcao);
    printf("---------------------------------------------------\n");
    switch(opcao){
    case 1:
        printf("Na época do Carnaval, o preço será R$%.2f\n", preco + (preco / 100 * 10));
        break;
    case 2:
        printf("Na época do Carnaval, o preço será R$%.2f\n", preco + (preco / 100 * 20));
        break;
    case 3:
        printf("Na época do Carnaval, o preço será R$%.2f\n", preco + (preco / 100 * 5));
        break;
    case 4:
        printf("Na época do Carnaval, o preço será R$%.2f\n", preco - (preco / 100 * 30));
        break;
    case 5:
        printf("Na época do Carnaval, o preço será R$%.2f\n", preco - (preco / 100 * 5));
        break;
default:
    printf("Em épocas assim o preço será R$%.2f\n", preco);
    break;
    }
    printf("---------------------------------------------------\n");
}
