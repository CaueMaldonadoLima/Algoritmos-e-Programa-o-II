#include <stdio.h>
int main(){
  int custo, ingresso, minVendido, aux;
  printf("Digite o custo do evento e o valor do ingresso\n");
  scanf("%d %d", &custo, &ingresso);
  minVendido = custo/ingresso;
  aux = custo%ingresso;
  if (aux == 0){
    printf("O minimo de ingressos que devem ser vendidos para custear o evento sao %.0d ingressos", minVendido);
  }
  else{
    minVendido += 1;
    printf("O minimo de ingressos que devem ser vendidos para custear o evento sao %.0d ingressos", minVendido);
  }
  return 0;
}
