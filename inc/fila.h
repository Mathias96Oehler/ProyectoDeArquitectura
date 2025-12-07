#ifndef FILA_H
#define FILA_H

#include <iostream>

#include <vector>
#include <list>
#include "producto.h"
#include "../src/producto.cpp"
#define NO_PERTENECE -1
using namespace std;

class fila
{
private:
    int largo_;                     ///< Largo de la fila.
    int ancho_;                     ///< Ancho de la fila.
    int volumen_neto_;              ///< Volumen que posee actualmente.
    int volumen_total_;             ///< Volumen total que puede poseer.
    string categoria_;              ///< Categoria de la fila.  // aca tengo que empezar a agregar
    list<Producto> lista_producto_; ///< Lista de producto en esa fila.

    /**
     * @brief verifica si el articulo pertenece a la fila.
     *
     * @param      prod   El productos a buscar.
     *
     * @return     True: Si existe, False: No existe.
     */
    bool pertenece(Producto& prod);
    
    /**
     * @brief      Retorna la posicion del producto en la lista.
     *
     * @param[in]  lista  La lista.
     * @param      valor  La Fecha de vencimiento.
     *
     * @return     Retorna la posicion, en caso de retornar NO_EXISTE no se encuentra en la fila.
     */
    int encontrarPosicion(const list<Producto>& lista, Fecha& valor);
    
public:
    
    /**
     * @brief      Contrstructor por defualt.
     */
    fila();
    
    /**
     * @brief      Constructor para definir estanterias personalizadas.
     *
     * @param[in]  largo  El largo.
     * @param[in]  ancho  El ancho.
     */
    fila(int largo, int ancho);
    
    /**
     * @brief      Destructor del objeto.
     */
    ~fila();
    
    /**
     * @brief      Añadir producto.
     *
     * @param[in]  prod  El producto.
     *
     * @return     Retorna un booleano, TRUE: Fue añadido exitozamente.
     *                                  FALSE: No fue añadido.
     * @post       Luego de la operacion exitoza, el producto es añadido en su correspondiente lugar.                                  
     */
    bool add_producto(Producto prod);

    /**
     * @brief      Sobrecarga de operador <<, para poder poder compatibilizar a la libreria standar.
     *
     * @param      os    The operating system
     * @param[in]  e     { parameter_description }
     *
     * @return     The result of the bitwise left shift
     */
    friend ostream& operator<<(ostream& os, const fila& e);
};

#endif
