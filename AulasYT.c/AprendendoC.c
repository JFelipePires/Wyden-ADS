#include <stdio.h> // invoca os comandos para usuario entender oq está acontecendo

int main () {

    // Variáveis - espaços na memoria para guardar informações
    // Tipos de dados - númericos (int, float, double), texto (char, char[x])
    // Comando de saída - printf ("Texto %i %f %c", var1, var2, var3, var4);
    // Comando de entrada - scanf ("comando", &variavel);
          // %d tambem bode ser usada para a saída de texto
    int idade = 23;
    float altura = 1.76;
    double peso = 85.400;
    char tipo_sanguineo = 'A';
    char nome_completo[50] = "João Felipe Pires de Oliveira";
    // Comando de saída
    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    printf("Idade %d anos\n", idade);
    printf("Digite a sua altura: ");
    scanf("%f", &altura); 
    printf("Altura: %.2f m\n", altura);
    printf ("Digite o seu peso: ");
    scanf("%lf", &peso);
    printf("Peso: %.3lf Kg\n", peso);
    printf("Digite o tipo sanguineo: ");
    scanf(" %c", &tipo_sanguineo);
    printf("Tipo sanguineo: %c \n", tipo_sanguineo);
    getchar(); // Limpar buffer
    printf ("Digite seu nome completo: ");
    fgets(nome_completo, sizeof(nome_completo), stdin);
    printf("Nome Completo: %s \n", nome_completo);

    return 0;
}