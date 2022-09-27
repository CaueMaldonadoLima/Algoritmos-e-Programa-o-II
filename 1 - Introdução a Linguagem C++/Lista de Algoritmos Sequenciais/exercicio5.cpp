#include <stdio.h>
int main() {
  int base, altura, area;
  printf("Digite o valor da base e da altura de um triangulo\n");
  scanf("%d %d", &base, &altura);
  area = base * altura;
  printf("A area desse triangulo equivale a: %d\n", area);
  return 0;
}
