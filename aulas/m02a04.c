#import <stdio.h>
#import <locale.h>
void main(){
    setlocale(LC_ALL, "Portuguese");
    int n1, n2;
    printf("Digite um n�mero: ");
    scanf("%i", &n1);
    printf("Digite outro n�mero: ");
    scanf("%i", &n2);
    int mai = (n1>n2)?n1:n2;
    printf("Entre %i e %i, o maior foi %i", n1, n2, mai);
}
