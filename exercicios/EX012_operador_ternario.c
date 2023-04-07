#import <stdio.h>
#import <locale.h>
void main(){
    setlocale(LC_ALL, "Portuguese");
    float n1, n2, med;
    printf("Primeira nota: ");
    fflush(stdin);
    scanf("%f", &n1);
    printf("Segunda nota: ");
    fflush(stdin);
    scanf("%f", &n2);
    med = (n1 + n2) / 2;
    printf("Com as notas %.1f e %.1f, o aluno tem média %.1f.\n", n1,n2,med);
    printf("A sua situação é %s", (med>=7)?"APROVADO":"REPROVADO");
}
