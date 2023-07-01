#include <iostream>
#include <string>
#include "Funcionalidad.h"

using namespace std;

int main() {
    Funcionalidad programa;

    while(true){
        cout<<"Welcome to the streaming service. Choose one of the following options: "<<endl;
        cout<<"If this is your first time choosing and option, please choose option 1 to load the database: "<<endl;
        cout<<"1.Load database"<<endl;
        cout<<"2.Show all videos"<<endl;
        cout<<"3.Show videos with a specific rating"<<endl;
        cout<<"4.Show videos of a specific genre. Featured genres are Mistery,Drama,Comedy,Thriller,Crime,Sci-Fi."<<endl;
        cout<<"5.Show TV show episodes with a specific rating"<<endl;
        cout<<"6.Show movies with a specific rating"<<endl;
        cout<<"7.Rate a video"<<endl;
        cout<<"0.Exit"<<endl;
        cout<<"Input the option: ";

    int opcion;cin>>opcion;

    switch(opcion){
        case 1:{
            programa.leerDatos();
            cout<<"Database loaded!";
            break;}
        case 2:{
            programa.muestraVideos();
            break;}
        case 3:{
            float rating0;
            cout<<"Input the rating you wish to consult: ";cin>>rating0;
            programa.muestraCalificacion(rating0);
            break;}
        case 4:{
            string genero;
            cout<<"Input the genre you wish to consult: ";cin>>genero;
            programa.muestraGenero(genero);
            break;}
        case 5:{
            float rating;
            cout<<"Input the rating you wish to consult: ";cin>>rating;
            programa.muestraSeries(rating);
            break;}
        case 6:{
            float rating2;
            cout<<"Input the rating you wish to consult: ";cin>>rating2;
            programa.muestraPeliculas(rating2);
            break;}
        case 7:{
            string nom;
            float rating3;
            cout<<"Input the name of the video you wish to rate: ";
            cin.ignore();
            getline(cin,nom);
            cout<<"Input the rating: ";cin>>rating3;
            programa.califica(nom,rating3);
            break;}
        case 0:{
            cout<<"Thank you for using the program! "<<endl;
            return 0;}
        default:{
            cout<<"Input a valid option: "<<endl;}

    }
    cout<<endl;
    }

    return 0;
}
