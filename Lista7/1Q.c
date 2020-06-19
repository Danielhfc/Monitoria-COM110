#include <stdio.h>

int main(){
    int i,k, M[2][2],R[2][2],maior;

    for(i = 0;i < 2;i++)//Preenche a matriz
        for(k = 0;k < 2;k++)
        {
            printf("Digite um valor: ");
            scanf("%d",&M[i][k]);
        }

maior = M[0][0];//O maior elemento deve ser inicializado com a primeira posição do vetor

    for(i = 0;i < 2;i++)
        for(k = 0;k < 2;k++)
        {
            if(M[i][k] > maior)//Caso encontre um valor maior, a variavel é substituida
                maior = M[i][k];
        }

    for(i = 0;i < 2;i++)//Preenche a matriz R com os valores de M * maior
        for(k = 0;k < 2;k++)
        {
            R[i][k] = M[i][k]*maior;
        }

    for(i = 0;i < 2;i++){//Imprime a matriz
        for(k = 0;k < 2;k++)
        {
            printf("%d ",R[i][k]);
            
        }
        printf("\n");
    }
}