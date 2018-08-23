/*Creado por Fernanda Andrade el 23 de agosto del 2018*/
#include<stdio.h>
#include<math.h>

int main(){
	float x;
	float y;
	float z;
	float r;
	float th;
	float e;
	float x2;
	float y2; 
	float z2;

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

	return 0;
}
