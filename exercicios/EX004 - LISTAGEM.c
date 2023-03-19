#import <stdio.h>
#import <locale.h>
void main(){
    setlocale(LC_ALL, "Portuguese");

    printf("Cadastrando a primeira pessoa:\n");
    printf("------------------------------\n");

    char nome1[] = "Robson";
    //printf("NOME: ");
    //gets(nome1);
    char sexo1 = 'M';
    //printf("SEXO [M/F]: ");
    //sexo1 = getchar();
    float nota1 = 6;
    //printf("NOTA: ");
    //scanf("%f", &nota1);

    printf("Cadastrando a segunda pessoa:\n");
    printf("------------------------------\n");

    char nome2[] = "Michele";
    //printf("NOME: ");
    //gets(nome2);
    //printf("\n");
    char sexo2 = 'F';
    //printf("SEXO [M/F]: ");
    //sexo2 = getchar();
    //printf("\n");
    float nota2 = 7;
    //printf("NOTA: ");
    //scanf("%f", &nota2);

    printf("Cadastrando a terceira pessoa:\n");
    printf("------------------------------\n");

    char nome3[] = "Miguel";
    //printf("NOME: ");
    //gets(nome3);
    char sexo3 = 'M';
    //printf("SEXO [M/F]: ");
    //sexo3 = getchar();
    float nota3 = 8;
    //printf("NOTA: ");
    //scanf("%f", &nota3);

    printf("\n\nListagem completa\n");
    printf("------------------------------\n");
    printf("NOME\t\tSEXO\tNOTA\n");
    printf("%s\t\t%c\t%.1f\n", nome1, sexo1, nota1);
    printf("%s\t\t%c\t%.1f\n", nome2, sexo2, nota2);
    printf("%s\t\t%c\t%.1f\n", nome3, sexo3, nota3);
    printf("------------------------------\n");
}
