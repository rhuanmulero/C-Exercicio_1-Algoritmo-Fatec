#include <stdio.h>
#include <string.h>

main () {

//Base de Dados
int estoque = 0;
char a, b, c, d;
int soma, sub, retirada = 0, entrada = 0;



printf("Insira a Quantidade de Unidades no Estoque: \n");// <- Entrada Manual
scanf("%d", &estoque); // <- Processamento de Dados


printf("Os Dados Estao Corretos? \n(Responda com S ou N)\n"); // <- Tomada de Decisão
scanf(" %c", &a); // <- Processamento de Dados


if (a == 'S' || a == 's') // <- Visualização do Estoque, caso esteja CERTO
{
    printf("Quantidade de Unidades no Estoque: %d \n", estoque);

    printf("Deseja fazer uma entrada? \n(Responda com S ou N)\n"); // <- Tomada de Decisão
    scanf(" %c", &b);

if (b == 'S' || b == 's'){
        printf("Insira a Quantidade de Unidades a ser SOMADA ao Estoque: \n", estoque); // <- Soma
        scanf("%d", &entrada); // <- Processamento de Dados

        soma = estoque + entrada; // <- Fórmula

        printf("Quantidade de Unidades no Estoque: %i", soma); // <- Visualização do Estoque
        scanf("%d", &estoque); // <- Processamento de Dados


    }
    if (b == 'N' || b == 'n'){
        printf("Deseja fazer uma retirada? \n(Responda com S ou N)\n"); // <- Tomada de Decisão
        scanf(" %c", &c); // <- Processamento de Dados

            if (c == 'S' || c == 's') {
                printf("Insira a Quantidade de Unidades a ser SUBTRAIDA ao Estoque: \n", estoque); // <- Soma
                scanf("%d", &retirada); // <- Processamento de Dados

                sub = estoque - retirada; // <- Fórmula

                printf("Quantidade de Unidades no Estoque: %i", sub); // <- Visualização do Estoque
                scanf("%d", &estoque); // <- Processamento de Dados
            }

               if (c == 'N' || c == 'n') {
                printf("Quantidade de Unidades no Estoque: %i", estoque); // <- Visualização do Estoque
                scanf("%d", &estoque); // <- Processamento de Dados
            }


    }


}

else if (a == 'N' || a == 'n'){

printf("Insira a Quantidade CORRETA de Unidades no Estoque: \n");// <- Entrada Manual
scanf("%d", &estoque); // <- Processamento de Dados


printf("Os Dados Estao Corretos? \n(Responda com S ou N)\n"); // <- Tomada de Decisão
scanf(" %c", &a); // <- Processamento de Dados
}
 while (a == 'S' || a == 's') {

printf("Quantidade de Unidades no Estoque: %d \n", estoque);

    printf("Deseja fazer uma entrada? \n(Responda com S ou N)\n"); // <- Tomada de Decisão
    scanf(" %c", &b);


if (b == 'S' || b == 's'){
        printf("Insira a Quantidade de Unidades a ser SOMADA ao Estoque: \n", estoque); // <- Soma
        scanf("%d", &entrada); // <- Processamento de Dados

        soma = estoque + entrada; // <- Fórmula

        printf("Quantidade de Unidades no Estoque: %i", soma); // <- Visualização do Estoque
        scanf("%d", &estoque); // <- Processamento de Dados


    }
    if (b == 'N' || b == 'n'){
        printf("Deseja fazer uma retirada? \n(Responda com S ou N)\n"); // <- Tomada de Decisão
        scanf(" %c", &c); // <- Processamento de Dados

            if (c == 'S' || c == 's') {
                printf("Insira a Quantidade de Unidades a ser SUBTRAIDA ao Estoque: \n", estoque); // <- Soma
                scanf("%d", &retirada); // <- Processamento de Dados

                sub = estoque - retirada; // <- Fórmula

                printf("Quantidade de Unidades no Estoque: %i", sub); // <- Visualização do Estoque
                scanf("%d", &estoque); // <- Processamento de Dados
            }


             if (c == 'N' || c == 'n') {
                printf("Quantidade de Unidades no Estoque: %i", estoque); // <- Visualização do Estoque
                scanf("%d", &estoque); // <- Processamento de Dados
            }

    }








 }
return;

}
