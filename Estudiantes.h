#ifndef ESTUDIANTES_H
#define ESTUDIANTES_H

#include <iostream>
#include <string>
#include <sstream>

#include "PersonaTec.h"
#include "Residencia.h"

class Estudiantes: public PersonaTec{
    private://Atributos
        string mat;
        string ave;
        int sem;
    public://Metodos
        Estudiantes (int edad, string nombre, string matricula, string avenida, int semestre, Residencia hogar):
        PersonaTec(edad, "Estudiante", nombre, hogar){ //Constructor
            mat = matricula;
            ave = avenida;
            sem = semestre;
        }
        string getMat(){
            return mat;
        }
        string getAve(){
            return ave;
        }
        int getSem(){
            return sem;
        }
        void setSem(int s){
            sem = s;
        }
        void setAve(string a){
            ave = a;
        }
        void setMat (string m){
            mat = m;
        }
        void printInfo (){
            cout << nom << ", " << age << ", " << ofi << ", matricula " << mat << ", " << ave << ", semestre " << sem;
            hog.getInfo();
        }
};
#endif // ESTUDIANTES_H
