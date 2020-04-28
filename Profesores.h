#ifndef PROFESORES_H_
#define PROFESORES_H_

#include <iostream>
#include <string>
#include <sstream>

#include "PersonaTec.h"

using namespace std;

class Profesores: public PersonaTec{
    private://Atributos
        string tip;
        string are;
        int sala;
    public://Metodos
        Profesores (int edad, string nombre, string tipo, string area, int salario): PersonaTec(edad, "Profesor", nombre){//Constructor
            tip = tipo;
            are = area;
            sala = salario;
        }
        string getTip(){
            return tip;
        }
        string getAre(){
            return are;
        }
        int getSala(){
            return sala;
        }
        void setTip(string t){
            tip = t;
        }
        void setSala(int s){
            sala = s;
        }
};
