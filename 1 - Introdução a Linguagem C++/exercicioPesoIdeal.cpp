#include <stdio.h>
int main() {
  double altura, pesoIdeal; char sexo;
  printf("Digite sua altura e sexo\n");
  scanf("%lf %c", &altura, &sexo);
  if (sexo == 'M') {
    pesoIdeal = (72.7 * altura) - 58;
    printf("Seu peso ideal é: %.2f\n", pesoIdeal);
  }
  else if (sexo == 'F') {
    pesoIdeal = (62.1 * altura) - 44.7;
    printf("Seu peso ideal é: %.2f\n", pesoIdeal);
  }
  else {
    printf("Digite um caractere valido\n");
  }
  return 0;
}
