#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char lanzarMoneda();


int main(int argc, char const *argv[])
{
	int n;
	int inverso=0;
	int digito=0;
	srand (time(NULL));

	printf("ingrese el númerde de lanzamientos para la moneda: \n");
	scanf("%d",&n);

	while(n>0){
		digito = n % 10;
		inverso = inverso * 10 + digito;
		n/=10;
	}

	n=inverso;


	while(n>0){
		int i;
		int nCaras=0;
		int nSellos=0;
		digito = n % 10;
		char lanzamiento;

		for (i = 0; i < digito; ++i)
		{	
			lanzamiento=lanzarMoneda();
			if(lanzamiento == 'C'){
				nCaras++;
			}else{
				nSellos++;
			}
			printf("%c",lanzamiento);
		}
		printf("   # de caras =  %d   y # de sellos = %d \n",nCaras,nSellos);

		n /= 10;
	}
		
	return 0;
}

char lanzarMoneda(){
	char resultado;
	int aleatorio;
	aleatorio =rand()%2;

	if(aleatorio == 1){
		resultado ='C';
	}else{
		resultado = 'T';
	}

 	return resultado;

}
