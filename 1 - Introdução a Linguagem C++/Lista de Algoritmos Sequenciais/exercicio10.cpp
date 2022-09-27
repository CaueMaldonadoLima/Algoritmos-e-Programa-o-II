#include <stdio.h>
int main (){
  double deposito, saque1, saque2, saldoFinal, op1, op2;
  printf("Digite o valor depositado e o valor do primeiro e do segundo saque\n");
  scanf("%lf %lf %lf", &deposito, &saque1, &saque2);
  op1 = 0.38 * saque1;
  op2 = 0.38 * saque2;
  saldoFinal = deposito - saque1 - saque2 - op1 - op2;
  printf(" O saldo final equivale a R$%.2f\n", saldoFinal);
}
