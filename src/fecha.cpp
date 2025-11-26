#include "../inc/fecha.h"
using namespace std;


// --- constructor --- 
fecha::fecha(const int año,
			const int mes,
			const int dia) 
	:	año_(año),
		mes_(mes),
		dia_(dia) {}

// --- Getters --- 
int fecha::get_año() const { return año_ ;}
int fecha::get_mes() const { return mes_ ;}
int fecha::get_dia() const { return dia_ ;}

// --- Setters --- 

void fecha::set_año(const int año){año_ = año;}
void fecha::set_año(const int año){mes_ = mes;}
void fecha::set_año(const int año){dia_ = dia;}

//--- sobrecarga de operadores --- 

ostream& operator<<(ostream &os , const fecha& f){
	os << f.dia_ <<"/"<< f.mes_<<"/"<< f.año_<< "\n" ; 
	return os; 
}