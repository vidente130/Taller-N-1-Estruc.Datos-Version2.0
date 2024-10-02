//
// Created by pc on 01-10-2024.
//

#ifndef ARREGLODINAMICOPROYECTO_H
#define ARREGLODINAMICOPROYECTO_H

#include "Proyecto.h"
class ArregloDinamicoProyecto {
private:

    int tamanio;
    int cantidadE;
    Proyecto** arreglo;

public:

    ArregloDinamicoProyecto();

    ~ArregloDinamicoProyecto();


    void expand();

    void add(Proyecto* data);

    int getIndex(Proyecto* data);

    Proyecto* getData(int index);

    void insert(Proyecto* data, int index);
};



#endif //ARREGLODINAMICOPROYECTO_H
