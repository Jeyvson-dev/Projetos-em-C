#include <stdio.h>
#include <stdlib.h>

int main()
{

int cont, numero, total;


	printf("Digite um n�mero para o come�o da Tabuada: \n");
	scanf ("%i", &numero);
	printf ("\nA tabuada de %i �: \n", numero);


	for(cont=1;cont<=10;cont++){
		
		total = numero*cont;
		
		printf ("\n%i\n", total);
		
	}
	
	
}

