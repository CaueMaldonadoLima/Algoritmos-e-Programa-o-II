#include <stdio.h>
int main(){
  int matricula;
  double horasMensais, valorHora, filhos, salario, salarioFinal;
  printf("Digite o numero da matricula, o numero de horas trabalhadas mensalmente, o valor recebido por hora e o numero de filhos do funcionario, respectivamente\n");
  scanf("%d %lf %lf %lf", &matricula, &horasMensais, &valorHora, &filhos);
  salario = horasMensais * valorHora;
  salarioFinal = salario + (salario * (filhos*0.1));
  printf("O salario do funcionario de matricula %d é: R$%.2f\n", matricula, salarioFinal);
  return 0;
}
