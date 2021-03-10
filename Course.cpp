#include "Course.h"
#include <string>
#include <iostream>
#include <ctime>

//méthode d'affichage dans le terminal
void Course::afficher(){
};

//méthode pour faire avancer les concurrents
void Course:: avancer(){
    _distanceRestante = std::max(_distanceRestante - 1,0);
};

//////////////////////////////////
//-----------GETTER-------------//
//////////////////////////////////
std::string Course::getIdCourse(){
    return _idCourse;
};

std::string Course::getBestScore(){
    return _bestScore;
};

float Course::getDistanceRestante(){
    return _distanceRestante;
};

float Course::getVitesse(){
    return _vitesse;
};

float Course::getTempsCaseSuivante(){
    return _tempsCaseSuivante;
};

//////////////////////////////////
//-----------SETTER-------------//
//////////////////////////////////
void Course::setTempsCaseSuivante(float temps){
    _tempsCaseSuivante = temps;
};

void Course::setVitesse(float vitesse){
    _vitesse = vitesse;
};

Course::Course(std::string _idCourse) : _idCourse(_idCourse), _distanceRestante(100), _vitesse(10), _tempsCaseSuivante(1){}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//-------------------------------------------------FIN DU PROGRAMME-------------------------------------------------------//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////