
#include <iostream>
#include "../inc/Producto.h"
#include "../inc/Fecha.h"
using namespace std;

int main() {
    cout << "===== PRUEBA DE CLASE PRODUCTO =====\n" << endl;

    // Crear fechas
    Fecha fecha_vto1(2026, 2, 15);
    Fecha fecha_vto2(2025, 12, 10);

    // Crear productos con constructor completo
    Producto p1("Leche entera", "Comida", fecha_vto1, "Refrigerado", "Sin TACC", 1000);
    Producto p2("Detergente", "Limpieza", fecha_vto2, "Seco", "Ecológico", 1500);

    // Mostrar productos
    cout << "Producto 1:\n" << p1 << "\n\n";
    cout << "Producto 2:\n" << p2 << "\n\n";

    // Usar getters individuales
    cout << "Nombre del producto 1: " << p1.get_nombre() << endl;
    cout << "Vencimiento del producto 1: " << p1.get_vencimiento() << endl;
    cout << "Volumen del producto 1: " << p1.get_volumen() << " ml\n" << endl;

    // Probar setters
    cout << "=== Modificando producto 1 ===\n";
    p1.set_nombre("Leche deslactosada");
    p1.set_volumen(1200);
    p1.set_clasificacion("Orgánica");
    p1.set_vencimiento(Fecha(2027, 5, 30));

    cout << "Producto 1 actualizado:\n" << p1 << "\n\n";

    // Comparar fechas
    cout << "=== Comparando fechas ===\n";
    if (p1.get_vencimiento() > p2.get_vencimiento()) {
        cout << "El producto 1 vence después que el producto 2.\n";
    } else if (p1.get_vencimiento() < p2.get_vencimiento()) {
        cout << "El producto 1 vence antes que el producto 2.\n";
    } else {
        cout << "Ambos productos tienen la misma fecha de vencimiento.\n";
    }

    cout << "\n===== FIN DE PRUEBA =====\n";
    return 0;
}
