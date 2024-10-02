//
// Created by pc on 01-10-2024.
//

#ifndef ARREGLODINAMICOPROYECTO_H
#define ARREGLODINAMICOPROYECTO_H

#include "Proyecto.h"
class ArregloDinamicoProyecto {
private:



public:
    int tamanio;
    int cantidadE;
    Proyecto** arreglo;


    ArregloDinamicoProyecto();


    void expand();

    void add(Proyecto* data);

    int getIndex(Proyecto* data);

    Proyecto* getData(int index);

    void insert(Proyecto* data, int index);

    void reducir();

    void leerArchivoProyecto(std::string nombreA);
};



#endif //ARREGLODINAMICOPROYECTO_H
