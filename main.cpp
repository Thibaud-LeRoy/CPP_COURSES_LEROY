#include <string>
#include <iostream>
#include <ctime>
#include "Course.cpp"

using namespace std;

int main(){

/*Course montagneAlpes    = Course("Course Alpes");
Course montagnePyrenees = Course("Course Pyrénées");
Course montagneJura     = Course("Course Jura");
Course montagneVosges   = Course("Course Vosges");
Course montagneAuvergne = Course("Course Auvergne");
*/
Course montagneAlpes    = Course("Roger","Michelle","Aline","CourseAlpes");
Course montagnePyrenees = Course("Roseline","Michel","Mireille","CoursePyrénées");
Course montagneJura     = Course("David","Didier","Gérard","CourseJura");
Course montagneVosges   = Course("Monique","Thérèse","Lucienne","CourseVosges");
Course montagneAuvergne = Course("Isabelle","Marie-France","Marie-Hélène","CourseAuvergne");

montagneAlpes.afficherDistance();
montagnePyrenees.afficherDistance();
montagneJura.afficherDistance();
montagneVosges.afficherDistance();
montagneAuvergne.afficherDistance();
cout<<endl;
montagneAlpes.afficherVitesse();
montagnePyrenees.afficherVitesse();
montagneJura.afficherVitesse();
montagneVosges.afficherVitesse();
montagneAuvergne.afficherVitesse();
cout<<endl;
montagneAlpes.afficherScore();
montagnePyrenees.afficherScore();
montagneJura.afficherScore();
montagneVosges.afficherScore();
montagneAuvergne.afficherScore();
}