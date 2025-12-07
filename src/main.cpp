#include "../inc/fila.h"
#include "../inc/producto.h"

int main() {
    fila f;

    Producto p1("Galletitas","almacen",Fecha(2025, 10, 1), "seco","normal", 40);
    Producto p2("Coca","almacen",Fecha(2025, 10, 1), "seco","normal", 40);

    f.add_producto(p1);
    f.add_producto(p2);

    cout << f << endl;

    return 0;
}
