#import <stdio.h>
#import <locale.h>
void main(){
    setlocale(LC_ALL, "Portuguese");
    char nome[] = "Juvenal";
    char sexo = 'M';
    unsigned int idade = 33;
    float peso = 85.9;


    printf("%s é do sexo %c, tem %i anos e pesa %.1fKg.", nome, sexo, idade, peso);
}
/*
Regras linguagem C

Toda variavel começa com letra
Maiusculas e minusculas fazem diferença
Só usa letras, números e sublinhado
Nada de acentos
Não pode ter simbolos (só o sublinhado)
Não pode ser uma palavra reservada
*/
