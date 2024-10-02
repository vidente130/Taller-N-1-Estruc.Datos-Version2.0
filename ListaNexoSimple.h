//
// Created by pc on 01-10-2024.
//

#ifndef LISTANEXOSIMPLE_H
#define LISTANEXOSIMPLE_H
#include "Nodo.h"
#include "Solicitud.h"

class ListaNexoSimple {
private:
    Nodo* cabeza;
public:

    ListaNexoSimple();

    void set_cabeza(Nodo* cabeza);

    void agregarsolicitud(Solicitud solicitud);

    void mostrar();

    bool estaVacio();

    Solicitud obtenerPrimerSolicitud();

    void eliminarPrimeraSolicitud();

    bool estaVacia() const;

    std::tuple<int,int,int> Fecha(std::string fecha);

    bool compararFecha(std::string fecha1, std::string fecha2);

    Nodo* getCabeza();

    void leerArchivoSolicitud();

};



#endif //LISTANEXOSIMPLE_H
