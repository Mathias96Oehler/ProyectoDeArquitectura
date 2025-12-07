#include "../inc/fecha.h"
using namespace std;

// ---         Constructor       ---
Fecha::Fecha(int anio, int mes, int dia)
    : anio_(anio), mes_(mes), dia_(dia) {}

// ---  Getters ---
int Fecha::get_anio() const { return anio_; }
int Fecha::get_mes() const { return mes_; }
int Fecha::get_dia() const { return dia_; }

// ---     Setters          ---
void Fecha::set_anio(int anio) { anio_ = anio; }
void Fecha::set_mes(int mes) { mes_ = mes; }
void Fecha::set_dia(int dia) { dia_ = dia; }

// ---   Sobrecarga de operadores ---
bool Fecha::operator==(const Fecha& otra) const {
    return (anio_ == otra.anio_ &&
            mes_ == otra.mes_ &&
            dia_ == otra.dia_);
}

bool Fecha::operator<(const Fecha& otra) const {
    if (anio_ != otra.anio_) return anio_ < otra.anio_;
    if (mes_ != otra.mes_) return mes_ < otra.mes_;
    return dia_ < otra.dia_;
}

bool Fecha::operator>(const Fecha& otra) const {
    if (anio_ != otra.anio_) return anio_ > otra.anio_;
    if (mes_ != otra.mes_) return mes_ > otra.mes_;
    return dia_ > otra.dia_;
}

// --- Sobrecarga de salida ---
ostream& operator<<(ostream& os, const Fecha& f) {
    os << f.dia_ << "/" << f.mes_ << "/" << f.anio_;
    return os;
}
