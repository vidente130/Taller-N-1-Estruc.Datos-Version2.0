//
// Created by pc on 01-10-2024.
//

#include "Nodo.h"
#include "Solicitud.h"


Nodo::Nodo(Solicitud& solicitud): solicitud(solicitud), next(NULL) {
}

Solicitud Nodo::obtenerSolicitud() {
    return solicitud;
}

Nodo* Nodo::obtenerSiguiente() {
    if (next == nullptr) {
        return nullptr;
    }
    return next;
}

void Nodo::asignarSiguiente(Nodo* next) {
    if (next == nullptr) {
        return;
    }
    this->next = next;
}