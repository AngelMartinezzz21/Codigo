#include <stdio.h>

class Triangulo {
  private:
	float  base;
	float  altura;
	
  public:
       Triangulo () {
       	 base = 0;
       	 altura = 0;
	   }
	
	void calcularArea() {
		printf("\nDame la base: ");
        scanf("%f", & base);
        
        printf("\nDame la altura: ");
        scanf("%f", & altura);
        
        float area = ((base * altura)/2);
        printf("\nEl resultado es: %f\n", area);
	}
	
};

int main() {
    Triangulo t;
    int opcion;

    printf("\nOPERACION A REALIZAR\n");
    printf("1. Area de triangulo\n");
    
    printf("\nEscoje opcion: ");
    scanf("%d", &opcion);

    switch (opcion) {
        case 1:
            t.calcularArea();
            break;
        
        default:
            printf("\n******* OPCION INVALIDA *******\n");
            break;
    }

    return 0;
}
