/*Creado por Fernanda Andrade el 29 de Agosto del 2018*/
#include <stdio.h>
#include <math.h>
	int main(){
	int opcion;
	int C; 
	int K;	
	int F;
	int C2;
	float x;
 	float y; 	
	float z; 
	float r;
	float th;
 	float e;
	float x2;
 	float y2;
 	float z2;
	char opc='s';
	

	while(opc==s){
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
		printf("\n Introduce una coordenada que llamaremos x\n");
		scanf("%f", &x);
		printf("\n Introduce una coordenada que llamaremos y\n");
		scanf("%f", &y);
		printf("\n Introduce una coordenada que llamaremos z\n");
		scanf("%f", &z);

		r=sqrt(pow(x,2)+(pow(y,2)+pow(z,2)));
		th=1/(cos(z/r));
		e=1/(tan(y/x));
		printf("\n Las coordenadas esfericas son: %f, %f, %f \n", r, th, e);

		x2=r*(cos(1))*(cos(0));
		y2=r*(sin(1))*(sin(0));
		z2=r*cos(1);
		printf("\n Ahora de esfericas a cartesianas es: %f, %f, %f \n", x2, y2, z2);
	
	printf("\n ¿Quieres realizar otra operación? Escribe s\n");
	scanf("%s" ,&opc);



		break;
	default:
		printf("Opción inválida");
		break;}
}

	return 0;
}


