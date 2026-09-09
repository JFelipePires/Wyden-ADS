#include<stdio.h>
#include<stdbool.h> // Permite o uso de variáveis bool
// Representação e tipos de variáveis
int main(){
    int i = 10; // inteiro
    float f = 19.7; // ponto flutuante
    double db = 20.8976; // decimal
    char c = 'S'; // caractere
    bool b = true; // tipo boleano
    
printf("Imprimindo uma variável int: %d\n",i);
printf("Imprimindo uma variável float: %.1f\n",f);
printf("Imprimindo uma variável double: %.4lf\n",db);
printf("Imprimindo uma variável char: %c\n",c);
printf("Imprimindo uma variável bool: %b\n",b);
}