//
// Created by pc on 01-10-2024.
//

#include "Proyecto.h"


Proyecto::Proyecto(std::string id, std::string nickname2, std::string fecha, std::string descripcion, std::string dificultad, std::string finalizado) {
    this->id = id;
    this->nickname2 = nickname2;
    this->fecha = fecha;
    this->descripcion = descripcion;
    this->dificultad = dificultad;
    this->finalizado = finalizado;
}
std::string Proyecto::getId(){
    return this->id;
}

std::string Proyecto::getNickname2() {
    return this->nickname2;
}

std::string Proyecto::getFecha() {
    return this->fecha;
}

std::string Proyecto::getDescripcion() {
    return this->descripcion;
}

std::string Proyecto::getDificultad() {
    return this->dificultad;
}

std::string Proyecto::getFinalizado() {
    return this->finalizado;
}