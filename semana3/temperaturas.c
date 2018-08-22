/*Creado por Fernanda Andrade el 20 de agosto del 2018*/
#include<stdio.h>
#include<math.h>
int main(){
	float C;
	float K;
	float F;
	float C2;
	
	printf("Hola Fernanda\n");
	printf("Convierte los C a K y F");
	printf("Introduce la temperatura: \n");
	scanf("%f", &C);
	printf("\n la temperatura en grados centígrados es: %f \n", C);
	printf("Ahora hagamos las conversiones");
	K=C+273;
	printf("%f", K);
	printf("La temperatura en grados Kelvin es: %f \n", K);
	F=C*1.8+32;
	printf("%f", F);
	printf("la temperatura en grados Fahrenheit es: %f \n", F);
	C2=(F-32)/1.8;
	printf("De F a C la operación es: %f \n", C2);
	return 0;
	}

	
	
