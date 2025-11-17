#include "../inc/estante.h"
#include <iostream>

estante::estante()
    : fila_(10),
      columna_(2),
      volumen_neto_(50),
      volumen_total_(0)
{

}

void estante::mostrar_productos()
{
    cout << "Estante: "<< this->categoria << "ID:" << "xxx\n";

    for (const auto& p : lista_producto)
    {
        cout << " - " << p << endl;
    }
}


ostream& operator<<(ostream& os, const estante& e)
{
    os << "Estante [" << e.categoria << "]\n"
       << "  Fila: " << e.fila_ << "\n"
       << "  Columna: " << e.columna_ << "\n"
       << "  Volumen neto: " << e.volumen_neto_ << "\n"
       << "  Volumen total: " << e.volumen_total_ << "\n"
       << "  Cantidad de productos: " << e.lista_producto.size() << "\n";

    return os;
}
/* // OPCIONAL.
ostream& operator<>(ostream& os, const estante& e)
{
    os << "Estante [" << e.categoria << "]\n"
       << "  Fila: " << e.fila_ << "\n"
       << "  Columna: " << e.columna_ << "\n"
       << "  Volumen neto: " << e.volumen_neto_ << "\n"
       << "  Volumen total: " << e.volumen_total_ << "\n"
       << "  Cantidad de productos: " << e.lista_producto.size() << "\n"
       << "---------------------------------------------\n";
    
    for (const auto& prod : e.lista_producto)
    {
        os << "    -> " << prod << "\n";
    }
    
    return os;

    return os;
}
*/
void estante::add_producto(producto)
{

}