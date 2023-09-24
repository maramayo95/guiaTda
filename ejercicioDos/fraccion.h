#include <stdio.h>
#include <stdlib.h>

#ifndef FRACCION
#define FRACCION

typedef struct {
	int numerador;
	int denominador;
} Fraccion;

void inicializar(Fraccion *f){
	f->numerador = 0;
	f->denominador = 1;
}

void setFuncionNumerador(int numerador, Fraccion *f){
	f->numerador = numerador;
}

void setFuncionDenominador(int denominador, Fraccion *f){
	f->denominador = denominador;
}

int getNumerador(Fraccion *f){
	return f->numerador;	
}

int getDenominador(Fraccion *f){
	return f->denominador;	
}

int validarDenominador(Fraccion *f){
	if(f->denominador == 0){
		return 0;
	}
	return 1;
}

float ftor(Fraccion *f){
	return (float)f->numerador / f->denominador;
}

void toString(Fraccion *f, char *cadena, int longitud) {
    snprintf(cadena, longitud, "%d / %d", f->numerador, f->denominador);
}

int valorMinimo(Fraccion *f){
	if(f->numerador < f->denominador){
		return f->numerador;
	}
	return f->denominador;
}

int mcd(Fraccion *f){
	int i;
	int vm = valorMinimo(f);
	int resultado = 1;
	
	for(i = 1; i <= vm;i++ ){
		if(f->numerador % i == 0 && f->denominador % i == 0 ){
			resultado = i;
		}
	}
	
	return resultado;
}

void reducir(Fraccion *f){
	int m = mcd(f);
	while(m != 1){
		f->numerador = f->numerador/m;
		f->denominador = f->denominador/m; 
		m = mcd(f);
	}	
}



#endif
