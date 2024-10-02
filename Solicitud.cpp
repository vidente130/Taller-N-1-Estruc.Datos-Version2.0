//
// Created by pc on 01-10-2024.
//

#include "Solicitud.h"


Solicitud::Solicitud(std::string nombreDeUsuario, std::string dificultad, int puntos, std::string fecha, std::string ciudad, std::string descripcion) {

    this->nombreDeUsuario = nombreDeUsuario;
    this->dificultad = dificultad;
    this->puntos = puntos;
    this->fecha = fecha;
    this->ciudad = ciudad;
    this->descripcion = descripcion;

}

std::string Solicitud::getNombreDeUsuario() {
    return this->nombreDeUsuario;
}

std::string Solicitud::getDificultad() {
    return this->dificultad;
}

int Solicitud::getPuntos() {
    return this->puntos;
}

std::string Solicitud::getFecha() {
    return this->fecha;
}

std::string Solicitud::getCiudad() {
    return this->ciudad;
}

std::string Solicitud::getDescripcion() {
    return this->descripcion;
}