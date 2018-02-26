#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int numero,digito;;
	int numeroinverso=0;

	printf("ingrese el número del que quiera hallar su inverso\n");
	scanf("%d"numero);


	if(numero/10 == 0){ // el numero es de un solo digito, se muestra el mismo
		printf("\nEl inverso del número es: %d\n",numero );
	}else{
			while(numero!=0){
				digito = numero % 10; 
				numero /= 10;
				numeroinverso = numeroinverso * 10 + digito;
			}
			printf("\nEl inverso del número es: %d\n",numeroinverso);

	}



	return 0;
}