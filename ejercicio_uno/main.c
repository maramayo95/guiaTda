#include <stdio.h>
#include <stdlib.h>

typedef int boolean;
#define false 0
#define true !false

#include "jugador.h"
#include "equipo.h"
#include "functiones.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

 	
	 Jugador jugadores[11] = {
        {5, 10, 5},
        {20, 1, 7},
        {5, 10, 5},
        {5, 10, 5},
        {5, 10, 5},
        {5, 10, 5},
        {5, 10, 5},
        {5, 10, 5},
        {5, 10, 5},
        {5, 10, 5},
        {5, 10, 5}
    };

    // Crea un equipo y asigna el vector de jugadores
    Equipo miEquipo;
    memcpy(miEquipo.jugadores, jugadores, sizeof(jugadores));

	
	boolean respuestaUno = false; 
	respuestaUno = esBuenJugador(miEquipo.jugadores[0]);
	
	// printf("El valor de la respuesta es: %d", respuestaUno);
	
	int respuestaDos;
	
	respuestaDos = figura(miEquipo);
	respuestaDos = respuestaDos + 1;
	printf("La figura del equipo es %d", respuestaDos);
	
	boolean respuestaTres = false;
	respuestaTres = juegoSucio(miEquipo);
	printf("El valor de la respuesta es: %d", respuestaTres);
	
	return 0;
}
