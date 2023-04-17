#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL, "Portuguese");
    printf("======= TABELA DE PREÇOS ========\n");
    printf("Viagens até 200 km\tR$0.50/Km\n");
    printf("A partir de 200 KM\tR$0.35/Km\n");
    printf("---------------------------------\n");
    float dist;
    printf("Distância total da viagem, em Km: ");
    fflush(stdin);
    scanf("%f", &dist);
    if(dist <= 200) printf("Uma viagem de %.1f Km vai custar R$0,50/Km.\nValor Total: R$%.2f.", dist, dist*0.50);
    else printf("Uma viagem de %.1f Km vai custar R$0,35/Km.\nValor Total: R$%.2f.", dist, dist*0.35);
}
