#ifndef FILA_H
#define FILA_H

#include <iostream>

#include <vector>
#include <list>
#include "producto.h"

using namespace std;

class fila
{
private:
    int largo_;
    int ancho_;
    int volumen_neto_;
    int volumen_total_;
    bool esta_lista(const list<producto>& lista, producto& prod);
    int encontrarPosicion(const list<producto>& lista, fecha& valor);
    list<producto> lista_producto_; 
public:
    fila();
    fila(int largo, int ancho);

    ~fila();

    bool add_producto(producto prod);

    
    friend ostream& operator<<(ostream& os, const fila& e);
};

#endif
