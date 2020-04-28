#ifndef ESTUDIANTES_H_
#define ESTUDIANTES_H_

#include <iostream>
#include <string>
#include <sstream>

#include "PersonaTec.h"

using namespace std;

class Estudiantes: public PersonaTec{
    private://Atributos
        string mat;
        string ave;
        int sem;
        Materia mate;
    public://Metodos
        Estudiantes (int edad, string nombre, string matricula, string avenida, int semestre): PersonaTec(edad, "Estudiante", nombre){ //Constructor
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
        void setMate(Materia p){
            mate = p;
        }
        void ponMate(string n, string c, string t){
            mate.setNombre(n);
            mate.setCodigo(c);
            mate.setTipo(t);
        }
};
