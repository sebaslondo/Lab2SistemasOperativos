#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int aleatoreoEntreAB(int a, int b);

int main () { 
  int N, M, cant, i, aleatorio;
  printf("Digite la cantidad de números que desea generar: ");
  scanf("%d",&cant);
  printf("Digite los limites (primero el superior, luego el inferior): ");
  scanf("%d%d",&N,&M);
  srand(time(NULL)); // Inicializacion del generador
  for(i = 0; i < cant; i ++) { 
    aleatorio = rand()%(N-M+1)+M; //Genera un numero entre M y N, con el parametro "Null" se garantiza que no elija la misma semilla de numeros
  }
  for(i = 0; i < cant; i ++) { // la funcion rand() genera numeros aleatorios en este caso utilizando a funcion modulo se genera un numero entre M y N 
    printf("%d ", aleatorio);
  } 
  printf("\n", aleatorio);
  system("PAUSE");
  return 0;
}

int aleatoreoEntreAB(int a, int b){
    int aleatorio;
    aleatorio = rand()%(a-b+1)+b;
    return aleatorio;
}

