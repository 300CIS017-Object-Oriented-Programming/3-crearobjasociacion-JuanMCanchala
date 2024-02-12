// Estudiante: Juan Canchala 
// Codigo: 8983809
// Materia: Programación Orientada a Objetos


#include "Perro.h"
#include <iostream>

using namespace std;
Perro::Perro() {
    this->edad = 0;
    this->raza = "";
    this->tamanio = "";
    this->color = "";
}
void Perro::ladrar() {
    cout << "Guau Guau" << endl;
}
void Perro::agregarPropietario(string nombre, string docIdentidad) {
    this->pPropietario = new Propietario(nombre, docIdentidad);
}
void Perro::setPropietario(Propietario *pPropietario) {
    this->pPropietario = pPropietario;
}
Propietario *Perro::getPropietario() {
    return this->pPropietario;
}
int Perro::getEdad() {
    return edad;
}
void Perro::setEdad(int edad) {
    this->edad = edad;
}
string Perro::getRaza() {
    return raza;
}
void Perro::setRaza(string raza) {
    this->raza = raza;
}
string Perro::getTamanio() {
    return tamanio;
}
void Perro::setTamanio(string tamanio) {
    this->tamanio = tamanio;
}
string Perro::getNombre() {
    return nombre;
}
void Perro::setNombre(string nombre) {
    this->nombre = nombre;
}
string Perro::getColor() {
    return color;
}
void Perro::setColor(string color) {
    this->color = color;
}
Perro::~Perro() {
    delete pPropietario;
}
Perro::Perro(string nombre, int edad, string raza, string color, string tamanio) {
    this->nombre = nombre;
    this->edad = edad;
    this->raza = raza;
    this->color = color;
    this->tamanio = tamanio;
}
void Perro::asignarVeterinario(Veterinario* vet) {
    pVeterinario = vet;
}
void Perro::asignarRaza(Raza* raza) {
    pRaza = raza;
}
