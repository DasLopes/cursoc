#import <stdio.h>
#import <stdlib.h>
#import <time.h>
void main(){
    srand(time(NULL));
    int n = rand() % 10; //gera entre 0 e 9
    int n1 = rand() % 10 + 1;//gera entre 1 e 10
    int n2 = rand() % 50 + 1;//gera entre 1 e 50
    printf("Eu gerei o numero (%i), (%i), (%i)", n, n1, n2);
}
