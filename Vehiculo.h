//
// Created by Rodrigo Recharte on 27/11/19.
//

#ifndef PROYECTORODRIGO_VEHICULO_H
#define PROYECTORODRIGO_VEHICULO_H
//Siempre incluye el Tipos.h
#include "Tipos.h"
#include <vector>

class Vehiculo {
private:
    //En el private se pone las caracteristicas que quieres que tenga tu objeto (ATRIBUTOS)
    tipoEntero v_vida;
    tipoEntero v_escudo;
    tipoEntero v_traccion;
    tipoEntero v_velocidadMax;
    tipoEntero v_velocidaMin;
    tipoString v_nombre;
    vector<Vehiculo> listaVehiculos;
public:
    //En el public se pone las acciones que quieras que haga el objeto (METODOS)
    Vehiculo();
    virtual ~Vehiculo();
    tipoEntero PosX;
    tipoEntero PosY;
    //Setters para definir el valor de tus atributos
    void setVida(tipoEntero vida){
        this->v_vida = vida;}
    void setEscudo(tipoEntero escudo){
        this ->v_escudo = escudo;}
    void setTraccion(tipoEntero traccion){
        this->v_traccion = traccion;}
    void setVelocidadMax(tipoEntero velocidadMax){
        this->v_velocidadMax = velocidadMax;}
    void setVelocidadMin(tipoEntero velocidadMin){
        this->v_velocidaMin = velocidadMin;}
    void setNombre(tipoString nombre){
        this ->v_nombre = nombre;}
    //Getters para agarrar el valor actual de tus atributos
    tipoEntero getVida(){
        return this->v_vida;}
    tipoEntero getEscudo(){
        return this ->v_escudo;}
    tipoEntero  getTraccion(){
        return this->v_traccion;}
    tipoEntero getVelocidadMax(){
        return this->v_velocidadMax;}
    tipoEntero getVelocidadMin(){
        return this->v_velocidaMin;}
    tipoString getNombre(){
        return this->v_nombre;}
    //Metodos que van a tener los objetos de la clase vehiculo
    void moverVehiculo();
    void avanzarVehiculo();
    void meterVehiculos(Vehiculo *pVehiculo);



};


#endif //PROYECTORODRIGO_VEHICULO_H
