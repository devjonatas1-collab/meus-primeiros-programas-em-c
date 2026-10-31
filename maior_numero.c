#include <stdio.h>

int main ()  {
    int a , b, c;

    printf("Por favor, digite o primeiro valor: ");
    scanf("%d", &a);

    printf("Por favor, digite o segundo número: ");
    scanf("%d", &b);

    printf("Por favor, digite o terceiro número: ");
    scanf("%d", &c);

    if (a == b && b == c) {
        printf("\nTodos os valores são iguais!\n");
        printf("\nComparando todos os números:\n\n"
               "-----NÚMEROS-----\n"
               "Primeiro número: %d <---- são iguais!\n", a);
        printf("Segundo número: %d <---- são iguais!\n", b);
        printf("Terceiro número: %d <---- são iguais!\n", c); 
    }

    else if (a == b && c < a && c < b) {
        printf("\nO maior valor é o primeiro e o segundo número!\n");
        printf("\nComparado aos outros números:\n\n"
               "-----NÚMEROS-----\n"
               "Primeiro número: %d <---- são iguais!\n", a);
        printf("Segundo número: %d <---- são iguais!\n", b);
        printf("Terceiro número: %d\n", c);      
    }

    else if (a == c && b < a && b < c) {
        printf("\nO maior valor é o primeiro e o terceiro número!\n");
        printf("\nComparado aos outros números:\n\n"
               "-----NÚMEROS-----\n"
               "Primeiro número: %d <---- são iguais\n", a);
        printf("Segundo número: %d\n", b);
        printf("Terceiro número: %d <---- são iguais\n", c);
    }

    else if (b == c && a < b && a < c) {
        printf("\nO maior valor é o segundo e o terceiro!\n");
        printf("\nComparado aos outros números:\n\n"
               "-----NÚMEROS-----\n"
               "Primeiro número: %d\n", a);
        printf("Segundo número: %d <---- são iguais\n ", b);
        printf("Terceiro número: %d <---- são iguais\n", c);
        
    }

    else if (a < b && c < b) {
        printf("\nO maior valor é o segundo número digitado."
               "\n\nSendo: %d\n", b);
        printf("Comparado aos outros números:\n\n"
               "-----NÚMEROS-----\n"
               "Primeiro número: %d\n", a);
        printf("Segundo número: %d <---- É o maior\n", b);
        printf("Terceiro número: %d\n", c);
    }

    else if (a > b && a > c) {
        printf("\nO maior valor é o primeiro número digitado."
               "\n\nSendo: %d\n", a);
        printf("Comparado aos outros números:\n\n"
               "-----NÚMEROS-----\n"
               "Primeiro número: %d <---- É o maior\n", a);
        printf("Segundo número: %d\n", b);
        printf("Terceiro número: %d\n", c);
    } 

    else {
        printf("\nO maior valor é o terceiro número digitado."
               "\n\nSendo: %d\n", c);
        printf("Comparado aos outros números:\n\n"
               "-----NÚMEROS-----\n"
               "primeiro número: %d\n", a);
        printf("Segundo número: %d\n", b);
        printf("Terceiro número: %d <---- É o maior\n", c);
    }


    return 0;
}