#include <stdio.h>

#define linha 8
#define coluna 8

int main(){
    int mat[linha][coluna], i,k,cont;

    for(i = 0;i < linha;i++)//Preenche a matriz
        for(k = 0;k < coluna;k++)
        {
            printf("Digite um valor: ");
            scanf("%d",&mat[i][k]);
        }

    for(i = 0;i < linha;i++)//Verifica simetria
        for(k = 0;k < coluna;k++)
        {
            if(mat[i][k] != mat[k][i])//Caso encontre algum valor diferente, a variavel cont assume 1 para armazenar o fato de que a matriz nao e simetrica
                cont = 1;
        }

    if(cont == 1)
        printf("A matriz nao e simetrica!");
    else
        printf("A matriz e simetrica!");
       }