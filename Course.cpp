#include "Course.h"
#include <string>
#include <iostream>
#include <ctime>

using namespace std;
//méthode d'affichage dans le terminal
void Course::afficherCourse(){
}
void Course::afficherDistance(){
    cout<<"La course dans les montagnes ("<<_idCourse<<") comporte "<<_distanceRestante<<"m de distance à parcourir"<<endl;
}
void Course::afficherVitesse(){
    cout<<"La vitesse des concurrents est limitée à "<<_vitesse<<" km/h"<<endl;
}

//méthode pour faire avancer les concurrents
void Course:: avancer(){
    //_distanceRestante = std::max(_distanceRestante - 1,0);
}

void Course::afficherScore(){
    _score = _distanceRestante/_vitesse;
    cout<<_score<<endl;
}
void Course::afficherScoreMoyen(){

}
void Course::afficherVainqueur(){}

//////////////////////////////////
//-----------GETTER-------------//
//////////////////////////////////
std::string Course::getIdCourse(){
    return _idCourse;
}

float Course::getBestScore(){
    return _bestScore;
}

float Course::getDistanceRestante(){
    return _distanceRestante;
}

float Course::getVitesse(){
    return _vitesse;
}

float Course::getTempsCaseSuivante(){
    return _tempsCaseSuivante;
}

//////////////////////////////////
//-----------SETTER-------------//
//////////////////////////////////
void Course::setTempsCaseSuivante(float temps){
    _tempsCaseSuivante = temps;
}

void Course::setVitesse(float vitesse){
    _vitesse = vitesse;
}


Course::Course(std::string _J1,std::string _J2,std::string _J3,std::string _idCourse) :  _distanceRestante(2500), _vitesse(90), _tempsCaseSuivante(1){}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//-------------------------------------------------FIN DU PROGRAMME-------------------------------------------------------//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////