#include "../inc/fila.h"
#include <iostream>

fila::fila()
{
	volumen_neto_ = 10;
	volumen_total_ = 0;

}

ostream& operator<>(ostream& os, const fila& e)
{
    os << "  Volumen total: " << e.volumen_total_ << "\n"
       << "  Cantidad de productos: " << e.lista_producto.size() << "\n"
       << "---------------------------------------------\n";
    
    for (const auto& prod : e.lista_producto)
    {
        os << "    -> " << prod << "\n";
    }
    
    return os;

    return os;
}