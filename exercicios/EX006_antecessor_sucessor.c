#import <stdio.h>
#import <locale.h>
void main(){
    setlocale(LC_ALL, "Portuguese");
    int n;
    printf("Digite um n�mero: ");
    scanf("%i", &n);
    printf("Analisando o numero %i, o antecessor � %i e o sucessor � %i.\n", n, (n-1), (n+1));
}
