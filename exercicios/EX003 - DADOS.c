#import <stdio.h>
#import <locale.h>
void main(){
    setlocale(LC_ALL, "Portuguese");
    char nome[30];
    int idade;
    float peso;
    printf("Qual é o seu nome? ");
    gets(nome);
    printf("Quantos anos você tem? ");
    scanf("%i", &idade);
    printf("Qual é o seu peso? (Kg) ");
    scanf("%f", &peso);
    printf("Muito prazer, %s. Você tem %i anos e pesa %.1fKg, Correto? \nFIM", nome, idade, peso);
}
