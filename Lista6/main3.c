#include <stdio.h>
/*Faça uma função que receba um parâmetro (inteiro por valor) com o total de minutos passados ao longo do dia e receba também dois parâmetros (inteiros por referência) no qual deve preencher com o valor da hora e do minuto corrente. Faça um programa que leia do teclado quantos minutos se passaram desde meia-noite e imprima a hora corrente (use a sua função).*/
int main(void) {
  int min, h, mindecorridos, y; // h = horas , min = minutos
  min=0;
  printf("\nDigite a os minutos que se passaram: ");
  scanf("%i", &mindecorridos);
  y= mindecorridos %60;
  
  if(y>0) {
    min=y;
    mindecorridos-=y;
    h=mindecorridos/60;
   
  }
   else{
      h=mindecorridos/60;
    
    }

  printf("\nHorário atual: %i : %i", h, min);
  return 0;
}