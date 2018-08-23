/*Creado por Fernanda Andrade el 22 de Agosto del 2018*/
#include <stdio.h>
#include <math.h>
	int main(){
	int opcion;
	int C;
	int K;
	int F;
	int C2;
	
	
	printf("Teclear una opción \n");
	printf("(1) para convertir temperaturas");
	printf("(2) para convertir coordenadas");
	scanf("%i", &opcion);
	
	switch(opcion)
	{
	case 1:
		printf("Entre a la opción 1");
		printf("\nHola Fernanda\n");
		printf("\nConvierte los C a K y F");
		printf("\nIntroduce la temperatura: \n");
		scanf("%i", &C);
		printf("\n la temperatura en grados centígrados es: %i \n", C);
		printf("\nAhora hagamos las conversiones");
		K=C+273;
		printf("%i", K);
		printf("\nLa temperatura en grados Kelvin es: %i \n", K);
		F=C*1.8+32;
		printf("%i", F);
		printf("\nla temperatura en grados Fahrenheit es: %i \n", F);
		C2=(F-32)/1.8;
		printf("\nDe F a C la operación es: %i \n", C2);
		break;


	case 2:
		printf("Entre a la opción 2");
		
		break;
	default:
		printf("Opción inválida");
		break;
	}
	return 0;
}

