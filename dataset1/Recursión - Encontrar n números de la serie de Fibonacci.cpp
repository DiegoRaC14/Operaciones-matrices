/* Encontrar n números de la serie de Fibonacci*/

#include <stdio.h>

int fibonacci(int n) 
{
    if (n < 0)
        return 0;
        
    else if (n==1)
        return 1;
        
    else
        return fibonacci(n-1)+fibonacci(n-2);
}

void variablesControl(int n, int i)//Variables de control
{
    if (i<n) 
	{
        int serie = fibonacci(i);
        if (serie >= 0)///Garantiza que los números no sean negativos 
		{
            printf("%d: %d\n", i + 1, serie);
        }
        variablesControl(n,i+1);
    }
}

int main() 
{
    int n;
    printf("Numero de elementos de la serie de Fibonacci: ");
    scanf("%d", &n);
    printf("\n");

    printf("Serie de Fibonacci:\n");
    variablesControl(n,0);

    return 0;
}




