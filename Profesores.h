#ifndef PROFESORES_H
#define PROFESORES_H

#include <iostream>
#include <string>
#include <sstream>

#include "PersonaTec.h"
#include "Residencia.h"

class Profesores: public PersonaTec{
    private://Atributos
        string tip;
        string are;
        int sala;
    public://Metodos
        Profesores (int edad, string nombre, string tipo, string area, int salario, Residencia hogar):  //El constructor
        PersonaTec(edad, "Profesor", nombre, hogar){ //Los objetos heredados de personatec
            tip = tipo;
            are = area;
            sala = salario;
        } //Getters
        string getTip(){
            return tip;
        }
        string getAre(){
            return are;
        }
        int getSala(){
            return sala;
        } //Setters
        void setTip(string t){
            tip = t;
        }
        void setSala(int s){
            sala = s;
        }
        void setArea (string a){
            are = a;
        } //La funcion heredada la reescribimos con los objetos que aplican a profesores
        void printInfo (){
            cout << nom << ", " << age << ", " << ofi << ", " << tip << ", " << are << ", " << sala;
            hog.getInfo();
        }
};
#endif //PROFESORES_H
