// Estudiante: Juan Canchala 
// Codigo: 8983809
// Materia: Programación Orientada a Objetos

#include <iostream>
#include "Perro.h"
#include "Propietario.h"
#include "Raza.h"
#include "Veterinario.h"

using namespace std;
int main() {

    // Instanciar
    Perro firulais;
    firulais.setNombre("Firulais");
    firulais.setColor("Negro");
    firulais.setEdad(5);
    firulais.setTamanio("Grande");
    firulais.setRaza("Mastin napolitano");
    firulais.agregarPropietario("Carlos Zapata", "102842313");

    propietario.mostrarInfo();
    cout<< "El nombre del pPropietario del perro "<<firulais.getNombre() << " es " << firulais.getPropietario()->getNombre()<<endl;




    return 0;
}
