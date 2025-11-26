#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <string>
#include <ostream>
using namespace std;

class Producto {
private:
    string nombre_;					
    string categoria_;				// p.ej. "Comida", "Bebida", "Limpieza", etc.
    string vencimiento_;        	//formato : "YYYY-MM-DD"
    string tipo_almacenamiento_; 	//p.ej. "Refrigerado", "Seco", "Congelado"
    string clasificacion_;          // notas/etiquetas especiales (p.ej. "Sin TACC", "Orgánico")

public:
    // --- Constructores ---
    Producto() = default;

    Producto(const string& nombre,
             const string& categoria,
             const string& vencimiento,
             const string& tipo_almacenamiento,
             const string& clasificacion);

    // --- Getters ---
    string get_nombre() const;
    string get_categoria() const;
    string get_vencimiento() const;
    string get_tipo_almacenamiento() const;
    string get_clasificacion() const;

    // --- Setters ---
    void set_nombre(const string& nombre);
    void set_categoria(const string& categoria);
    void set_vencimiento(const string& vencimiento);
    void set_tipo_almacenamiento(const string& tipoAlmacenamiento);
    void set_clasificacion(const string& especial);

    // --- Sobrecarga de operador <<
    friend ostream& operator<<(ostream& os, const Producto& p);
};

#endif // PRODUCTO_H
