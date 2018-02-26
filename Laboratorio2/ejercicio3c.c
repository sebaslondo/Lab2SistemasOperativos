#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int aleatoreoEntreAB(int a, int b);

int main () { 
  int cant, i, temp;
  int a, b;
  printf("Digite la cantidad de números que desea generar: ");
  scanf("%d",&cant);
  printf("Digite los limites (primero el superior, luego el inferior): ");
  scanf("%d%d",&b,&a);
  srand(time(NULL));
  for(i = 0; i < cant; i ++) { 
    temp=aleatoreoEntreAB(a,b); 
    printf("%d ", temp);
  } 
  
  system("PAUSE");
  return 0;
}



int aleatoreoEntreAB(int b, int a){
    int aleatorio;
    aleatorio = rand()%(a-b+1)+b;
    return aleatorio;

}