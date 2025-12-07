#include "../inc/fila.h"
#include <iostream>
#include <algorithm>

fila::fila()
{
    // Unidades de mts.
    this->largo_ = 5;
    this->ancho_ = 2;
	this->volumen_neto_ = 10;
	this->volumen_total_ = 0;
    this->categoria_ = "NN";
}

fila::fila(int largo, int ancho)
{
    this->largo_ = largo;
    this->ancho_ = ancho;
    this->volumen_neto_ = largo * ancho;
    this->volumen_total_ = 0;
    this->categoria_ = "NN";
}
fila::~fila()
{

}

ostream& operator<<(ostream& os, const fila& e)
{
    os << "  Volumen total: " << e.volumen_total_ << "\n"
       << "  Cantidad de productos: " << e.lista_producto_.size() << "\n"
       << "---------------------------------------------\n";
    
    for (const auto& prod : e.lista_producto_)
    {
        os << "    -> " << prod << "\n";
    }
    
    return os;
}

bool fila::pertenece(Producto& prod)
{
    bool flag = false;
    if(this->categoria_ = prod.get_categoria())
    {
        flag = true;
    }
    return flag;
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

    if(this->volumen_neto_ == 0)
    {
        this->categoria_ = prod.get_categoria();
    }

    if(verificacion <= this->volumen_neto_ && this->categoria_ = prod.get_categoria()) // Verificacion de espacio.
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