//
// Created by pc on 01-10-2024.
//

#include "SistemaImpl.h"
#include "Proyecto.h"
#include "Solicitud.h"
#include "ArregloDinamicoProyecto.h"
#include "ListaNexoSimple.h"

#include <iostream>


int opcion1;
int opcion2;
int opcion3;

SistemaImpl::SistemaImpl() {

}
void SistemaImpl::mensajeMenu() {

	std::cout << "-----------------------------------------------" << "\n";
	std::cout << "1.- Revisar solicitudes." << "\n";
	std::cout << "2.- Busqueda de proyectos." << "\n";
	std::cout << "3.- Volver a evaluar proyecto." << "\n";
	std::cout << "4.- Estadisticas." << "\n";
	std::cout << "5.- Salir." << "\n";
	std::cout << "Elija una opcion: " << "\n";

}
void SistemaImpl::menu() {
	ArregloDinamicoProyecto a;
	a.leerArchivoProyecto("proyectos.csv");

	ListaNexoSimple b;
	b.leerArchivoSolicitud();

	mensajeMenu();
	std::cin >> opcion1;

	while (true) {
		switch (opcion1) {
			case 1:
				SistemaImpl::subMenu();
				break;

			case 2:

				SistemaImpl::busquedaProyecto();
				break;

			case 3:

				SistemaImpl::volverEvaluarProyecto();
				break;

			case 4:

				SistemaImpl::estadisticas();
				break;

			case 5:

				SistemaImpl::salir1();
				return;
		}
		mensajeMenu();
		std::cin >> opcion1;
	}
}

void SistemaImpl::mensajeSubMenu() {

	std::cout << "-----------------------------------------" "\n";
	std::cout << "1.- Aceptar solicitud." << "\n";
	std::cout << "2.- Rechazar solicitud." << "\n";
	std::cout << "3.- Siguiente solicitud." << "\n";
	std::cout << "4.- Salir." << "\n";
	std::cout << "Elija una opcion: ";

}
void SistemaImpl::subMenu() {

	mensajeSubMenu();
	std::cin >> opcion2;

	while(true) {
		switch (opcion2) {
			case 1:

				SistemaImpl::aceptarSolicitud();
			    break;

			case 2:



			case 3:



			case 4:

				  SistemaImpl::salir2();
			      return;

		}
	}
}
void SistemaImpl::aceptarSolicitud() {
}

void SistemaImpl::salir2() {

}
void SistemaImpl::busquedaProyecto() {

}

void SistemaImpl::volverEvaluarProyecto() {

}

void SistemaImpl::estadisticas() {

}

void SistemaImpl::salir1() {

}