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
    int volumen_neto_;
    int volumen_total_;

    vector<vector<list<producto>>> matriz_producto;

public:
    fila(int fila, int profundidad);
    ~fila();


    list<producto>& getCelda(int col, int prof) { 
        return matriz_producto[col][prof];
    }

    friend ostream& operator<<(ostream& os, const fila& e);
};

#endif
