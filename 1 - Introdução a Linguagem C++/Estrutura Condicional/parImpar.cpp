#include <stdio.h>
int main(){
  int a, cond;
  printf("Digite um número inteiro: ");
  scanf("%d", &a);
  cond = a % 2;
  if ( cond == 0 ){
    printf("O número é par");
  }
  else {
    printf("O número é impar");
  }
  return 0;
}
