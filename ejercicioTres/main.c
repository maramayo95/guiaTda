#include <stdio.h>
#include <stdlib.h>
#include "product.h"

int main(){
    Product p;

    int c,s;
    float pr;
    char d[100];

    inicialize(&p);
    insertCode(&p);
    insertDescription(&p);
    insertPrice(&p);
    insertStock(&p);

    c =getCode(&p);
    getDescription(&p,d);
    s =getStock(&p);
    pr =getPrice(&p);
    printf("%f",pr);


    printf("El codigo del producto es : %d , el precio es : %f y el stock es %d\n ", c,pr,s);
    printf("La descripcion es %s", d);

    return 0;

}

