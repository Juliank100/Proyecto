#include "Credencial.h"

Credencial::Credencial() {
    // Constructor implementation (if needed)
}

Credencial::~Credencial() {
    // Destructor implementation (if needed)
}

void Credencial::setCodigoPersonal(const std::string& codigo) {
    codigoPersonal = codigo;
}

std::string Credencial::getCodigoPersonal() const {
    return codigoPersonal;
}
