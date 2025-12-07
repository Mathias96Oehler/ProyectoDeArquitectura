#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <string>
#include <ostream>
#include "Fecha.h"


class Producto {
private:
    string nombre_;					
    string categoria_;				// p.ej. "Comida", "Bebida", "Limpieza", etc.
    Fecha vencimiento_;        	    //objeto con formato : "YYYY-MM-DD"
    string tipo_almacenamiento_; 	//p.ej. "Refrigerado", "Seco", "Congelado"
    string clasificacion_;         // notas/etiquetas especiales (p.ej. "Sin TACC", "Orgánico")
    int volumen_; 

public:
    // --- Constructores ---
    Producto() = default;

    Producto(const string& nombre,
             const string& categoria,
             const Fecha & vencimiento,
             const string& tipo_almacenamiento,
             const string& clasificacion,
             const    int& volumen);

    // --- Getters ---
    string get_nombre() const;
    string get_categoria() const;
    Fecha  get_vencimiento() const;
    string get_tipo_almacenamiento() const;
    string get_clasificacion() const;
    int    get_volumen() const; 


    // --- Setters ---
    void set_nombre(const string& nombre);
 

    void set_categoria(const string& categoria);
    void set_vencimiento(const Fecha& vencimiento);
    void set_tipo_almacenamiento(const string& tipo_almacenamiento);
    void set_clasificacion(const string& especial);
    void set_volumen(const int& volumen);

    // --- Sobrecarga de operador <<
    friend ostream& operator<<(ostream& os, const Producto& p);
};

#endif // PRODUCTO_H
