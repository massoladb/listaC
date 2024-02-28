#include <stdio.h>
#include <stdlib.h>

int main()
{
    int qtEstoque = -1, option = -1, qtProduto = -1, qtFinal = 0;

    while (qtEstoque < 0) {
        printf("Digite a quantidade atual de produtos no estoque: ");
        scanf("%d", &qtEstoque);

        if (qtEstoque < 0) {
            printf("\nDigite uma quantia valida.\n\n");
        }
    }

    while (option != 0 && option != 1) {
        printf("\nDigite <0 + Enter> para calcular retirada ou <1 + Enter> para recebimento.\n");
        scanf("%d", &option);

        if (option != 0 && option != 1) {
            printf("\nDigite uma opcao valida.");
        } else if (option == 0) {
            while (qtProduto < 0) {
                printf("\nDigite a quantidade de produtos a ser retirada: ");
                scanf("%d", &qtProduto);

                if (qtProduto < 0) {
                    printf("\nDigite uma quantidade valida de produtos.");
                }
            }

            qtFinal = qtEstoque - qtProduto;

            if (qtFinal < 0) {
                printf("\nA quantidade de produtos a ser retirada ultrapassa sua quantia de produtos em estoque.");
            } else {
                printf("\nA quantidade de produtos no estoque passou de %d para %d.", qtEstoque, qtFinal);
            }
        } else {
            while (qtProduto < 0) {
                printf("\nDigite a quantidade de produtos a ser recebida: ");
                scanf("%d", &qtProduto);

                if (qtProduto < 0) {
                    printf("\nDigite uma quantidade valida de produtos.");
                }
            }

            qtFinal = qtEstoque + qtProduto;
            printf("\nA quantidade de produtos no estoque passou de %d para %d.", qtEstoque, qtFinal);
        }
    }
    return 0;
}
