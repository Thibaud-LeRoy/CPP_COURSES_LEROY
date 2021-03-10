#include <string>
#include <iostream>

class Course{
    private:
        std::string _idCourse;
        float _bestScore;
        const int NB_JOUEUR_MAX = 3;
        int _distanceRestante;
        float _vitesse;
        float _tempsCaseSuivante;

    public:
        void afficher();
        void avancer();
        std::string getIdCourse();
        std::string getBestScore();
        float getDistanceRestante();
        float getVitesse();
        float getTempsCaseSuivante();
        void setTempsCaseSuivante(float temps);
        void setVitesse(float vitesse);
        Course(std::string idCourse);//constructeur de la classe course

};

