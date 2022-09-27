#include <stdio.h>
int main(){
  int i, m, j, mod, resultado;
  printf("Digite o valor de i e j respectivamente: ");
  scanf("%d %d", &i, &j);
  mod = i % j;
  resultado = i + j - mod;
  printf("O menor inteiro m maior que i e multiplo de j é: %d\n", resultado);
  return 0;
}
