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
        } //Getters
        int getAge(){
            return age;
        }
        string getOfi(){
            return ofi;
        }
        string getNom(){
            return nom;
        } //Setters
        void setOfi(string o){
            ofi = o;
        }
        void setAge(int a){
            age = a;
        }
        void setNom(string n){
            nom = n;
        } //Una funcion para conseguir toda la informacion de nuestro objeto
        void printInfo (){
            cout << nom << ", " << age << ", " << ofi << ", ";
            hog.getInfo(); //La funcion agregada de residencia
        }
};
#endif // PERSONATEC_H_
