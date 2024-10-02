//
// Created by pc on 01-10-2024.
//

#ifndef NODO_H
#define NODO_H

#include <iostream>
#include "Solicitud.h"

class Nodo {

public:

    // el dato debe depender de siertas clases supongo

    Solicitud solicitud;

    Nodo* next;

    Nodo();

    Nodo(Solicitud& solicitud);

    Solicitud obtenerSolicitud();

    Nodo* obtenerSiguiente();

    void asignarSiguiente(Nodo* next);
};



#endif //NODO_H
