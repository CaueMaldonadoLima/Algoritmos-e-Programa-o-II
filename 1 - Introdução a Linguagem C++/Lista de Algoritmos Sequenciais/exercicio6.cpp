#include <stdio.h>
int main(){
  double raio, pi, area;
  printf("Digite o raio de um circulo\n");
  scanf("%lf", &raio);
  pi = 3.141592;
  area = pi * (raio * raio);
  printf("A area do circulo e aproximadamente: %.2lf\n", area);
  return 0;
}
