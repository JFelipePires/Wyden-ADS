#include <stdio.h>

int main(){

    int bino, cino, soma;
    scanf("%d", &bino);
    scanf("%d", &cino);

    soma = cino + bino;

    if(soma%2==0){
        printf("Bino\n");
    } else {
        printf ("Cino\n");
    }
}