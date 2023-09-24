#include <stdio.h>
#include <string.h>

#ifndef CUENTA
#define CUENTA

typedef struct {
    long id;
    char nombre[100];
    double saldo;
    double interes;
}Cuenta;

void inicializarCuenta(Cuenta *c){
    c->id = -1;
    strcpy(c->nombre, "");
    c->saldo = 0;
    c-> interes = 0;
}

// Crear
void setid(Cuenta *c, long i){
    c->id = i;
}

void setNombre(Cuenta *c, char *n){
     strcpy(c->nombre, n);
}

void setSaldo(Cuenta *c, double s){
    c->saldo = s;
}

void setInteres(Cuenta *c, double interes){
    c->interes = interes;
}

void actualizarSaldo(Cuenta *c){
    double nuevoSaldo;
    double resultado;
    printf("Ingrese un nuevo saldo");
    scanf("%lf",&nuevoSaldo);

    // Calcular interes
    resultado = (c->interes * nuevoSaldo)/ 100;
    c->saldo = resultado;
}

// Leer

long getid(Cuenta *c){
   return c->id;
}

void getNombre(Cuenta *c, char* d){
    strcpy(d, c->nombre);
}

double getSaldo(Cuenta *c){
   return c->saldo;
}

double getInteres(Cuenta *c){
   return c->interes;
}



// Leer cuenta

void leerCuenta(Cuenta *c){
    printf("id : %d\n",c->id );
    printf("nombre: %s\n", c->nombre);
    printf("saldo: %d", c->saldo);
}

// Usuarios



void insertId(Cuenta *c){
    long id;
    
    printf("Inserte el id de la Cuenta\n");
    scanf("%ld",&id);
    setid(c,id);
}

void insertSaldo(Cuenta *c){
    double s;
    
    printf("Inserte el saldo de la Cuenta\n");
    scanf("%lf",&s);
    setSaldo(c,s);
}



void instertNombre(Cuenta *c){
    char nombre[100];

    printf("Ingrese el nombre del usuario\n");

    fgets(nombre, sizeof(nombre),stdin);

    if (nombre[strlen(nombre) - 1] == '\n') {
        nombre[strlen(nombre) - 1] = '\0'; // Reemplaza '\n' con '\0'
    }

    setNombre(c, nombre);
    
}

#endif