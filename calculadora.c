#include <stdio.h>

int main () {
    int a, b, escolha, soma, subtrair, multiplicar;
    float dividir;

    printf("Bem-vindo à calculadora!\n\n");

    printf("-----Opções-----\n"
           "(1) - Somar\n"
           "(2) - Subtrair\n"
           "(3) - Multiplicar\n"
           "(4) - Dividir\n");

    printf("\nPor favor, escolha uma opção: ");
    scanf("%d", &escolha);

    printf("\nPor favor, digite o primeiro número: ");
    scanf("%d", &a);
    printf("Por favor, digite o segundo número: ");
    scanf("%d", &b);

    if (escolha < 1 || escolha >4) {
        printf("Por favor, escolha um número dentre as opções. Obrigado!");
    }

    else if (escolha == 1) {
        soma = (a + b);
        printf("O valor da soma é %d", soma);
    }

    else if (escolha == 2) {
        subtrair = (a - b);
        printf("O valor da subtração é %d", subtrair);
    }

    else if (escolha == 3) {
        multiplicar = (a * b);
        printf("O valor da multiplicação é %d", multiplicar);
    }

    else {
        
        if (b == 0) {
            printf("\nPor favor, escolher outro número. \nNão pode dividir um número por zero.");
        }
        
        else {
        dividir = ((float)a / (float)b);
        printf("O valor da divisão é %.2f", dividir);
        }       
        
    }

    return 0;
    
}