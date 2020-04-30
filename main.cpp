#include <string>
#include <iostream>
#include <sstream>

#include "personatec.h" //traigo la clase de PersonaTec
#include "estudiantes.h //traigo la clase de Estudiantes
#include "profesores.h" //traigo la clase de Profesores
#include "Residencia.h" //traigo la clase de Residencia

using namespace std;


int main()
{
    Residencia r1("San Felipe", "Apartamento", 4); //Creo una residencia
    Residencia r2("San Joaquin", "Casa", 32); //Creo otra residencia

    Estudiantes e1(18, "Marco", "A01706518", "ICI", 2, r1); //Creo un estudiante
    Profesores p1(30, "Juan Soto", "Catedra", "Negocios", 30000, r2); //Creo un profesor

    e1.printInfo(); //Imprimo la info del estudiante
    p1.printInfo(); //Imprimo la info del profesor

    e1.setAge(19); //Le cambio la edad al estudiante
    e1.setSem(3); //Le cambio el semestre en que va
    e1.printInfo(); //Veo la nueva info



    return 0;
}
