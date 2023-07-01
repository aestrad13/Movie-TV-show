//
// Created by Armando Estrada on 17/06/23.
//

#ifndef UNTITLED11_VIDEO_H
#define UNTITLED11_VIDEO_H

#include <string>

using namespace std;


class Video {
private:
    int id;
    string nombre;
    float duracion;
    string genero;
    float calificacion;
    string tipo;
public:
    Video();
    Video(int,string,float,string,float,string);

    virtual void mostrar()const;

    int getID();
    string getNombre();
    string getGenero();
    float getCalificacion();
    void setCalificacion(float);


};


#endif //UNTITLED11_VIDEO_H
