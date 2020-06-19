#include <stdio.h>

int main(){
    int dado, freq[6]={0,0,0,0,0,0},i,k;//Todos os valores de frequencia devem começar no 0

    for(i = 0;i < 20;i++)//Joga-se o dado 20 vezes
    {
        printf("Digite o valor tirado no dado: ");
        scanf("%d",&dado);

                    if(dado == 1)//Pra cada valor do dado, uma das posições da frequencia será incrementado
                        freq[0]++;
                    else if(dado == 2)
                        freq[1]++;
                    else if(dado == 3)
                        freq[2]++;
                    else if(dado == 4)
                        freq[3]++;
                    else if(dado == 5)
                        freq[4]++;
                    else
                        freq[5]++;
            
    }

    for(i = 0;i < 6;i++)//Imprime as frequencias
        printf("O numero %d apareceu %d vezes\n",i+1,freq[i]);
}