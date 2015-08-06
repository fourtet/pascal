#include <stdio.h>

typedef struct FECHA {
   int dia;
   int mes;
   int anio;
   
} FECHA;

typedef struct CONTRATO {
   FECHA fecha;
   int contrato;
} CONTRATO;

void buscar(CONTRATO c[])
{
	for(int i=0;i<10;i++)
	{
		printf("%d\n",c[i].fecha.dia);
	}
}


int main(){

	CONTRATO c[10];
	
	for(int i=0;i<10;i++)
	{
		c[i].fecha.dia = i;

	}

	buscar(c);

	


}


//  01/03/2005   20050301
//  05/03/2007   20070305
//  18/10/1991   19911018