#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

int multiplo(int x,int y);


int main(int argc, char const *argv[]){
	int esmultiplo = FALSE;
	int x;
	int y;

	printf("ingrese x: \n");
	scanf("%d",&x);

	printf("\ningrese y: \n");
	scanf("%d",&y);
	
	esmultiplo = multiplo(x,y);

	if(esmultiplo){
		printf("%d es multiplo de %d \n",y,x);
	}else{
		printf("%d no es multiplo de %d\n",y,x);
	}


	return 0;
}

int multiplo(int x,int y){
	int resultado=FALSE;
	if( y%x == 0){   // si el resultado es 0 y es multiplo de x
		resultado=TRUE;
	}
	return resultado;

}