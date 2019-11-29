//
// Created by Rodrigo Recharte on 27/11/19.
//

#ifndef PROYECTORODRIGO_DATOSJUGADOR_H
#define PROYECTORODRIGO_DATOSJUGADOR_H
#include "Tipos.h"


class DatosJugador {
private:
    tipoString p_nombre;
    tipoEntero p_dineroActual;
public:
    DatosJugador();
    virtual ~DatosJugador();
    void setNombre(tipoString nombre){
        this->p_nombre = nombre;
    }
    void setDineroActual(tipoEntero dinero){
        this->p_dineroActual = dinero;
    }
    tipoString getNombre(){
        return p_nombre;
    }
    tipoEntero getDineroActual(){
        return p_dineroActual;
    }

};


#endif //PROYECTORODRIGO_DATOSJUGADOR_H
