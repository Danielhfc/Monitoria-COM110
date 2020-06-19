#include<stdio.h>

int main(){
    int vet[8],i,k,aux;//auxiliar para trocar as posições

    for(i = 0; i < 9;i++)
    {
        printf("Digite um valor: ");
        scanf("%d",&vet[i]);

        for(k = 0;k < i;k++)//Irá comparar o valor digitado com todos os valores do vetor
        {
          if(vet[i] < vet[k])//Caso o valor digitado for menor que algum valor do vetor,ambos trocarão de lugar.
          {
            aux = vet[i];//auxiliar receber o valor digitado
            vet[i] = vet[k];//a posição atual recebe o valor do numero maior
            vet[k] = aux;//a posicao do numero maior agora tem o valor digitado   
          }
        }
    }
    for(i = 0; i < 9;i++)//printa o vetor
    {
        printf("%d ",vet[i]);
    }
}