//
// Created by pc on 01-10-2024.
//

#include "SistemaImpl.h"
#include "Proyecto.h"
#include "Solicitud.h"
#include "ArregloDinamicoProyecto.cpp"

#include <iostream>
#include <fstream>
#include <sstream>

int opcion1;
int opcion2;
int opcion3;


void SistemaImpl::leerArchivoProyecto() {

	std::string id;
	std::string nickname;
	std::string fecha;
	std::string descripcion;
	std::string dificultad;
	std::string finalizado;

	std::fstream file("proyectos.csv");

	if (file.fail()) {
		std::cout << "Error no se puede leer el archivo" << "\n";

		exit(1);
	}

	std::string line;

	while (file.good()) {
		std::getline(file, line);

		std::string new_line;
		std::stringstream input_ss(line);

		while (std::getline(input_ss, new_line, ';')) {
			std::cout << new_line << "\n";
			id = new_line[0];
			nickname = new_line[1];
			fecha = new_line[2];
			descripcion = new_line[3];
			dificultad =  new_line[4];
			finalizado = new_line[5];

			Proyecto* proyecto = new Proyecto(id,nickname,fecha,descripcion,dificultad,finalizado);

			ArregloDinamicoProyecto::add(proyecto);
		}
	}
}

void SistemaImpl::leerArchivoSolicitud() {



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

		while (std::getline(input_ss, new_line, ';')) {
			std::cout << new_line << "\n";

		}
	}
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