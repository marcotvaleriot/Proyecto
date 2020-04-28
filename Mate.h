#include <iostream>
#ifndef MATE_H
#define MATE_H


class Materia{
    private:
        string nom;
        string cod;
        string tip;
    public:
        Materia(string nombre, string codigo, string tipo){
            nom = nombre;
            cod = codigo;
            tip = tipo;
        }
        string getNombre(){
            return nom;
        }
        string getCodigo(){
            return cod;
        }
        string getTipo(){
            return tip;
        }
        void setNombre(string n){
            nom = n;
        }
        void setCodigo(string c){
            cod = c;
        }
        void setTipo(string t){
            tip = t;
        }
};

#endif
