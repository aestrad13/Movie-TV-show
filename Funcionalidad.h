//
// Created by Armando Estrada on 17/06/23.
//

#ifndef UNTITLED11_FUNCIONALIDAD_H
#define UNTITLED11_FUNCIONALIDAD_H

#include "Video.h"
#include "Pelicula.h"
#include "Serie.h"

using namespace std;


class Funcionalidad {
private:
    Video** videos;
    int numVideos;
public:
    Funcionalidad();
    ~Funcionalidad();

    void leerDatos();
    void muestraVideos();
    void muestraCalificacion(float);
    void muestraGenero(string);
    void muestraSeries(float);
    void muestraPeliculas(float);
    void califica(const string&,float);
};


#endif //UNTITLED11_FUNCIONALIDAD_H
