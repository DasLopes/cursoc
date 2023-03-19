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
