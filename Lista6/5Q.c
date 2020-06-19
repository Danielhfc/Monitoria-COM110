#include <stdio.h>
#include <string.h>

#define Tamanho 6 
#define TamanhoA 26 

int main(void) {

  int Nivel, Temp,i,j,tam;
  char Palavra[Tamanho], Criptografia[Tamanho];
  char Alfabeto[TamanhoA] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
                            'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'}; 

  printf("Digite a palavra que gostaria de criptografar: ");
  scanf("%s", Palavra);

  printf("Digite o nível da criptografia: ");
  scanf("%d", &Nivel);

tam = strlen(Palavra);//Armazena o tamanho da string para caso o usuario digite menos de 6 caracteres

  // armazena em Criptografia a nova palavra
  for(i=0; i<tam; i++){

    j=0; // zero o contador para a próxima iteração do laço

    // verifica em qual posição do vetor Alfabeto está a letra da posição i da Palavra 
    while(Palavra[i] != Alfabeto[j]){
      j++;
    }

    // verifica se a nova letra ultrapassa o limite do vetor Alfabeto
    if(j + Nivel < TamanhoA){
      Criptografia[i] = Alfabeto[j + Nivel];
    }else{
      Criptografia[i] = Alfabeto[(j + Nivel)-TamanhoA];
    }
  }

    Criptografia[i] = '\0';//Adiciona o \0 ao final do arquivo

  printf("Palavra criptografada: %s", Criptografia); // não sei pq está imprimindo a palavra.. =/

  return 0;

}