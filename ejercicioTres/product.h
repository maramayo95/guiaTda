#include <stdio.h>
#include <stdlib.h>
#include<string.h>

#ifndef PRODUCTO
#define PRODUCTO

typedef struct {
    int code;
    char description[100];
    float price;
    int stock;
}Product;

void inicialize(Product *p){
    p->code = 0;
    strcpy(p->description, "");
    p->price = 0.0;
    p->stock = 0;
}

// Create

void setCode(Product *p , int c){
    p->code = c;
}

void setDescription(Product *p, char *d){
    strcpy(p-> description, d);
}

void setPrice(Product *p , float pr){
    p->price = pr;
}

void setStock(Product *p , int st){
    p->stock = st;
}

// Read

int getCode(Product *p){
    return p->code;
}

void getDescription(Product *p, char* d){
    strcpy(d, p->description);
}

float getPrice(Product *p){
    return p->price;
}

int getStock(Product *p){
    return p->stock;
}


// User 



void insertCode(Product *p){
    int code;

    printf("Inserte el código del producto");
    scanf("%d",&code);

    setCode(p,code);

}

void insertStock(Product *p){
    int stock;
    
    printf("Inserte el stock del producto");
    scanf("%d",&stock);
    
    setStock(p,stock);
    
}

void insertDescription(Product *p){
    char description[100];

    printf("Ingrese la descripción del producto");

    fgets(description, sizeof(description),stdin);

    if (description[strlen(description) - 1] == '\n') {
        description[strlen(description) - 1] = '\0'; // Reemplaza '\n' con '\0'
    }

    setDescription(p, description);
    
}

void insertPrice(Product *p){
    float price;
    
    printf("Inserte el precio del producto");
    scanf("%f",&price);
    setPrice(p,price);
}

#endif