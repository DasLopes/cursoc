#import <stdio.h>
#import <locale.h>
#define TOTAL 8 //forma de define uma constante
void main(){
    setlocale(LC_ALL, "Portuguese");
    //const int TOTAL = 8; //forma de define uma constante
    printf("%d", TOTAL);
}
/*#define VS const

#define é uma diretiva de pré-processamento
const é uma palavra reservada do C
Com #define, o valor é substituído antes da compilação
Com const, a constante existe na memória
Com const é possível indicar o tipo primitivo da constante
*/
