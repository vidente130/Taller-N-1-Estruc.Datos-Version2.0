//
// Created by pc on 01-10-2024.
//

#include "ListaNexoSimple.h"


void ListaNexoSimple::set_cabeza(Solicitud* solicitud) {
    Nodo* newNodo = new Nodo(solicitud);
    if(!this->cabeza) {
        this->cabeza = newNodo;

    }
    Nodo* aux = this->cabeza;
    while(!aux->next) {
        aux = aux ->next;
    }

    aux -> next = newNodo;
}

Nodo* ListaNexoSimple::buscar(Solicitud* solicitud) {
    if(!this->cabeza) {
        return nullptr;
    }
    Nodo* aux = this->cabeza;
    while(aux) {
        if(aux->solicitud == solicitud) {
            return aux;
        }
        aux = aux -> next;
    }
    return nullptr;
}

