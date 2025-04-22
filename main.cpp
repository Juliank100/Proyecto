#include "Deportista.h"
#include <iostream>
using namespace std;

int main() {
    Deportista d;
    d.setNombre("Juan");
    d.setCedula("123456");
    d.setEdad(25);
    d.setPrograma("Fútbol");
    d.setGenero("Masculino");
    d.setFaltas(2);

    cout << "Nombre: " << d.getNombre() << endl;
    cout << "Cédula: " << d.getCedula() << endl;
    cout << "Edad: " << d.getEdad() << endl;
    cout << "Programa: " << d.getPrograma() << endl;
    cout << "Género: " << d.getGenero() << endl;
    cout << "Faltas: " << d.getFaltas() << endl;

    return 0;
}