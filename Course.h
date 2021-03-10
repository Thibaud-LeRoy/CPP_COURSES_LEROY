#include <string>
#include <iostream>

class Course{
    private:
        std::string _idCourse;
        std::string _J1;
        std::string _J2;
        std::string _J3;
        int _score;
        float _bestScore;
        const int NB_JOUEUR_MAX = 3;
        int _distanceRestante;
        int _vitesse;
        float _tempsCaseSuivante;

    public:
        void afficherCourse();
        void afficherDistance();
        void afficherVitesse();
        void afficherScore();
        void afficherScoreMoyen();
        void afficherVainqueur();
        void avancer();
        std::string getIdCourse();
        float getBestScore();
        float getDistanceRestante();
        float getVitesse();
        float getTempsCaseSuivante();
        void setTempsCaseSuivante(float temps);
        void setVitesse(float vitesse);
        Course(std::string _J1,std::string _J2,std::string _J3,std::string _idCourse);//constructeur de la classe course
};

