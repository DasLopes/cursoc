#import <stdio.h>
#import <locale.h>
#import <stdlib.h>
#import <time.h>
void main(){
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));
    int pc = rand() % 5 + 1;
    printf("Vou pensar em um número entre 1 e 5. Tente adivinhar! \n");
    printf("Qual é o seu palpite? ");
    int palpite;
    scanf("%i", &palpite);
    printf("Eu pensei no número %i e o computador pensou no número %i.", palpite, pc);
}
