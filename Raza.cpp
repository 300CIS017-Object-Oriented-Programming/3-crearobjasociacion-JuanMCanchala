// Estudiante: Juan Canchala 
// Codigo: 8983809
// Materia: Programación Orientada a Objetos

#include "Raza.h"
#include <string>
using namespace std;

Raza::Raza(string nombre, string paisOrigen) {
    this->nombre = nombre;
    this->paisOrigen = paisOrigen;
}
string Raza::getNombre() {
    return nombre;
}
void Raza::setNombre(string nombre) {
    this->nombre = nombre;
}
string Raza::getPaisOrigen() {
    return paisOrigen;
}
void Raza::setPaisOrigen(string paisOrigen) {
    this->paisOrigen = paisOrigen;
}
