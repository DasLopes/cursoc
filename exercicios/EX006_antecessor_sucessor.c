#import <stdio.h>
#import <locale.h>
void main(){
    setlocale(LC_ALL, "Portuguese");
    int n;
    printf("Digite um número: ");
    scanf("%i", &n);
    printf("Analisando o numero %i, o antecessor é %i e o sucessor é %i.\n", n, (n-1), (n+1));
}
