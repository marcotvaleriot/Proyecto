#ifndef RESIDENCIA_H
#define RESIDENCIA_H

#include <string>
#include <iostream>
#include <sstream>


using namespace std;

class Residencia{
    private:
        string call;
        string tip;
        int num;
    public:
        Residencia(string calle, string tipo, int numero){
            call = calle;
            tip = tipo;
            num = numero;
        }
        Residencia ();
        void getCalle(){
            cout << call;
        }
        void getTipo(){
            cout << tip;
        }
        void getNumero(){
            cout << num;
        }
        void setCalle (string c){
            call = c;
        }
        void setTipo (string t){
            tip = t;
        }
        void setNumero (int n){
            num = n;
        }
        void getInfo (){
            cout << ", vive en "<< call << ", " << num << ", " << tip << endl;
        }
};
Residencia::Residencia(){
};



#endif // RESIDENCIA_H
