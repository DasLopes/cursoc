#import <stdio.h>
#import <locale.h>
#define TOTAL 8 //forma de define uma constante
void main(){
    setlocale(LC_ALL, "Portuguese");
    //const int TOTAL = 8; //forma de define uma constante
    printf("%d", TOTAL);
}
/*#define VS const

#define � uma diretiva de pr�-processamento
const � uma palavra reservada do C
Com #define, o valor � substitu�do antes da compila��o
Com const, a constante existe na mem�ria
Com const � poss�vel indicar o tipo primitivo da constante
*/
