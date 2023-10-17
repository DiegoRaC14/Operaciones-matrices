#include <stdio.h>

float perimetroFigura (float num)
{
	float perimetro;
	perimetro = 4 * num;
	return (perimetro);
}

float areaFigura(float num)
{
	float area;
	area = num*num;
	return (area);
}

int main ()
{
	float num;
	printf("Lado de un cuadrado: ");
	scanf("%f",&num);
	printf("\nPerimetro: %0.2f\n",perimetroFigura(num));
	printf("Area: %0.2f\n", areaFigura(num));
	
	return 0;
}
