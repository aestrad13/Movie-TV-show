//
// Created by Armando Estrada on 17/06/23.
//

#include "Video.h"

#include<iostream>

using namespace std;

Video::Video()
{
    id=0;
    nombre="";
    duracion=0.0;
    genero="";
    calificacion=0;
    tipo="";
}

Video::Video(int valID,string nom,float dur,string gen,float cal,string tip)
{
    id=valID;
    nombre=nom;
    duracion=dur;
    genero=gen;
    calificacion=cal;
    tipo=tip;
}

int Video::getID()
{
    return id;
}

string Video::getNombre()
{
    return nombre;
};


string Video::getGenero()
{
    return genero;
}


float Video::getCalificacion()
{
    return calificacion;
}

void Video::setCalificacion(float calif=0)
{
    if(calif>=1 and calif<=5){
        this->calificacion=calif;
    }else{
        cout<<"La calificacion debe ser un numero del 1 al 5";
    }
}

void Video::mostrar()const
{
    cout<<"ID: "<<id<<endl;
    cout<<"Name: "<<nombre<<endl;
    cout<<"Duration: "<<duracion<<endl;
    cout<<"Genre: "<<genero<<endl;
    cout<<"Rating: "<<calificacion<<endl;
    cout<<"Type: "<<tipo<<endl;
}




