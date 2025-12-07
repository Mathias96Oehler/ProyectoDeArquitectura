#ifndef FECHA_H
#define FECHA_H

#include <ostream>
using namespace std;

class Fecha {
private:
    int anio_;
    int mes_;
    int dia_;

public:
    Fecha() = default;
    Fecha(int anio, int mes, int dia);

    // --- Getters ---
    int get_anio() const;
    int get_mes() const;
    int get_dia() const;

    // --- Setters ---
    void set_anio(int anio);
    void set_mes(int mes);
    void set_dia(int dia);

    // --- Sobrecarga de operadores de comparación ---
    bool operator==(const Fecha& otra) const;
    bool operator<(const Fecha& otra) const;
    bool operator>(const Fecha& otra) const;

    // --- Sobrecarga de salida ---
    friend ostream& operator<<(ostream& os, const Fecha& f);
};

#endif // FECHA_H
