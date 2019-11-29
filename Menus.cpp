//
// Created by Rodrigo Recharte on 27/11/19.
//

#include "Menus.h"
#include "Tipos.h"
#include "DatosJugador.h"
#include <iostream>

void MenuCompra::printMenuCompra(DatosJugador *vehiculo) {
    do{
        cout << "MENU DE COMPRA DE VEHICULOS" << endl;
        cout << "Dinero Actual: $/" << vehiculo->getDineroActual()  <<endl;
        cout << "Vehiculos disponibles para comprar: " << endl;
        cout << "1.- " << endl;
        cout << "2.- " << endl;
        cout << "3.- " << endl;
        cout << "4.- " << endl;
        cout << "Ingrese el numero del vehiculo que deseas comprar" << endl
             << "(ingrese 0 para regresar): "; cin >> opcion;}
    while(opcion < 0 && opcion > 4);
}

void MenuPreparacion::printMenuPreparacion() {
    do{
        cout << "MENU DE PREPARACION DE CARRERA" << endl;
        cout << "Seleccionar pista: " << endl;
        cout << "1.- Pista Helada: " << endl;
        cout << "2.- Pista Rocosa: " << endl;
        cout << "3.- Pista Suprema: " << endl;
        cout << "Ingresar la pista deseada: ";
        cin >> opcion; cout << endl;
    }while(opcion < 1 && opcion > 3);
    do{
        cout << "Vehiculos Disponibles: " << endl;
        cout << "1.- " << endl;
        cout << "2.- " << endl;
        cout << "3.- " << endl;
        cout << "4.- " << endl;
        cout << "Ingresar vehiculo deseado: " << endl;
    }while (opcion < 1 && opcion > 4);
}

void MenuCarrera::printMenuCarrera() {
    do{
        cout << "VUELTA COMPLETADA" << endl;
        cout << "1.- Ingresar a los Pits" << endl;
        cout << "2.- Continuar carrera" << endl;
        cout << "Ingresar la opcion deseada: "; cin >> opcion;
    }while (opcion < 1 && opcion > 2);

}

void MenuPits::printMenuPits() {
    do{
        cout << "Dinero actual: "<<endl;
        cout << "Partes a mejorar: "<<endl;
        cout << "1.- Chasis $ 100"<<endl;
        cout << "2.- Carroceria $ 50"<<endl;
        cout << "3.- Ruedas $ 120"<<endl;
        cout << "4.- Zapatillas $ 270"<<endl;
        cout << "0.- Salir"<<endl;
        cout << "Ingrese el numero de la parte a mejorar "; cin >> opcion;
    }while (opcion < 0 && opcion > 4);
}

void MenuPrincipal::printMenuPrincipal() {
    do{
        cout << "MENU PRINCIPAL" << endl;
        cout << "1.- Comprar nuevos vehiculos" << endl;
        cout << "2.- Iniciar nueva carrera" << endl;
        cout << "3.- Guardar Partida" << endl;
        cout << "4.- Salir del Programa" << endl;
        cout << "Ingrese la opcion a elegir: ";
        cin >> opcion;}
    while (opcion < 1 && opcion > 4);
}
