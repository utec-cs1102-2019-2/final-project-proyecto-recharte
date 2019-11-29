//
// Created by Rodrigo Recharte on 27/11/19.
//

#ifndef PROYECTORODRIGO_PILOTO_H
#define PROYECTORODRIGO_PILOTO_H
#include "Tipos.h"
#include <vector>


class Piloto{
private:
    tipoEntero experiencia;
    tipoEntero contextura;
    tipoEntero equilibrio;
    tipoString personalidad;
    tipoString nombre;
public:
    Piloto();
    virtual ~Piloto();
    void setexperiencia(tipoEntero experiencia){
        this -> experiencia = experiencia;}
    void setcontextura(tipoEntero  contextura){
        this -> contextura = contextura;}
    void setequilibrio(tipoEntero equilibrio){
        this -> equilibrio = equilibrio;}
    void setpersonalidad(tipoString personalidad){
        this -> personalidad = personalidad;}
    void setnombre(tipoString nombre){
        this -> nombre = nombre;}

    tipoEntero getexperiencia(){
        return this->experiencia;}
    tipoEntero  getcontextura(){
        return this->contextura;}
    tipoEntero getequilibrio(){
        return this->equilibrio;}
    tipoString getpersonalidad(){
        return this->personalidad;}
    tipoString getnombre(){
        return this ->nombre;}
};


#endif //PROYECTORODRIGO_PILOTO_H
