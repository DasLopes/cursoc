#import <stdio.h>
#import <locale.h>
void main(){
    setlocale(LC_ALL, "Portuguese");
    char produto[20];
    float preco, desc, novo_preco;
    printf("Produto: ");
    fflush(stdin);
    gets(produto);
    printf("Preço de %s: R$", produto);
    fflush(stdin);
    scanf("%f", &preco);
    printf("Desconto: (%%) ");
    fflush(stdin);
    scanf("%f", &desc);
    novo_preco = preco - (preco / 100 * desc);
    printf("O produto %s custava R$%.2f.\n", produto, preco);
    printf("Porém, com %.2f%% de desconto, passa a custar R$%.2f.\n", desc, novo_preco);
}
