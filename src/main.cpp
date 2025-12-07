#include "../inc/fila.h"
#include "../inc/producto.h"

int main() {
    fila f;

    producto p1("Galletitas", 3, fecha(2025, 10, 1));
    producto p2("Coca", 5, fecha(2024, 12, 2));

    f.add_producto(p1);
    f.add_producto(p2);

    cout << f << endl;

    return 0;
}
