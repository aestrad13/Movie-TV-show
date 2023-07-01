//
// Created by Armando Estrada on 17/06/23.
//

#ifndef UNTITLED11_SERIE_H
#define UNTITLED11_SERIE_H

#include "Video.h"
#include<string>

using namespace std;


class Serie : public Video{
private:

public:
    Serie(int id,string nombre,float duracion,string genero,float calificacion,string tipo):Video(id,nombre,duracion,genero,calificacion,tipo){}

    void mostrar()const override;

};


#endif //UNTITLED11_SERIE_H
