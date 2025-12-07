#include "../inc/fila.h"
#include <iostream>
#include <algorithm>

fila::fila()
{
    // Unidades de mts.
    largo_ = 5;
    ancho_ = 2;
	volumen_neto_ = 10;
	volumen_total_ = 0;
}

fila::fila(int largo, int ancho)
{
    this->largo_ = largo;
    this->ancho_ = ancho;
    volumen_neto_ = largo * ancho;
    volumen_total_ = 0;
}
fila::~fila()
{

}

ostream& operator<<(ostream& os, const fila& e)
{
    os << "  Volumen total: " << e.volumen_total_ << "\n"
       << "  Cantidad de productos: " << e.lista_producto_.size() << "\n"
       << "---------------------------------------------\n";
    
    for (const auto& prod : e.lista_producto)
    {
        os << "    -> " << prod << "\n";
    }
    
    return os;
}

bool fila::esta_lista(const list<Producto>& lista, Producto prod)
 {
    return find(lista.begin(), lista.end(), prod) != lista.end();
}

int fila::encontrarPosicion(const list<Producto>& lista, const Fecha& valor)
{
    int posicion = 0;
    for (const auto& prod : lista) {
        if (prod.get_fecha() == valor) {
            return posicion;
        }
        posicion++;
    }
    return NO_EXISTE;
}

bool fila::add_producto(Producto prod)
{
    bool flag = false;
    int verificacion = prod.get_volumen() + this->volumen_total_;

    if(verificacion <= this->volumen_neto_) // Verificacion de espacio.
    {
        int pos = encontrarPosicion(this->lista_producto_, prod.get_fecha());
        if(pos != -1)
        {
            auto it = lista_producto_.begin();
            advance(it, pos);
            lista_producto_.insert(it, prod);
            
            flag = true;
            volumen_total_ += prod.get_volumen();
        }
        else
        {
            lista_producto_.push_back(prod);
            flag = true;
            volumen_total_ += prod.get_volumen();
        }
    }
    return flag;
}