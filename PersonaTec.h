#ifndef PERSONATEC_H
#define PERSONATEC_H

#include <string>
#include <iostream>
#include <sstream>
#include "Residencia.h"

using namespace std;



class PersonaTec{
    public://Metodos
        string ofi;
        int age;
        string nom;
        Residencia hog;
        PersonaTec (int edad, string oficio, string nombre, Residencia hogar){//Constructor
            age = edad;
            ofi = oficio;
            nom = nombre;
            hog = hogar;
        }
        int getAge(){
            return age;
        }
        string getOfi(){
            return ofi;
        }
        string getNom(){
            return nom;
        }
        void setOfi(string o){
            ofi = o;
        }
        void setAge(int a){
            age = a;
        }
        void setNom(string n){
            nom = n;
        }
        void printInfo (){
            cout << nom << ", " << age << ", " << ofi << ", ";
            hog.getInfo();
        }
};
#endif // PERSONATEC_H_
