#ifndef ESTUDIANTES_H
#define ESTUDIANTES_H

#include <iostream>
#include <string>
#include <sstream>

#include "PersonaTec.h"
#include "Residencia.h"

class Estudiantes: public PersonaTec{ //Creamos la clase de estudiantes y le hacemos herencia a personastec
    private://Atributos
        string mat;
        string ave;
        int sem;
    public://Metodos
        Estudiantes (int edad, string nombre, string matricula, string avenida, int semestre, Residencia hogar): //El constructor de estudiantes
        PersonaTec(edad, "Estudiante", nombre, hogar){ //Los objetos que hereda de personatec, y el default que es el oficio 
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
        void printInfo (){ //Una funcion que saca toda la informacion junta
            cout << nom << ", " << age << ", " << ofi << ", matricula " << mat << ", " << ave << ", semestre " << sem;
            hog.getInfo(); //La funcion de residencia la aplicamos aqui
        }
};
#endif // ESTUDIANTES_H
