#include "Deportista.h"
#include <string>
#include <iostream>

void Deportista::setNombre(string Nombre){
    nombre = Nombre;
}

string Deportista::getNombre(){
    return nombre;
}


void Deportista::setCedula(string Cedula){
    cedula = Cedula;
}

string Deportista::getCedula(){
    return cedula;
}

void Deportista::setEdad(int Edad){
    edad=Edad;
}

int Deportista::getEdad(){
    return edad;
}

void Deportista::setPrograma(string  Programa){
    programa = Programa;
}

string Deportista::getPrograma(){
    return programa;
}

void Deportista::setGenero(string  Genero){
    genero = Genero;
}

string Deportista::getGenero(){
    return genero;
}
void Deportista::setFaltas(int  Faltas){
    faltas = Faltas;
}

int Deportista::getFaltas(){
    return faltas;
}