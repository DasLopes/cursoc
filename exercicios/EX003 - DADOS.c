#import <stdio.h>
#import <locale.h>
void main(){
    setlocale(LC_ALL, "Portuguese");
    char nome[30];
    int idade;
    float peso;
    printf("Qual � o seu nome? ");
    gets(nome);
    printf("Quantos anos voc� tem? ");
    scanf("%i", &idade);
    printf("Qual � o seu peso? (Kg) ");
    scanf("%f", &peso);
    printf("Muito prazer, %s. Voc� tem %i anos e pesa %.1fKg, Correto? \nFIM", nome, idade, peso);
}
