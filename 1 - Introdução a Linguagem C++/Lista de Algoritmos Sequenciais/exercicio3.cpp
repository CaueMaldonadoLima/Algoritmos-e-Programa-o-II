#include <stdio.h>
int main (){
  double salario, porcentagem, salarioFinal, porcentagemFinal;
  printf("Digite o salario do funcionario e a porcentagem a ser acrescentada ou subtraida\n");
  scanf("%lf %lf", &salario, &porcentagem);
  porcentagemFinal = porcentagem/100;
  salarioFinal = salario + (salario*porcentagemFinal);
  printf("O salario final do funcional equivale a: R$%.2f \n", salarioFinal);
  return 0;
}
