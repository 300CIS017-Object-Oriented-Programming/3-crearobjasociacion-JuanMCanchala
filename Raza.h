// Estudiante: Juan Canchala 
// Codigo: 8983809
// Materia: Programación Orientada a Objetos

#ifndef RAZA_H
#define RAZA_H

#include <string>

using namespace std;
class Raza {
private:
    string nombre;
    string paisOrigen;
public:
    Raza(string nombre, string paisOrigen);
    string getNombre();
    void setNombre(string nombre);
    string getPaisOrigen();
    void setPaisOrigen(string paisOrigen);
};

#endif // RAZA_H
