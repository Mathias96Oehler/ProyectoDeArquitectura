#ifndef FECHA_H
#define FECHA_H

#include <string>
#include <ostream>

class fecha
{
private: 
	int año_;
	int mes_;
	int dia_;
public:
	fecha() = default;
	fecha(	const int año,
			const int mes,
			const int dia); 

	// --getters-- 
	int get_año() const;
	int get_mes() const;
	int get_dia() const; 

	// -- Setters -- 
	void set_año(const int año);
	void set_mes(const int mes);
	void set_dia(const int dia); 


	friend ostream& operator<<(ostream& os, const fecha& p);
	
};


#endif // FECHA_H