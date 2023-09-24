#include <stdio.h>
#include "fraccion.h"

int main(){
    Fraccion f;
    char cadena[100];
   

	inicializar(&f);
    
    setFuncionNumerador(8,&f);
    setFuncionDenominador(10,&f);
    
    int numerador = getNumerador(&f);
    int denominador = getDenominador(&f);

    printf("El numerador es %d / el denominador es %d\n",numerador,denominador);

    float resultado =ftor(&f);
    printf("El resultado es %f\n",resultado);
    
    toString(&f, cadena, sizeof(cadena));
    printf("%s\n", cadena);

    reducir(&f);

    printf("La expresión queda reducida en numerador %d / el denominador es %d\n",f.numerador,f.denominador);

    return 0;
}
