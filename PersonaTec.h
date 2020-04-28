#ifndef PERSONATEC_H_
#define PERSONATEC_H_

#include <iostream>
#include <string>
#include <sstream>


using namespace std;

class PersonaTec{
    private://Atributos
        string ofi;
        int age;
        string nom;
    public://Metodos
        PersonaTec (int edad, string oficio, string nombre){//Constructor
            age = edad;
            ofi = oficio;
            nom = nombre;
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
        setOfi(string o){
            ofi = o;
        }

};
