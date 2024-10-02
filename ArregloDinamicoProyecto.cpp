//
// Created by pc on 01-10-2024.
//
#include <iostream>
#include "ArregloDinamicoProyecto.h"
#include "Proyecto.h"

ArregloDinamicoProyecto::ArregloDinamicoProyecto() {
    this->tamanio = 1;
    this->cantidadE = 0;
    this->arreglo = (Proyecto**) malloc(sizeof(Proyecto) * this->tamanio);
}


void ArregloDinamicoProyecto::expand(){
    int tamanio;
    tamanio *= 2;
    this->arreglo = (Proyecto**)realloc(this->arreglo, sizeof(Proyecto) * this->tamanio);
}


void ArregloDinamicoProyecto::add(Proyecto* data) {

    if (this->cantidadE == this->tamanio) {
        this->expand();
        this->arreglo[this->cantidadE] = data;
        this->cantidadE++;
    }
}


int ArregloDinamicoProyecto::getIndex(Proyecto* data) {

    for (int i = 0; i < this->cantidadE; i++) {
        if (this->arreglo[i] == data) {
            return i;
        }
    }
}



Proyecto* ArregloDinamicoProyecto::getData(int index) {
    if (index < 0 || index >= this->cantidadE)
        return nullptr;
    else {
        return this->arreglo[index];
    }
}


void ArregloDinamicoProyecto::insert(Proyecto* data, int index) {

    if (index < 0 || index > this->cantidadE) {
        return;
    }
    if (index == this->cantidadE) {
        this->add(data);
    }
    if (this->cantidadE == this->tamanio) {
        this->expand();
    }
    for (int i = this->cantidadE; i > index; i--) {
        this->arreglo[i] = this->arreglo[i - 1];
        this->arreglo[index] = data;
        this->cantidadE++;
    }
}
