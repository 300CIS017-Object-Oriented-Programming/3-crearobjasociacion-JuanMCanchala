//
// Created by lufe y Gonzo Feb2024.
//
// Estudiante: Juan Canchala 
// Codigo: 8983809
// Materia: Programación Orientada a Objetos


#ifndef PROPIETARIO_H
#define PROPIETARIO_H

#include <string>

using namespace std;
class Propietario {
private:
    string nombre;
    string docIdentidad;
    int edad;
public:
    Propietario() = default; //Agrega constructor por defecto sin cuerpo
    void mostrarInfo();
    string getNombre();
    void setNombre(string nombre);
    int getEdad();
    void setEdad(int edad);
    Propietario(string nombre, string docIdentidad);


};


#endif //PROPIETARIO_H
