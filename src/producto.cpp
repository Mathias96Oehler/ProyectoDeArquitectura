
#include "../inc/Producto.h"
using namespace std;

// --- Constructor completo ---
Producto::Producto(const string& nombre,
                   const string& categoria,
                   const string& vencimiento,
                   const string& tipo_almacenamiento,
                   const string& clasificacion)
    : nombre_(nombre),
      categoria_(categoria),
      vencimiento_(vencimiento),
      tipo_almacenamiento_(tipo_almacenamiento),
      clasificacion_(clasificacion) {}


// --- Getters ---
string Producto::get_nombre() const { return nombre_; }
string Producto::get_categoria() const { return categoria_; }
string Producto::get_vencimiento() const { return vencimiento_; }
string Producto::get_tipo_almacenamiento() const { return tipo_almacenamiento_; }
string Producto::get_clasificacion() const { return clasificacion_; }

// --- Setters ---
void Producto::set_nombre(const string& nombre) { nombre_ = nombre; }
void Producto::set_categoria(const string& categoria) { categoria_ = categoria; }
void Producto::set_vencimiento(const string& vencimiento) { vencimiento_ = vencimiento; }
void Producto::set_tipo_almacenamiento(const string& tipo_almacenamiento) { tipo_almacenamiento_ = tipo_almacenamiento; }
void Producto::set_clasificacion(const string& clasificacion) { clasificacion_ = clasificacion; }


// --- Sobrecarga de operador << ---
ostream& operator<<(ostream& os, const Producto& p) {
    os << "Producto {\n"
       << "  Nombre: " << p.nombre_ << "\n"
       << "  Categoria: " << p.categoria_ << "\n"
       << "  Vencimiento: " << (p.vencimiento_.empty() ? "-" : p.vencimiento_) << "\n"
       << "  Tipo de almacenamiento: " << p.tipo_almacenamiento_ << "\n"
       << "  Clasificacion: " << (p.clasificacion_.empty() ? "-" : p.clasificacion_) << "\n"
       << "}";
    return os;
}
