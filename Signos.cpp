#include <stdio.h>
#include <stdlib.h>

int main()
{
	int mes, dia;
			
	printf ("Digite o dia em que voc� nasceu \n");
	scanf  ("%i", &dia);
	printf (" \nDigite o m�s que voc�s nasceu \n");
	scanf  ("%i", &mes);		
	
	if (dia>=21&&mes==3){
	
		printf ("\nDia %i de Mar�o voc� � de �ries \n", dia);
					
	}else if(dia<=20&&mes==4){
		
		printf ("\nDia %i de Abril voc� � de �ries \n", dia);
		
	}else if (dia>=21&&mes==4){
	
		printf ("\nDia %i de Abril voc� � de Touro \n", dia);
	
	}else if(dia<=20&&mes==5){
	
		printf ("\nDia %i de Maio voc� � de Touro \n", dia);
	
	}else if (dia>=21&&mes==5){
		
		printf("\nDia %i de Maio voc� � de G�meos \n", dia);
				
	}else if(dia<=20&&mes==6){
			
		printf ("\nDia %i de Junho voc� � de G�meos \n", dia);
				
	} else if (dia>=21&&mes==6){
		
		printf ("\nDia %i de Junho voc� � de C�ncer \n", dia);
		
	}else if (dia<=22&&mes==7){
		
		printf ("\nDia %i de Julho voc� � de C�ncer \n", dia);
		
	}else if (dia>=23&&mes==7){
		
		printf ("\nDia %i de Julho voc� � de Le�o \n", dia);
		
	}else if (dia<=22&&mes==8){
		
		printf ("\nDia %i de Agosto voc� � de Le�o \n", dia);
		
	}else if (dia>=23&&mes==8){
		
		printf ("\nDia %i de Agosto voc� � de Virgem \n", dia);
		
	}else if (dia<=22&&mes==9){
		
		printf ("\nDia %i de Setembro voc� � de Virgem \n", dia);
	
	}else if (dia>=23&&mes==9){
		
		printf ("\nDia %i de Setembro voc� � de Libra \n", dia);
	
	}else if (dia<=22&&mes==10){
		
		printf ("\nDia %i de Outubro voc� � de Libra \n", dia);
	
	}else if (dia>=23&&mes==10){
		
		printf ("\nDia %i de Outubro voc� � de Escorpi�o \n", dia);
		
	}else if (dia<=21&&mes==11){
	
		printf ("\nDia %i de Novembro voc� � de Escorpi�o \n", dia);
	
	}else if (dia>=22&&mes==11){
		
		printf  ("\nDia %i de Novembro voc� � de Sagit�rio \n", dia);
		
	}else if (dia<=21&&mes==12){
		
		printf ("\nDia %i de Dezembro voc� � de Sagit�rio \n", dia);
		
	}else if (dia>=22&&mes==12){
		
		printf ("\nDia %i de Dezembro voc� � de Capric�rnio \n", dia);
		
	}else if (dia<=20&&mes==1){
		
		printf ("\nDia %i de Janeiro voc� � de Capric�rnio \n", dia);
		
	}else if (dia>=21&&mes==1){
		
		printf ("\nDia %i de Janeiro voc� � de Aqu�rio \n", dia);
		
	}else if (dia<=18&&mes==2){
		
		printf ("\nDia %i de Fevereiro voc� � de Aqu�rio \n", dia);
			
	}else if (dia>=19&&mes==2){
		
		printf ("\nDia %i de Fevereiro voc� � de Peixes \n", dia);
		
	}else if (dia<=20&&mes==3){
		
		printf ("\nDia %i de Mar�o voc� � de Peixes \n", dia);
	}

	}
	
	
		
	



