//
// Created by Rodrigo Recharte on 27/11/19.
//

#ifndef PROYECTORODRIGO_PISTAS_H
#define PROYECTORODRIGO_PISTAS_H
#include "Tipos.h"
#include "Vehiculo.h"


class Pistas{
private:
public:
    Pistas();
    ~Pistas();
    tipoEntero dañoporroca(tipoEntero velocidadMax, tipoEntero escudo);
    tipoEntero hipotermia(tipoEntero contextura, tipoEntero);
};


#endif //PROYECTORODRIGO_PISTAS_H
