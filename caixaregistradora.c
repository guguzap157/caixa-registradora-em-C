#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, op;
    float soma, total, retirada;


    for(i = 0 ; i < 100 ; i++){
    printf("\n|---------------------------------|\n");
    printf("| BEM VINDO A CAIXA REGISTRADORA! |\n");
    printf("|      1 - ADICIONAR DINHEIRO     |\n");
    printf("|      2 - RETIRAR DINHEIRO       |\n");
    printf("|      3 - VERIFICAR SALDO        |\n");
    printf("|           4 - SAIR              |\n");
    printf("|---------------------------------|\n");
    scanf("%d", &op);

    switch(op){
        case 1: 
            printf("\nDESEJA ADICIONAR QUANTO AO CAIXA: ");
            scanf("%f", &soma);
            total = total + soma;
        break;
        case 2:
            printf("\nDESEJA RETIRAR QUANTO DO CAIXA: ");
            scanf("%f", &retirada);
            total = total - retirada;
        break;
        case 3:
            printf("\nEM SEU CAIXA, HA R$%.2f", total);
        break;
        case 4:
            printf("SAINDO...");
            i = 101;
        break;
        }
    }
    return 0;
}