#include <stdio.h>

class Circulo {
private:
    float radio;
    float diametro;
    float Pi;

public:
    Circulo() {
        radio = 0;
        diametro = 0;
        Pi = 3.1416;
    }

    void calcularArea() {
        printf("\nDame el radio: ");
        scanf("%f", &radio);
        float area = Pi * radio * radio;
        printf("\nEl resultado es: %f\n", area);
    }

    void calcularPerimetro() {
        printf("\nDame el diametro: ");
        scanf("%f", &diametro);
        float perimetro = Pi * diametro;
        printf("\nEl perimetro es: %f\n", perimetro);
    }
};

int main() {
    Circulo c;
    int opcion;

    printf("\nOPERACION A REALIZAR\n");
    printf("1. AREA\n");
    printf("2. PERIMETRO\n");
    printf("\nEscoje opcion: ");
    scanf("%d", &opcion);

    switch (opcion) {
        case 1:
            c.calcularArea();
            break;
        case 2:
            c.calcularPerimetro();
            break;
        default:
            printf("\n******* OPCION INVALIDA *******\n");
            break;
    }

    return 0;
}

