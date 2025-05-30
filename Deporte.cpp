#include <stdio.h>
#include <string.h>

class Deporte {
public:
    char nombre[30];
    char lugar[30];
    int jugadores;
    int duracion;  

    void mostrarInfo() {
        printf("\n--- Informacion del Deporte ---\n");
        printf("Nombre: %s\n", nombre);
        printf("Lugar: %s\n", lugar);
        printf("Jugadores: %d\n", jugadores);
    }

    void jugar() {
        printf("Se esta jugando %s.\n", nombre);
    }

    void entrenar() {
        printf("Se esta entrenando para %s.\n", nombre);
    }
    
    void mostrarDuracion() {  
        printf("Duracion del partido: %d minutos.\n", duracion);
    }
};

class Futbol : public Deporte {
public:
    void patearBalon() {
        printf("%s: Se patea el balon con los pies.\n", nombre);
    }
};

class Balonmano : public Deporte {
public:
    void lanzarBalon() {
        printf("%s: Se lanza el balon con las manos.\n", nombre);
    }
};

class Waterpolo : public Deporte {
public:
    void agua() {
        printf("%s: En el agua, se maniobra y lanza el balon.\n", nombre);
    }
};

int main() {

    Futbol futbol;
    strcpy(futbol.nombre, "Futbol");
    strcpy(futbol.lugar, "Estadio");
    futbol.jugadores = 11;
    futbol.duracion = 90;  

    Balonmano balonmano;
    strcpy(balonmano.nombre, "Balonmano");
    strcpy(balonmano.lugar, "Gimnasio");
    balonmano.jugadores = 7;
    balonmano.duracion = 60;

    Waterpolo waterpolo;
    strcpy(waterpolo.nombre, "Waterpolo");
    strcpy(waterpolo.lugar, "Piscina");
    waterpolo.jugadores = 7;
    waterpolo.duracion = 32;

    futbol.mostrarInfo();
    futbol.mostrarDuracion();
    futbol.jugar();
    futbol.entrenar();
    futbol.patearBalon();

    balonmano.mostrarInfo();
    balonmano.mostrarDuracion();
    balonmano.jugar();
    balonmano.entrenar();
    balonmano.lanzarBalon();

    waterpolo.mostrarInfo();
    waterpolo.mostrarDuracion();
    waterpolo.jugar();
    waterpolo.entrenar();
    waterpolo.agua();

    return 0;
}

