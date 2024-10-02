//
// Created by pc on 01-10-2024.
//

#include "ListaNexoSimple.h"
#include "Solicitud.h"
#include <fstream>
#include <sstream>

ListaNexoSimple::ListaNexoSimple(): cabeza(nullptr) {
}

void ListaNexoSimple::agregarsolicitud(Solicitud solicitud) {
    Nodo* newNodo = new Nodo(solicitud);

    if (!cabeza || compararFecha(solicitud.getFecha(), cabeza->obtenerSolicitud().getFecha())) {
        newNodo->asignarSiguiente(cabeza);
        cabeza = newNodo;
    }
    else {
        Nodo* actual = cabeza;


        while(actual->obtenerSiguiente() && !compararFecha(solicitud.getFecha(), actual->obtenerSiguiente() -> obtenerSolicitud().getFecha())) {
            actual = actual->obtenerSiguiente();
        }

        newNodo->asignarSiguiente(actual->obtenerSiguiente());
        actual->asignarSiguiente(newNodo);
    }

}

void mostrar() {

}

Nodo* ListaNexoSimple::getCabeza() {
    return cabeza;
}

Solicitud ListaNexoSimple::obtenerPrimerSolicitud(){
    if(cabeza) {
        return cabeza->obtenerSolicitud();
    }
}

void ListaNexoSimple::eliminarPrimeraSolicitud() {
    if(cabeza) {
        Nodo* temporal = cabeza;
        cabeza = cabeza->obtenerSiguiente();
        delete temporal;
    }
}

bool ListaNexoSimple::estaVacia()const {
    return cabeza == nullptr;
}

std::tuple<int,int,int> ListaNexoSimple::Fecha(std::string fecha) {
    std::stringstream ss(fecha);
    std::string dia,mes, anio;

    std::getline(ss,dia,'-');
    std::getline(ss,mes,'-');
    std::getline(ss,anio,'-');

    return std::make_tuple(std::stoi(dia),std::stoi(mes),std::stoi(anio));
}

bool ListaNexoSimple::compararFecha(std::string fecha1, std::string fecha2) {


    auto [anio1,mes1,dia1] = Fecha(fecha1);
    auto[anio2,mes2,dia2] = Fecha(fecha2);

    if(anio1 != anio2) {
        return anio1 < anio2;
    }

    if(mes1 != mes2) {
        return mes1 < mes2;
    }

    return dia1 < dia2;
}



void ListaNexoSimple::leerArchivoSolicitud() {


    std::string nickname, dificultad,puntosString,fecha, ciudad, descripcion;
    int puntos;


    std::fstream file("solicitudes.csv");

    if (file.fail()) {
        std::cout << "Error no se puede leer el archivo 2" << "\n";

        exit(1);
    }
    std::string line;

    while (file.good()) {
        std::getline(file, line);
        std::string new_line;
        std::stringstream input_ss(line);

        std::getline(input_ss, nickname, ';');
        std::getline(input_ss, dificultad, ';');
        std::getline(input_ss, puntosString, ';');
        puntos = std::stoi(puntosString);
        std::getline(input_ss,fecha, ';');
        std::getline(input_ss, ciudad, ';');
        std::getline(input_ss,descripcion, ';');


        Solicitud solicitud = Solicitud(nickname,dificultad,puntos,fecha, ciudad, descripcion);

        agregarsolicitud(solicitud);


        while (std::getline(input_ss, new_line, ';')) {
            std::cout << new_line << "\n";
        }
    }
}

