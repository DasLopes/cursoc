#include <stdio.h>
#include <locale.h>
void main(){
        setlocale(LC_ALL, "Portuguese");
        float peso;
        int escolha;
        printf("Seu peso na Terra (Kg) = ");
        fflush(stdin);
        scanf("%f", &peso);
        printf("   ESCOLHA UM PLANETA\n");
        printf("=========================\n");
        printf("1\tMercúrio\n");
        printf("2\tMarte\n");
        printf("3\tVênus\n");
        printf("4\tJúpiter\n");
        printf("5\tSaturno\n");
        printf("6\tUrano\n");
        printf("7\tNetuno\n");
        printf("=========================\n");
        printf("Digite sua opção => ");
        fflush(stdin);
        scanf("%i", &escolha);
        printf("------------------------------\n");
        switch(escolha){
        case 1:
            printf("No planeta Mercúrio, seu peso seria %.2f Kg", peso * 0.37);
            break;
        case 2:
            printf("No planeta Marte, seu peso seria %.2f Kg", peso * 0.38);
            break;
        case 3:
            printf("No planeta Vênus, seu peso seria %.2f Kg", peso * 0.88);
            break;
        case 4:
            printf("No planeta Júpiter, seu peso seria %.2f Kg", peso * 2.64);
            break;
        case 5:
            printf("No planeta Saturno, seu peso seria %.2f Kg", peso * 1.15);
            break;
        case 6:
            printf("No planeta Urano, seu peso seria %.2f Kg", peso * 1.17);
            break;
        case 7:
            printf("No planeta Netuno, seu peso seria %.2f Kg", peso * 1.18);
            break;
    default:
        printf("Seu peso não pode ser calculado para outros planetas. Tente novamente.\n");
        }
        printf("\n------------------------------\n");
}
