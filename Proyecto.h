//
// Created by pc on 01-10-2024.
//

#ifndef PROYECTO_H
#define PROYECTO_H
#include <iostream>


class Proyecto {
    std::string id;

    std::string nickname2;

    std::string fecha;

    std::string descripcion;

    std::string dificultad;

    std::string finalizado;


public:

    Proyecto(std::string id, std::string nickname2, std::string fecha, std::string descripcion, std::string dificultad, std::string finalizado);

    std::string getId();

    std::string getNickname2();

    std::string getFecha();

    std::string getDescripcion();

    std::string getDificultad();

    std::string getFinalizado();
};



#endif //PROYECTO_H
