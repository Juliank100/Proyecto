#ifndef CREDENCIAL_H
#define CREDENCIAL_H

#include "Deportista.h"
#include <string>

class Credencial : public Deportista {
protected:
    std::string codigoPersonal;

public:
    Credencial();
    ~Credencial();

    void setCodigoPersonal(const std::string& codigo);
    std::string getCodigoPersonal() const;
};

#endif
