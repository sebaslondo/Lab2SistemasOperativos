#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>

int main () { 
  int x, y, multiplicacion, resultado;
  char opcion[2];
  strcpy(opcion , "si");
  srand(time(NULL));
  while(strcmp(opcion, "si")==0){

  x= rand() %10;
  y= rand() %10;
  multiplicacion=x*y;
  resultado=0;

  printf("Cuanto es la multiplicacion de %d y %d?\n", x,y);
  scanf("%d",&resultado);
  	printf("resultado es %d \n", multiplicacion);

  	printf("Quiere continuar multiplicando? \n");
  	scanf("%s", opcion);
 
  }  

  return 0;
}