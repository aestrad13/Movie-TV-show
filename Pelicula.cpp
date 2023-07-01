//
// Created by Armando Estrada on 17/06/23.
//

#include "Pelicula.h"
#include<iostream>

using namespace std;

void Pelicula::mostrar() const {
    cout<<"Movie:"<<endl;
    Video::mostrar();
}

