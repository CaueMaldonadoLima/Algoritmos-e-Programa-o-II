#include <stdio.h>
int main(){
  double pes, polegadas, jardas, milhas;
  printf("Digite a distancia em pes:\n");
  scanf("%lf", &pes);
  polegadas = pes * 12;
  jardas = pes / 3;
  milhas = jardas / 1760;
  printf(" A distancia digitada equivale a %.2f polegadas, %.2f jardas e %.2f milhas\n", polegadas, jardas, milhas);
  return 0;
}
