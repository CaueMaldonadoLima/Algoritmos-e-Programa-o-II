#include <stdio.h>
#include <math.h>
int main(){
  int a, b, potencia;
  double raiz;
  printf("Digite dois numeros inteiros\n");
  scanf("%d %d", &a, &b);
  potencia = pow(a, b);
  raiz = sqrt(potencia);
  printf("A potencia de %d elevado a %d e igual a %d e a raiz quadrada dessa potencia equivale a %.2f", a, b, potencia, raiz);
  return 0;
}
