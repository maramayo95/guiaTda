#include <stdio.h>
#include "cuenta.h"


#ifndef BANCO
#define BANCO
#define MAX_CUENTAS 100 
typedef struct {
   Cuenta cuentas[100];
}Banco;

void crearCuenta(Cuenta *c){
    inicializarCuenta(c);
    
    insertId(c);
    insertSaldo(c);
    instertNombre(c);

}


int esUnicoId(Banco *b, Cuenta *c){
    int i;

    for(i = 0; i < sizeof(b->cuentas); i++ ){
        if(b->cuentas[i].id == c->id){
            return 0; // No es un id único
        }
        return 1; // Es un id único
    }
}

void agregarCuenta(Banco *b, Cuenta *c) {
    int res;
    int cantidadCuentas = sizeof(b->cuentas) / sizeof(b->cuentas[0]);

    res = esUnicoId(b,c);

    if (res == 0) {
        return;
    }

    if (cantidadCuentas < MAX_CUENTAS) { // MAX_CUENTAS es la cantidad máxima permitida de cuentas
        // Copia los valores de la cuenta c en el último elemento del array
        b->cuentas[cantidadCuentas] = *c;
        (cantidadCuentas)++; // Incrementa la cantidad de cuentas en el banco
    }
}


#endif