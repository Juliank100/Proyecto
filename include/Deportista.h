//La superclase Deportista se encarga de heredar los atributos y metodos  comunes de los 3 deportistas
#ifndef DEPORTISTA_H
#define DEPORTISTA_H

#include<string>
using namespace std;

class Deportista{
 
 
    private:
    
    
    
    protected:
    string nombre;
    string cedula;
    int edad;
    string programa;
    string genero;
    int faltas;
    
    
    public:
    void setNombre(string nombre);
    string getNombre();

    void setCedula(string cedula);
    string getCedula();

    void setEdad(int edad);
    int getEdad();

    void setPrograma(string programa);
    string getPrograma();
    
    void setGenero(string genero);
    string getGenero();

    void setFaltas(int faltas);
    int getFaltas();


};
#endif