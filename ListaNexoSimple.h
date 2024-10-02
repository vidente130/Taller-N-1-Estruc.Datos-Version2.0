//
// Created by pc on 01-10-2024.
//

#ifndef LISTANEXOSIMPLE_H
#define LISTANEXOSIMPLE_H
#include "Nodo.h"
#include "Solicitud.h"

class ListaNexoSimple {

public:

    Nodo* cabeza;

    ListaNexoSimple() {

       this->cabeza = nullptr;
    }
    void set_cabeza(Solicitud* solicitud);
    Nodo* get_cabeza();
    Nodo* get_ultimo();
    void agregar(Nodo*);
    Nodo* buscar(Solicitud* solicitud);
    void eliminar();

    ~ListaNexoSimple();
};



#endif //LISTANEXOSIMPLE_H
