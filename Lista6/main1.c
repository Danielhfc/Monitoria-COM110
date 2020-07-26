#include <stdio.h>
/*f(N)=N/2, se N for par
f(N)=3*N + 1, se N for ímpar
A entrada contem um único número N
A quantidade de vezes que temos que aplicar a função para que NN se torne igual a 1. (Saída)
1 <= N <= 100000 
I=ímpar , P = par */
int P (int N) {
  int result;
  result = N/2;
  return result;
}

int I (int N){
 int result;
 result = (3 * N) + 1; 
 return result;
}
 
int main(void) {
  int N, x=0;
  printf("\nDigite o valor de N: ");
  scanf("%i",&N);

  while (N>1)

  if (N%2==0) {
  N=P(N);
  x++;
  }
  else {
  N=I(N);
  x++;

  }

  printf("O número de vezes necessárias é: %i",x);
  return 0;
}