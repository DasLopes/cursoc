#include <stdio.h>
#include <locale.h>
void main (){
    char estado[10];
    printf("Em qual estado você nasceu? ");
    fflush(stdin);
    scanf("%s", estado);

    if (estado == "ma" || estado == "MA")printf("Fala maranhense.\n");
    else if(estado == "pi" || estado == "PI")printf("Fala piauiense.\n");
    else if(estado == "ce" || estado == "CE")printf("Fala cearense.\n");
    else if(estado == "rn" || estado == "RN")printf("Fala potiguar.\n");
    else if(estado == "pb" || estado == "PB")printf("Fala paraibano.\n");
    else if(estado == "pe" || estado == "PE")printf("Fala pernambucano.\n");
    else if(estado == "al" || estado == "AL")printf("Fala alagoano.\n");
    else if(estado == "se" || estado == "SE")printf("Fala sergipano.\n");
    else if(estado == "ba" || estado == "BA")printf("Fala baiano.\n");
}
