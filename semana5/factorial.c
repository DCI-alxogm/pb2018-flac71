//Creado por Fernanda Andrade el 06 de septiembre del 2018.
//Calcular factorial de un numero y preguntar si queremos hacer un nuevo calculo.

#include<stdio.h>

int main(){

	int r=1,a,i,fact;

	while(r==1){
	fact=1;
	printf("\nDame un número entero\n");
	scanf("%i", &a);


	for(i=a;i>1;i--){
	fact=fact*i;
	printf("\n El numero factorial de %i=%i\n",a,fact);
}


	printf("\n¿Quieres realizar otra operación? Presiona 1\n");
	scanf("%i", &r);

}	
	return 0;
		
}
