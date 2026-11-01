#include <stdio.h>

int main () {
    float saldo, deposito, saque;
    int opcao;

    saldo = 1000.00;
    
     printf("Bem-vindo ao sistema de caixa eletrônico!\n\n");

    do {
        printf("====CAIXA ELETRÔNICO====\n"
           "1 - Consultar saldo\n"
           "2 - Depositar\n"
           "3 - Sacar\n"
           "4 - Sair\n\n");

        printf("Por favor, digite a opção desejada: ");
        scanf("%d", &opcao); 

        if (opcao == 1) {
            printf("O valor do saldo atual é de: R$ %.2f\n\n", saldo);
        }

        else if (opcao == 2) {
            printf("Por favor, informe o valor do depósito R$: ");
            scanf("%f", &deposito);

            if (deposito > 0) {
                saldo = saldo + deposito;
                printf("\nFazendo a contagem...\n");
                printf("Depósito realizado com sucesso! :)\n");
                printf("Saldo atual de: R$ %.2f\n\n", saldo);
            }

            else {
                printf("\nProcessando...\n");
                printf("Valor inválido!\nPor favor, depositar um valor que seja maior que zero reais.\n\n");
            }
            
        }

        else if (opcao == 3) {
            printf("Por favor, informe o valor do saque: R$ ");
            scanf("%f", &saque);

            if (saque <= 0) {
                printf("\nProcessando...\n");
                printf("Valor inválido!\nPor favor, sacar um valor que seja maior que zero reais.\n\n");
            }

            else if (saque > saldo) {
                printf("\nSaque recusado! :(\n");
                printf("Saque superior ao saldo diponível na conta!\n\n");
            }

            else {
                saldo = saldo - saque;
                printf("\nProcessando...\n");
                printf("Saque realizado com sucesso! :)\n");
                printf("Saldo atual de: R$ %.2f\n\n", saldo);
            }
        }

        else if (opcao == 4) {
            printf("\nObrigado por usar o Caixa Eletrônico! :)\n");
            printf("Volte sempre, um ótimo dia!");
        }

        else {
            printf("\nProcessando...\n");
            printf("Opção inválida!\n");
            printf("Por favor, digitar um número de acordo com as opções.\nObrigado!\n\n");
        }
        

        
    } while (opcao != 4);
    

    

    return 0;
}
