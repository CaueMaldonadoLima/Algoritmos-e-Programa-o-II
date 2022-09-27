#include <stdio.h>
int main(){
  double nota1, nota2, nota3, peso1, peso2, peso3, media;
  printf("Digite as notas 1, 2 e 3 e seus respectivos pesos\n");
  scanf("%lf %lf %lf %lf %lf %lf", &nota1, &nota2, &nota3, &peso1, &peso2, &peso3);
  media = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3)/(peso1+peso2+peso3);
  printf("A media aritmetica das notas é igual a: %.2f\n", media);
  return 0;
}
