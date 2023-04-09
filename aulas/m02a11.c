#import <stdio.h>
void main(){
    int n;
    n = 15 & 5;
    printf("Conjuncao = %i\n", n);

    n = 27 | 17;
    printf("Disjuncao = %i\n", n);

    n = 15 ^ 7;
    printf("Disjuncao exclusiva = %i\n", n);
}
