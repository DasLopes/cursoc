#import <stdio.h>
#import <locale.h>
void main(){
    setlocale(LC_ALL, "Portuguese");
    char nome[] = "Juvenal";
    char sexo = 'M';
    unsigned int idade = 33;
    float peso = 85.9;


    printf("%s � do sexo %c, tem %i anos e pesa %.1fKg.", nome, sexo, idade, peso);
}
/*
Regras linguagem C

Toda variavel come�a com letra
Maiusculas e minusculas fazem diferen�a
S� usa letras, n�meros e sublinhado
Nada de acentos
N�o pode ter simbolos (s� o sublinhado)
N�o pode ser uma palavra reservada
*/
