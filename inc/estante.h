#ifndef ESTANTE_H
#define ESTANTE_H

#include <string>
#include <ostream>
#include <vector>

#include "producto.h"
#include "fila.h"

using namespace std;



class estante
{
private:
	string categoria;
	fila_T  fila_;			///< capacidad horizontal.
	int  columna_;			///< capacidad vertical.
	int  volumen_neto_;		///< capacidad en profundidad.

	int volumen_total_;		///< capacidad en profundidad ocupada.

public:
	estante() = default;
	
	~estante();


	filar_T matriz_producto[][columna_]
	//vector< vector< <producto>>> matriz_producto;

	int get_volumen_total() const { return this->volumen_total_;  }
	int get_volumen_neto() const { return this->volumen_neto_ ; }

	void set_volumen_total(int vol_t) {this->volumen_total_ = vol_t; }
	void set_volumen_neto(int vol_n) {this->volumen_neto_ = vol_n; }

	void mostrar_productos();

	void add_producto(producto);

friend ostream& operator<<(ostream& os, const estante& e);

};

#endif // ESTANTE_H
