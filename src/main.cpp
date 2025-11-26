
#include <iostream>
#include "../inc/Producto.h"   // o #include "Producto.h" si usás -Iinc
using namespace std;

int main() {
    cout << "===== Prueba de la clase Producto =====\n" << endl;

    // --- Crear un producto con el constructor completo ---
    Producto p1("Leche entera", "Comida", "2026-02-15", "Refrigerado", "Sin TACC");

    cout << "Producto creado con el constructor:\n";
    cout << p1 << endl;  // usa la sobrecarga de operador <<

    // --- Probar getters ---
    cout << "\nPrueba de getters individuales:\n";
    cout << "Nombre: " << p1.get_nombre() << endl;
    cout << "Categoria: " << p1.get_categoria() << endl;
    cout << "Vencimiento: " << p1.get_vencimiento() << endl;
    cout << "Tipo de almacenamiento: " << p1.get_tipo_almacenamiento() << endl;
    cout << "Clasificacion: " << p1.get_clasificacion() << endl;

    // --- Probar setters ---
    cout << "\nModificando algunos atributos con setters...\n";
    p1.set_nombre("Leche deslactosada");
    p1.set_vencimiento("2027-01-10");
    p1.set_tipo_almacenamiento("Seco");
    p1.set_clasificacion("Orgánico");

    cout << "\nProducto modificado:\n";
    cout << p1 << endl;

    // --- Probar un producto vacío y luego usar setters ---
    cout << "\nCreando un producto vacío y llenando con setters:\n";
    Producto p2;
    p2.set_nombre("Arroz 1kg");
    p2.set_categoria("Comida");
    p2.set_vencimiento("2028-05-01");
    p2.set_tipo_almacenamiento("Seco");
    p2.set_clasificacion("Sin TACC");

    cout << p2 << endl;

    Producto p3;
    p3.set_nombre("crema corporal");
    p3.set_categoria("farmacia");

    cout<< "producto vacio"<< endl;
    cout<< p3 << endl;

    cout << "\n===== Fin de la prueba =====" << endl;
    return 0;
}
