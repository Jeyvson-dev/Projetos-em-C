#include <stdio.h>
#include <stdlib.h>

int main(){

int pessoas, eletro, metros, btu;
char sol;

	printf ("Quantas pessoas tem em seu quarto? \n");
	scanf ("%i", &pessoas);
	printf ("\n Quantos eletro domésticos tem em seu quarto? \n");
	scanf ("%i", &eletro);
	printf ("\n Quantos metros quadrados tem o seu quarto? \n");
	scanf ("%i", &metros);
	printf ("\n O seu quarto recebe luz direta do sol? s/n \n");
	scanf ("%s", &sol);

	if (sol=='s'||'S'){	
		btu = (pessoas+eletro+metros)*600+800;
		printf("%i", btu);  
	}else if (sol=='n'||'N'){
		btu = (pessoas+eletro+metros)*600;
		printf("%i", btu);

	}else{
	printf("\n Opção inválida \n");
		
	}
			
			
		
	
}
