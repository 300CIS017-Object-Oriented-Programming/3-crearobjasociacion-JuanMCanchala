//
// Created by lufe y Gonzo Feb2024.
//
// Estudiante: Juan Canchala 
// Codigo: 8983809
// Materia: Programación Orientada a Objetos


#include "Propietario.h"
#include <iostream>

using namespace std;

void Propietario::mostrarInfo() {
    cout << "Nombre: " << nombre << endl;
    cout << "Documento de identidad: " << docIdentidad << endl;
    cout << "Edad: " << edad << endl;
}

Propietario::Propietario(string nombre, string docIdentidad, int edad) {
 this->nombre = nombre;
 this->docIdentidad = docIdentidad;
 this->edad = 0;
}
string Propietario::getNombre()  {
    return nombre;
}
void Propietario::setEdad(int edad) {
    this->edad = edad;
}
void Propietario::setNombre(string nombre) {
    this->nombre = nombre;
}
int Propietario::getEdad() {
    return edad;
}
