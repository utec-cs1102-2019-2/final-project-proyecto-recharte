//
// Created by Rodrigo Recharte on 27/11/19.
//

#include "Game.h"
#include <iostream>
#include "Tipos.h"
#include "DatosJugador.h"
#include "Menus.h"

void Game::ExecuteGame() {

}

void Game::printMenudeSesion(){
    do{
        cout << "MENU DE SESION" << endl;
        cout << "1.- Crear una nueva partida" << endl;
        cout << "2.- Cargar una partida existente" << endl;
        cin >> opcion;}
    while (opcion < 1 && opcion > 2);
}
