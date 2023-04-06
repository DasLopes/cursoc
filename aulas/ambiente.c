#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"Portuguese");
    //printf("Oi, tudo \nbem?"); //Oi, tudo
                                // bem?
    //printf("Oi, tudo \tbem?"); //bem?Oi,    tudo
    // printf("Oi, tudo \bbem?"); // Oi, tudobem?
    // printf("Oi, tudo \rbem?"); // bem?tudo
    // printf("Oi, tudo \\bem?"); // Oi, tudo \bem?
    // printf("Oi, tudo \"bem?"); //Oi, tudo "bem?
    // printf("Oi, tudo \?bem?"); // Oi, tudo ?bem?
    // printf("Oi, tudo \abem?"); // Oi, tudo bem? (beep)
    // printf("Oi, tudo %%bem?"); //Oi, tudo %bem?

    printf("C é\n\"SUPER\" \nFácil!");
}
