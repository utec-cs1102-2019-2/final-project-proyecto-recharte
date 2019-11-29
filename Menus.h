//
// Created by Rodrigo Recharte on 27/11/19.
//

#ifndef PROYECTORODRIGO_MENUS_H
#define PROYECTORODRIGO_MENUS_H
#include "Tipos.h"
#include "DatosJugador.h"

class MenuPrincipal{
private:
    tipoEntero opcion;
public:
    void printMenuPrincipal();
};

class MenuCompra{
private:
    tipoEntero opcion;
public:
    void printMenuCompra(DatosJugador *vehiculo);
};

class MenuPreparacion{
private:
    tipoEntero opcion;

public:
    void printMenuPreparacion();

};

class MenuCarrera{
private:
    tipoEntero opcion;

public:
    void printMenuCarrera();

};

class MenuPits{
private:
    tipoEntero opcion;

public:
    void printMenuPits();

};


#endif //PROYECTORODRIGO_MENUS_H
