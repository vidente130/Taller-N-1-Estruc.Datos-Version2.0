//
// Created by pc on 01-10-2024.
//
#include <iostream>
#include "ArregloDinamicoProyecto.h"
#include "Proyecto.h"
#include <fstream>
#include <sstream>

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

void ArregloDinamicoProyecto::reducir() {
    if (tamanio < cantidadE) {
        cantidadE /= 2;
        arreglo = (Proyecto**) realloc (arreglo, sizeof(Proyecto) * cantidadE);

        if(arreglo == nullptr) {
            std::cerr << "Hubo un error cuando se queria reducir el tamanio" << "\n";
            exit(1);
        }
    }
}

void ArregloDinamicoProyecto::leerArchivoProyecto(std::string nombreA) {

    std::string id,nickname,fecha,descripcion,dificultad, finalizado;

    std::fstream file(nombreA);

    if (file.fail()) {
        std::cout << "Error no se puede leer el archivo" << "\n";

        exit(1);
    }

    std::string line;

    while (file.good()) {

        std::getline(file, line);

        std::string new_line;
        std::stringstream input_ss(line);
        std::getline(input_ss, id , ';');
        std::getline(input_ss,nickname,';');
        std::getline(input_ss, fecha, ';');
        std::getline(input_ss, descripcion, ';');
        std::getline(input_ss,dificultad,';');
        std::getline(input_ss,finalizado,';');

        Proyecto* nuevoProyecto = new Proyecto(id,nickname,fecha,descripcion,dificultad,finalizado);

        this->add(nuevoProyecto);

    }
}
