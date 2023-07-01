//
// Created by Armando Estrada on 17/06/23.
//

#ifndef UNTITLED11_PELICULA_H
#define UNTITLED11_PELICULA_H

#include "Video.h"

class Pelicula : public Video{
public:
    Pelicula(int id,string nombre,float duracion,string genero,float calificacion,string tipo):Video(id,nombre,duracion,genero,calificacion,tipo){}

    void mostrar()const override;

};


#endif //UNTITLED11_PELICULA_H
