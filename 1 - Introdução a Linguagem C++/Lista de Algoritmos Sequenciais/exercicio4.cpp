#include <stdio.h>
int main() {
  double deposito, juros, valorRendimento, valorTotal;
  printf("Digite o valor do deposito e o valor do juros respectivamente\n");
  scanf("%lf %lf", &deposito, &juros);
  valorRendimento = deposito * (juros/100);
  valorTotal = deposito + valorRendimento;
  printf("O valor do rendimento e R$%.2f e o valor total apos o rendimento e R$%.2f\n", valorRendimento, valorTotal);
  return 0;
}
