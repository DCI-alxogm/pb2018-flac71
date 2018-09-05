//Creado por Fernanda Andrade el dia 05 de septiembre del 2018.
//Ejemplo 2 de la función for.
#include<stdio.h>
#include<math.h>
int main()
{
	float exp_;
	int n=10, j;
	
	for(j=0; j<n; j++){
		exp_=exp(j);
		printf("%i \t %f\n",j,exp_);
	}
	return 0;
}
