#include <stdio.h>
int main(){
  int x, y, z, aux;
  printf("Digite 3 números inteiros\n");
  scanf("%d %d %d", &x, &y, &z);
  if (x < y && x < z){ // --- menor valor no X
    if ( y < z ){ // em ordem
      printf("Os valores ja estao ordenados: x = %d, y = %d, z = %d \n", x, y, z);
    }
    else { // maior valor no Y
      aux = y;
      y = z;
      z = aux;
      printf("Os valores foram ordenados da seguinte forma: x = %d, y = %d, z = %d\n", x, y, z);
    }
  }
  else if (y < x && y < z){ // --- menor valor no Y
    if ( x < z ){ // maior valor no Z
      aux = x;
      x = y;
      y = aux;
      printf("Os valores foram ordenados da seguinte forma: x = %d, y = %d, z = %d\n", x, y, z);
    }
    else { // maior valor no x
      aux = z;
      z = y;
      y = aux;
      aux = x;
      x = z;
      z = aux;
      printf("Os valores foram ordenados da seguinte forma: x = %d, y = %d, z = %d\n", x, y, z);
    }
  }
  else { // --- menor valor no Z
    if ( y < x ){ // maior valor no X
      aux = z;
      z = x;
      x = aux;
      printf("Os valores foram ordenados da seguinte forma: x = %d, y = %d, z = %d\n", x, y, z);
    }
    else{ // maior valor no Y
      aux = x;
      x = z;
      z = aux;
      aux = y;
      y = z;
      z = aux;
      printf("Os valores foram ordenados da seguinte forma: x = %d, y = %d, z = %d\n", x, y, z);
    }
  }
  return 0;
}
