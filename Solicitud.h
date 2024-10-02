//
// Created by pc on 01-10-2024.
//

#ifndef SOLICITUD_H
#define SOLICITUD_H

#include <iostream>

class Solicitud {

private:

    std::string nombreDeUsuario;

    std::string dificultad;

    int puntos;

    std::string fecha;

    std::string ciudad;

    std::string descripcion;


public:

    Solicitud(std::string nombreDeUsuario, std::string dificultad, int puntos, std::string fecha, std::string ciudad, std::string descripcion);

    Solicitud();

    std::string getNombreDeUsuario();

    std::string getDificultad();

    int getPuntos();

    std::string &getFecha();

    std::string getCiudad();

    std::string getDescripcion();
};



#endif //SOLICITUD_H
