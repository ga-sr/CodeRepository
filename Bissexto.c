#include <stdlib.h>
#include <stdio.h>

int ano;

int main (void){

    printf("Introduza o ano a ser verificado: ");
    scanf("%d", &ano);

    if (ano%400==0 || ano%4==0 && ano%100!=0)
    printf("\n\nEh um ano bissexto!\n\n");
    else printf("\n\nNao eh um ano bissexto\n\n");

    system("Pause");
return(0);
}
