//
// Created by Armando Estrada on 17/06/23.
//

#include "Funcionalidad.h"
#include "Pelicula.h"
#include<iostream>
#include<fstream>
#include<sstream>

using namespace std;

Funcionalidad::Funcionalidad() {
    videos=nullptr;
    numVideos=0;
}

Funcionalidad::~Funcionalidad() {
    if (videos != nullptr){
        for (int i=0;i<numVideos;i++){
            delete videos[i];
        }
        delete[] videos;
    }

}

void Funcionalidad::leerDatos() {
    ifstream file("/Users/armandoestrada/CLionProjects/ProyectoFinalPOO/videos.csv");

    string line;
    getline(file, line);

    while (getline(file, line)) {
        istringstream iss(line);
        string idStr, nombre, duracionStr, genero, calificacionStr,tipo;
        getline(iss, idStr, ',');
        getline(iss, nombre, ',');
        getline(iss, duracionStr, ',');
        getline(iss, genero, ',');
        getline(iss, calificacionStr, ',');
        getline(iss, tipo, ',');


        int id = stoi(idStr);
        float duracion = stof(duracionStr);
        float calificacion = stof(calificacionStr);

        if (videos == nullptr) {
            videos = new Video *[1];
            videos[0] = new Video(id, nombre, duracion, genero, calificacion, tipo);
            numVideos = 1;
        } else {
            Video **temp = new Video *[numVideos + 1];
            for (int i = 0; i < numVideos; i++) {
                temp[i] = videos[i];
            }
            temp[numVideos] = new Video(id, nombre, duracion, genero, calificacion, tipo);

            delete[] videos;
            videos = temp;
            numVideos++;
        }
    }

    file.close();
}


void Funcionalidad::muestraVideos() {
    cout<<"Videos:"<<endl;
    for(int i=0;i<numVideos;i++){
        videos[i]->mostrar();
        cout<<endl;
    }
}

void Funcionalidad::muestraCalificacion(float calif)
{
    bool encontrado=false;

    cout<<"Videos with a rating of "<<calif<<endl;
    for(int i=0;i<numVideos;i++){
        if(videos[i]->getCalificacion()==calif){
            videos[i]->mostrar();
            cout << endl;
            encontrado=true;
        }
    }
    if(!encontrado) {
        cout << "There are no videos with that rating in our database." << endl;
        return;
    }
}

void Funcionalidad::muestraGenero(string gen) {
    bool encontrado = false;

    cout << "Videos de genero " << gen << endl;
    for (int i = 0; i < numVideos; i++) {
        if (videos[i]->getGenero() == gen) {
            videos[i]->mostrar();
            cout << endl;
            encontrado = true;
        }
    }
    if (!encontrado) {
        cout << "There are no videos of that genre in our database." << endl;
        return;
    }
}


void Funcionalidad::muestraSeries(float calif){
    bool encontrado=false;

    cout<<"TV shows with rating of "<<calif<<endl;
    for(int i=0;i<numVideos;i++) {
        if (videos[i]->getID()>=11 and videos[i]->getID()<=15  and videos[i]->getCalificacion() == calif) {
            videos[i]->mostrar();
            cout << endl;
            encontrado = true;
        }
    }
    if(!encontrado){
        cout<<"There are no TV shows with that rating in our database."<<endl;
        return;
    }
}


void Funcionalidad::muestraPeliculas(float calif){
    bool encontrado=false;

    cout<<"Movies with rating of  "<<calif<<endl;
    for(int i=0;i<numVideos;i++) {
        if (videos[i]->getID() >= 1 and videos[i]->getID() <= 10 and videos[i]->getCalificacion() == calif) {
            videos[i]->mostrar();
            cout << endl;
            encontrado = true;
        }
    }
    if(!encontrado){
        cout<<"There are no movies with that rating in our database."<<endl;
        return;

    }
}

void Funcionalidad::califica(const string& nom, float calificacion) {
    for (int i = 0; i < numVideos; i++) {
        if (videos[i]->getNombre() == nom) {
            videos[i]->setCalificacion(calificacion);
            cout << "Rating updated." << endl;
            return;
        }
    }
}
