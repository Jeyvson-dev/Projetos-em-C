#include <stdio.h>
#include <stdlib.h>

int main()
{
	int mes, dia;
			
	printf ("Digite o dia em que você nasceu \n");
	scanf  ("%i", &dia);
	printf (" \nDigite o mês que vocês nasceu \n");
	scanf  ("%i", &mes);		
	
	if (dia>=21&&mes==3){
	
		printf ("\nDia %i de Março você é de Áries \n", dia);
					
	}else if(dia<=20&&mes==4){
		
		printf ("\nDia %i de Abril você é de Áries \n", dia);
		
	}else if (dia>=21&&mes==4){
	
		printf ("\nDia %i de Abril você é de Touro \n", dia);
	
	}else if(dia<=20&&mes==5){
	
		printf ("\nDia %i de Maio você é de Touro \n", dia);
	
	}else if (dia>=21&&mes==5){
		
		printf("\nDia %i de Maio você é de Gêmeos \n", dia);
				
	}else if(dia<=20&&mes==6){
			
		printf ("\nDia %i de Junho você é de Gêmeos \n", dia);
				
	} else if (dia>=21&&mes==6){
		
		printf ("\nDia %i de Junho você é de Câncer \n", dia);
		
	}else if (dia<=22&&mes==7){
		
		printf ("\nDia %i de Julho você é de Câncer \n", dia);
		
	}else if (dia>=23&&mes==7){
		
		printf ("\nDia %i de Julho você é de Leão \n", dia);
		
	}else if (dia<=22&&mes==8){
		
		printf ("\nDia %i de Agosto você é de Leão \n", dia);
		
	}else if (dia>=23&&mes==8){
		
		printf ("\nDia %i de Agosto você é de Virgem \n", dia);
		
	}else if (dia<=22&&mes==9){
		
		printf ("\nDia %i de Setembro você é de Virgem \n", dia);
	
	}else if (dia>=23&&mes==9){
		
		printf ("\nDia %i de Setembro você é de Libra \n", dia);
	
	}else if (dia<=22&&mes==10){
		
		printf ("\nDia %i de Outubro você é de Libra \n", dia);
	
	}else if (dia>=23&&mes==10){
		
		printf ("\nDia %i de Outubro você é de Escorpião \n", dia);
		
	}else if (dia<=21&&mes==11){
	
		printf ("\nDia %i de Novembro você é de Escorpião \n", dia);
	
	}else if (dia>=22&&mes==11){
		
		printf  ("\nDia %i de Novembro você é de Sagitário \n", dia);
		
	}else if (dia<=21&&mes==12){
		
		printf ("\nDia %i de Dezembro você é de Sagitário \n", dia);
		
	}else if (dia>=22&&mes==12){
		
		printf ("\nDia %i de Dezembro você é de Capricórnio \n", dia);
		
	}else if (dia<=20&&mes==1){
		
		printf ("\nDia %i de Janeiro você é de Capricórnio \n", dia);
		
	}else if (dia>=21&&mes==1){
		
		printf ("\nDia %i de Janeiro você é de Aquário \n", dia);
		
	}else if (dia<=18&&mes==2){
		
		printf ("\nDia %i de Fevereiro você é de Aquário \n", dia);
			
	}else if (dia>=19&&mes==2){
		
		printf ("\nDia %i de Fevereiro você é de Peixes \n", dia);
		
	}else if (dia<=20&&mes==3){
		
		printf ("\nDia %i de Março você é de Peixes \n", dia);
	}

	}
	
	
		
	



