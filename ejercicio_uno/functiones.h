#include <stdio.h>
#include <stdlib.h>
#include "equipo.h"
#include "jugador.h"

typedef int boolean;
#define false 0
#define true !false

#define totalJ 10

#ifndef FUNCIONES_H
#define FUNCIONES_H



boolean esBuenJugador(Jugador j){
	if(j.cantGoles >= 10 && j.cantInfracciones <= 5){
		return true;
	} 
	return false;
}


int figura(Equipo e){
	int i;
	int max = 0; // Goles
	int pos = -1;
	for(i = 0; i <= totalJ; i++){
		if(esBuenJugador(e.jugadores[i]) && e.jugadores[i].cantGoles > max){
				max = e.jugadores[i].cantGoles;
				pos = i;		
		}
	}
	
	return pos;	
}

boolean juegoSucio(Equipo e){
	int i;
	int contador = 0;
	
	
	for(i = 0; i <= totalJ; i++){	
		if(e.jugadores[i].cantGoles >= 1 && e.jugadores[i].cantPartidos > 2 && e.jugadores[i].cantInfracciones > 0){
			contador = contador + 1;
		}
	}
	
	if(contador == 11){
		return true;
	}
	
	return false;
}

#endif // FUNCIONES_H
