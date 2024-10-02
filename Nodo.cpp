//
// Created by pc on 01-10-2024.
//

#include "Nodo.h"


Nodo::Nodo(Solicitud* solicitud) {
    //agregar en el .h el dato que contenga el valor de algo y despues aplicarlo aca

    this->solicitud = solicitud;
    this->next = nullptr;
}