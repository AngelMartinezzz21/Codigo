#include <stdio.h>
#include <string.h>


class Animal {
public:
    char nombre[50];

    void comer() {
        printf("%s esta comiendo.\n", nombre);
    }

    void dormir() {
        printf("%s esta durmiendo.\n", nombre);
    }
    
     void caminar() {
        printf("%s esta caminado.\n", nombre);
    }
    
    void beber(){
    	printf("%s esta bebiendo", nombre);
	}
    
};


class Mamifero : public Animal {
public:

    void darcomer() {
        printf("%s amamanta a sus crias.\n", nombre);
    }
    
};


class Oviparo : public Animal {
public:
    int numeroHuevos;

    void ponerHuevos() {
        printf("%s esta poniendo %d huevos.\n", nombre, numeroHuevos);
    }
};

int main() {
    Mamifero m;
    Oviparo o;

    printf("Ingrese el nombre del mamifero: ");
    scanf("%49s", m.nombre);


    printf("Ingrese el nombre del oviparo: ");
    scanf("%49s", o.nombre);

    printf("Ingrese el numero de huevos del oviparo: ");
    scanf("%d", &o.numeroHuevos);

    if (o.numeroHuevos < 0) {
    o.numeroHuevos = 0;
}


    printf("\nMamifero:\n");
    m.comer();
    m.darcomer();
    m.dormir();
    m.caminar();
    m.beber();

    printf("\nOviparo:\n");
    o.comer();
    o.ponerHuevos();
    o.dormir();
    o.caminar();
    o.beber();
    return 0;
}


