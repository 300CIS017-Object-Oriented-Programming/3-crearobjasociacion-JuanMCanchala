//
// Created by lufe0 y Gonzo Feb2024.
//
// Estudiante: Juan Canchala 
// Codigo: 8983809
// Materia: Programación Orientada a Objetos


#ifndef PERRO_H
#define PERRO_H

#include <string>
#include <iostream>
#include "Propietario.h"

using namespace std;
class Perro {
private:
    int edad;
    string nombre;
    string raza;
    string tamanio;
    string color;
    Propietario* pPropietario;
    Veterinario* pVeterinario;
    Raza* pRaza;

public:
    Perro();
    ~Perro(); 
    void ladrar();
    Propietario * getPropietario();
    Perro(string nombre, int edad, string raza, string color, string tamanio);
    void agregarPropietario(string nombre, string docIdentidad);
    void setPropietario(Propietario * pPropietario);
    int getEdad();
    void setEdad(int edad);
    string getRaza();
    void setRaza(string raza);
    string getNombre();
    void setNombre(string nombre);
    string getTamanio();
    void setTamanio(string tamanio);
    string getColor();
    void setColor(string color);
    void asignarVeterinario(Veterinario* vet);
    void asignarRaza(Raza* raza);
};
#endif
