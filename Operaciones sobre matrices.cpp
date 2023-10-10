#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i, j; // Variables de control
    int longitud; // Variable longitud de la matriz
    int sumaDiagonalS = 0; // Inicializar la suma en 0
    int opc; // Opciones para el programa

    printf("Ingrese la longitud de la matriz: ");
    scanf("%d", &longitud);

    srand(time(NULL)); // Semilla que genera números aleatorios

    int matriz1[longitud][longitud]; // Crear matriz
    
    for (i = 0; i < longitud; i++) // Llenar matriz 1 con números aleatorios
    {
        for (j = 0; j < longitud; j++) 
		{
            matriz1[i][j] = rand() % 10; // Generar números aleatorios entre 0 y 9
        }
    }

    printf("Matriz aleatoria:\n"); // Imprimir la matriz
    for (i = 0; i < longitud; i++) 
	{
        for (j = 0; j < longitud; j++) 
		{
            printf("%d ", matriz1[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < longitud; i++)
	{
        for (j = i + 1; j < longitud; j++)
		{
            sumaDiagonalS += matriz1[i][j];
        }
    }
    
	printf("Suma de la diagonal superior: %d \v", sumaDiagonalS);
    
    
	do
	{
		printf("\033[0;36m");//Color cyan 
    	printf("\vA continuacion se muestran la opciones para continuar o terminar el programa:\n\n");
    	printf("\033[0;0m");//Color blanco 
    	printf("1: Suma de dos matrices aleatorias\n");
    	printf("2: Resta de dos matrices aleatorias\n");
    	printf("3: Multiplicación de dos matrices aleatorias\n");
    	printf("5: Terminar programa\n\n");
		
		printf("\033[0;36m");//Color cyan 
		printf("Ingrese el numero para realizar de las siguientes opciones: ");
		printf("\033[0;0m");//Color blanco 
    	scanf("%d",&opc);

	    switch(opc)
	    {
	    	case 1://Suma de matrices
	    	int matriz1[longitud][longitud];//Declarar matriz 1
			for (i=0;i<longitud;i++) // Llenar matriz 1 con números aleatorios
    		{
		        for (j=0;j<longitud;j++) 
				{
		            matriz1[i][j] = rand() % 10; // Generar números aleatorios entre 0 y 9
		        }
   			 }

		    printf("Matriz aleatoria 1:\n"); // Imprimir la matriz
		    for (i=0;i<longitud;i++) 
			{
		        for (j=0;j<longitud;j++) 
				{
		            printf("%d ", matriz1[i][j]);
		        }
		        printf("\n");
		    }//Termina matriz 1
			
			int matriz2[longitud][longitud];//Declarar matriz 2
			for (i=0;i<longitud;i++) // Llenar matriz 2 con números aleatorios
    		{
		        for (j=0;j<longitud;j++) 
				{
		            matriz2[i][j] = rand() % 10; // Generar números aleatorios entre 0 y 9
		        }
   			 }

		    printf("Matriz aleatoria 2:\n"); // Imprimir la matriz 2
		    for (i = 0;i < longitud; i++) 
			{
		        for (j = 0;j < longitud; j++) 
				{
		            printf("%d ", matriz2[i][j]);
		        }
		        printf("\n");
		    }//Termina matriz 2
			
			int suma[longitud][longitud]; //Suma de ambas matrices (1 y 2)
    		for (i = 0; i < longitud; i++) 
			{
        		for (j = 0; j < longitud; j++) 
				{
            		suma[i][j] = matriz1[i][j] + matriz2[i][j];
        		}
    		}
    
		    printf("Suma:\n");// Imprimir la matriz resultado
		    for (i = 0;i < longitud;i++) 
			{
		        for (int j = 0; j < longitud; j++)
				{
		            printf("%d ", suma[i][j]);
		        }
		        printf("\n");
		    }	
	    	break;//Termina suma de matrices
	    	
	    	case 2://Resta de matrices
			int matriz3[longitud][longitud];//Declarar matriz 1
			for (i=0;i<longitud;i++) // Llenar matriz 1 con números aleatorios
    		{
		        for (j=0;j<longitud;j++) 
				{
		            matriz3[i][j] = rand() % 10; // Generar números aleatorios entre 0 y 9
		        }
   			 }

		    printf("Matriz aleatoria 1:\n"); // Imprimir la matriz
		    for (i=0;i<longitud;i++) 
			{
		        for (j=0;j<longitud;j++) 
				{
		            printf("%d ", matriz3[i][j]);
		        }
		        printf("\n");
		    }//Termina matriz 1
			
			int matriz4[longitud][longitud];//Declarar matriz 2
			for (i=0;i<longitud;i++) // Llenar matriz 2 con números aleatorios
    		{
		        for (j=0;j<longitud;j++) 
				{
		            matriz4[i][j] = rand() % 10; // Generar números aleatorios entre 0 y 9
		        }
   			}

		    printf("Matriz aleatoria 2:\n"); // Imprimir la matriz 2
		    for (i = 0;i < longitud; i++) 
			{
		        for (j = 0;j < longitud; j++) 
				{
		            printf("%d ", matriz4[i][j]);
		        }
		        printf("\n");
		    }//Termina matriz 2
			
			int resta[longitud][longitud]; //Resta de ambas matrices (1 y 2)
    		for (i = 0; i < longitud; i++) 
			{
        		for (j = 0; j < longitud; j++) 
				{
            		resta[i][j] = matriz3[i][j] - matriz4[i][j];
        		}
    		}
    
		    printf("Resta:\n");// Imprimir la matriz resultado
		    for (i = 0;i < longitud;i++) 
			{
		        for (int j = 0; j < longitud; j++)
				{
		            printf("%d ", resta[i][j]);
		        }
		        printf("\n");
		    }	
	    	break;//Resta de dos matrices
	    	
	    case 3:
	   		int matriz5[longitud][longitud];
	    	printf("Matriz aleatoria 1:\n");
	    	for (i = 0; i < longitud; i++)
			{
	        	for (j = 0; j < longitud; j++) 
				{
	            matriz5[i][j] = rand() % 10; // Generar números aleatorios entre 0 y 9
	            printf("%d ", matriz5[i][j]);
	        }
	        printf("\n");
	    }
	    
		    // Declarar y llenar la segunda matriz con números aleatorios
		    int matriz6[longitud][longitud];
		    printf("Matriz aleatoria 2:\n");
		    for (i = 0; i < longitud; i++) 
			{
		        for (j = 0; j < longitud; j++)
				 {
		            matriz6[i][j] = rand() % 10; // Generar números aleatorios entre 0 y 9
		            printf("%d ", matriz6[i][j]);
		        }
		        printf("\n");
		    }
		    
		    // Declarar la matriz resultado
		    int resultado[longitud][longitud];
		    
		    // Inicializar la matriz resultado en 0
		    for (i = 0; i < longitud; i++) 
			{
		        for (j = 0; j < longitud; j++) {
		            resultado[i][j] = 0;
		        }
		    }
		    
		    // Realizar la multiplicación de matrices
		    for (i = 0; i < longitud; i++) 
			{
		        for (j = 0; j < longitud; j++) 
				{
		            for (int k = 0; k < longitud; k++)
					{
		                resultado[i][j] += matriz5[i][k] * matriz6[k][j];
		            }
		        }
		    }
		    
		    // Imprimir la matriz resultado
		    printf("Matriz Resultado:\n");
		    for (i = 0; i < longitud; i++) 
			{
		        for (j = 0; j < longitud; j++) 
				{
		            printf("%d ", resultado[i][j]);
		        }
		        printf("\n");
		    }
		    	break;
		    }
	    
	} while (opc!=4);
    return 0;
}

