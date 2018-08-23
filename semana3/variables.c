/*Creado por Fernanda Andrade el 23 de Agosto del 2018*/
#include<stdio.h>
#include<math.h>

int main(){

	float x;
	float y;

	printf("Teclea cualquier número\n");
	scanf("%f",&x);
	y=exp(x);
	printf("\nEl resultado de la primera función es: %f \n",y);
	y=cos(x)+(2*tan(x/2));
	printf("\nEl resultado de la segunda función es: %f \n",y);
	y=log(x)+(3*x*x);
	printf("\nEl resultado de la tercera función es: %f \n",y);
	return 0;
}
