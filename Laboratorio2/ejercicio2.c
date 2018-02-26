#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{

	float x, n;
	printf("INGRESE X: \n");
	scanf ("%f", &x);
	printf("INGRESE N: \n");
	scanf ("%f", &n);

	float progresion=0;
	int i;

	for (i=0; i<=n; i++ ){
		progresion= progresion+(pow(x,i));
	}
	printf("el resultado de la progresion es: %0.0f \n", progresion );

	return 0;
}