//
// Created by Rodrigo Recharte on 27/11/19.
//

#include "Vehiculo.h"
#include "Tipos.h"

Vehiculo::Vehiculo::Vehiculo() {
    tipoEntero PosX = 0;
    tipoEntero PosY = 0;
    tipoEntero v_velocidadMin = 0;

}

void Vehiculo::Vehiculo::moverVehiculo() {


}

void Vehiculo::Vehiculo::avanzarVehiculo() {

}

Vehiculo::~Vehiculo() {

}

void Vehiculo::meterVehiculos(Vehiculo *pVehiculo) {
    this->listaVehiculos.emplace_back(pVehiculo);
}

