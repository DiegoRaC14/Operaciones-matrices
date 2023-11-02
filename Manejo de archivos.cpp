#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int encontrarMin(int lista[],int longitud);//Prototipo de la función que encuentra el número mínimo
int encontrarMax(int lista[],int longitud);//Prototipo de la función que encuentra el número máximo
float media(int lista[],int longitud);//Prototipo función de media
float mediana(int lista[],int longitud);//Prototipo función de mediana
int contar(int lista[],int longitud);//Prototipo función de mediana
int histograma(int lista[], int longitud);//Prototipo función histograma

int main() 
{
    int i, j, longitud;
	int temp = 0; //Variable usada paea realizar el swap
	int posicion;

    srand(time(NULL));
    printf("Numero de elementos a ordenar: ");
    scanf("%d", &longitud);
    int lista[longitud];//Declarar arreglo

	//Llenar arreglo aleatorio
    for (i = 0; i < longitud; i++) {
        lista[i] = rand() % (30)+1;
    }

    printf("\nLa lista sin ordenar:\v");//Generar serie aleatoria

    for (i = 0; i < longitud; i++) {
        printf("%d, ", lista[i]);
    }
    printf("\n\n");
    
    //Empieza ordenamiento por selección
	for (i=0;i<longitud;i++)
	{
		posicion=i;
		for (j=i+1;j<longitud;j++)
		{
			if (lista[posicion]>lista[j]){
				posicion=j;
			}
		}
		
		if (posicion!=i)
		{
			temp=lista[i];
			lista[i]=lista[posicion];
			lista[posicion]=temp;
		}
	
	}
	
	//Imprime la lista ya ordenada
	printf("Lista ordenada: \n");
	for (i=0;i<longitud;i++){
		printf("%d, ",lista[i]);
	}
	//Imprime valor máximo y mínimo
	printf("\n\nValor minimo:\t%d",lista[encontrarMin(lista,longitud)]);
	printf("\nValor maximo:\t%d",lista[encontrarMax(lista,longitud)]);
	
	printf("\nMedia:\t%0.2f",media(lista,longitud));
	printf("\nMediana:%0.2f",mediana(lista,longitud));
	printf("\nModa:%d\n\n",contar(lista,longitud));
	printf("Histograma:\n",histograma(lista, longitud));
	

	return 0;
}


/* Empiezan las funciones */	
int encontrarMin(int lista[],int longitud)//Encontrar número minimo
{
	int a;//Variable de control
	int index;//Posicion de los valores
	
	a=1000000;
	index=-1;
	
	for(int i=0;i<longitud;i++)
	{
		if (lista[i]<a)
		{
			a=lista[i];
			index=i;
		}
	}
	return index;
    
}

int encontrarMax(int lista[],int longitud)//Encontrar número máximo
{
	int a;//Variable de control
	int index;//Posicion de los valores
	
	a=0;
	index=-1;
	
	for(int i=0;i<longitud;i++)
	{
		if (lista[i]>a)
		{
			a=lista[i];
			index=i;
		}
	}
	return index;
    
}

float media(int lista[],int longitud)
{
	float suma=0;//Guardar la suma de los n elementos del arreglo
	float media;
	for (int i=0;i<longitud;i++)
	{
		suma+=lista[i];
	}
	
	media=suma/longitud;
	return media;
}

float mediana(int lista[], int longitud) 
{
    float mediana;
    int medianaPar;

    if (longitud % 2 != 0)// Si la cantidad de datos es impar
	{ 
        mediana = lista[(longitud-1)/2];
    } else 
	{
        medianaPar = (longitud / 2);
        mediana = (lista[medianaPar-1]+lista[medianaPar])/ 2.0;
    }
    
	return mediana;
}


int contar(int lista[], int longitud) 
{
    int maxRepeticiones = 0;
    int numeroMasRepetido = lista[0]; //Empezar con el valor 0

    for (int i=0;i<longitud;i++) 
	{
        int contador = 0;
        for (int j=0;j<longitud;j++) 
		{
            if (lista[j]==lista[i]) 
			{
                contador++;
            }
        }

        if (contador>maxRepeticiones) 
		{
            maxRepeticiones = contador;
            numeroMasRepetido = lista[i];
        }
    }

    //printf("El número que más se repite es %d, con %d repeticiones.\n", numeroMasRepetido, maxRepeticiones);

    return numeroMasRepetido;
}

int histograma(int lista[], int longitud) 
{
    // Buscar el número mínimo y máximo en la lista
    int min = lista[encontrarMin(lista, longitud)];
    int max = lista[encontrarMax(lista, longitud)];

    for (int i=min;i<=max;i++) 
	{
        printf("%d: ", i);

        //Contar cuántas veces aparece el número i en la lista
        int contador = 0;
        for (int j = 0; j<longitud;j++) 
		{
            if (lista[j] == i) {
                contador++;
            }
        }
        // Imprimir asteriscos para representar la frecuencia
        for (int k = 0; k < contador; k++) 
		{
            printf("*");
        }
        printf("\n");
    }
}








    
    
