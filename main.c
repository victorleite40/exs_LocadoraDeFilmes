#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {

    char opcao[20];
    float valor, desconto, acrescimo;
    int fitaTipo=0;

    printf("\tMenu da Locadora");

    while (strcmp(opcao,"sair")!=0)
    {
        printf("\nDigite qual dia da semana ou \"sair\"\n");
        fflush(stdin);
        gets(opcao);

        if (strcmp(opcao,"sair")!=0) {

            printf("Digite o valor do dvd\n");
            scanf("%f", &valor);
            printf("Digite o tipo da fita: \n0 = Fita Comum\n1 = Lancamento\n");
            scanf("%i", &fitaTipo);

            if (fitaTipo==1) {
                acrescimo = valor*0.15;
                valor = valor + acrescimo;
            }

            if (strcmp(opcao,"segunda")==0||strcmp(opcao,"terca")==0||strcmp(opcao,"quinta")==0) { // 36% de desconto
                desconto = valor*0.36;
                valor = valor-desconto;
                printf("\nValor final: %.2f\n", valor);
            } else if (strcmp(opcao,"quarta")==0||strcmp(opcao,"sexta")==0) { // 23% de desconto
                desconto = valor*0.23;
                valor = valor-desconto;
                printf("\nValor final: %.2f\n", valor);
            } else if (strcmp(opcao,"sabado")==0||strcmp(opcao,"domingo")==0) { // Sem desconto
                printf("\nValor final: %.2f\n", valor);
            }

        }
    }
    return 0;
}
