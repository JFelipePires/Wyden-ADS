#include <stdio.h>
//Estrutura de decisõ alternada
//Estrutura de decisão aninhada
int main(){
    //sistema de classificação de saúde por peso
    int peso;
    printf("Digite seu peso ");
    scanf("%f", &peso);
    if(peso<51){
    printf("Pessoa em estado raquitico");
    } else if (peso>=51 && peso <61){
        printf("Pessoa em estado magro");
    } else if(peso >=61 && peso<70){
        printf("Pessoa em estado normal");
    } else if(peso >=71 && peso<81){
        printf("Pessoa em estado normal");
    }else if(peso>=81 && peso <91){
        printf("Pessoa em estado obesidade I");
    }else{
        printf("Pessoa em estado de obesidade mórbida");
    }
}

/* > 40 a 50 = raquitica
> 51 a 60 = Magra
> 61 a 70 = Normal
> 71 a 80 = Sobrepeso
> 81 a 90 = Obesidade I
> Acima de 90 = Obesidade mórbida
*/