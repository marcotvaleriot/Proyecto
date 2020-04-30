#ifndef RESIDENCIA_H
#define RESIDENCIA_H

#include <string>
#include <iostream>
#include <sstream>


using namespace std;

class Residencia{ //Creamos la clase de residencia
    private: //Aqui le ponemos sus atributos
        string call;
        string tip;
        int num;
    public:
        Residencia(string calle, string tipo, int numero){ //Aqui va el constructor
            call = calle;
            tip = tipo;
            num = numero;
        }
        Residencia (); //Para poder hacerle agregacion a las otras clases
         //Getters
        void getCalle(){
            cout << call;
        }
        void getTipo(){
            cout << tip;
        }
        void getNumero(){
            cout << num;
        } //Setters
        void setCalle (string c){
            call = c;
        }
        void setTipo (string t){
            tip = t;
        }
        void setNumero (int n){
            num = n;
        }
        void getInfo (){ //Esta es la funcion que le vamos a pasar a las otras clases para que puedan obtener la informacion de esta clase
            cout << ", vive en "<< call << ", " << num << ", " << tip << endl;
        }
};
Residencia::Residencia(){ //Esto tambien es necesario para la agregacion
};



#endif // RESIDENCIA_H
