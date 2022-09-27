#include <stdio.h>
int main() {
  int a;
  printf("Digite um número inteiro\n");
  scanf("%d", &a);
  if (a > 0) {
    printf("O número é positivo");
  } else if (a == 0) {
    printf("O número é igual zero");
  } else {
    printf("O número é negativo");
  }
  return 0;
}
