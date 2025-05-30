#include <stdio.h>
#include <conio.h>

main()
{
float area, radio, perimetro, diametro;
const  float Pi = 3.1416;
int opcion;

printf("\nOPERACION A REALIZAR\n");
printf("\n1.AREA\n");
printf("\n2.PERIMETRO\n");

printf("\nEscoje opcion: ");
	scanf("%d",& opcion);
	
	switch (opcion)
	{
	
	case 1:  
	        printf("\nDame el radio: ");
	       scanf("%f", & radio);
	      area = ((radio * radio)*Pi);
	      printf("\nEl resultado es: %f", area);
	
	      break;
	    
	case 2:
	        printf("\nDame el diametro: ");
	        scanf("%f", & diametro);
	
	        perimetro = Pi * diametro;
	        printf("\nEl perimetro es es: %f", perimetro);
	      
		    break;
	      
    default: 
	        printf("\n*******OPCION INVALIDA*******");
	     break;

}

getch();
}
