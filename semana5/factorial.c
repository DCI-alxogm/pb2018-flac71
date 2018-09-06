//Creado por Fernanda Andrade el 06 de septiembre del 2018.
//Calcular factorial de un numero y preguntar si queremos hacer un nuevo calculo.

#include<stdio.h>

int main(){

	int r=1,a,b,fact=1;

	while(r==1){
	
	printf("\nDame un número entero\n");
	scanf("%i", &a);


	for(b=a;b>1;b--){
	fact=fact*b;
	printf("\n El numero factorial de %i=%i\n",a,fact);
}


	printf("\n¿Quieres realizar otra operación? Presiona 1\n");
	scanf("%i", &r);

}	
	return 0;
		
}
