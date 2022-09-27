#include <stdio.h>
int main (){
  int anoNascimento, anoAtual, idade, aux, idade2034;
  printf("Digite o ano de nascimento e o ano atual\n");
  scanf("%d %d", &anoNascimento, &anoAtual);
  idade = anoAtual - anoNascimento;
  if (anoAtual < 2034){
    aux = 2034 - anoAtual;
    idade2034 = idade + aux;
    printf("A idade atual dessa pessoa e de %d anos e em 2034 ela tera %d anos\n", idade, idade2034);
  }
  else {
    aux = anoAtual - 2034;
    idade2034 = idade - aux;
    printf("A idade atual dessa pessoa e de %d anos e em 2034 ela tinha %d anos\n", idade, idade2034);
  }
  return 0;
}
