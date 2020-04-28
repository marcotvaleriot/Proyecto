#include <iostream>

using namespace std;

#include "estudiantes.h
#include "profesores.h"
#include "mate.h"

int main()
{
    Estudiantes e1(18, "Marco", "A01706518", "ICI", 2);
    Profesores p1(30, "Juan Soto", "Catedra", "Negocios", 30000);


    cout << e1.getAge() << ", " << e1.getOfi() << ", " << e1.getNom() << ", " << e1.getMat() << ", " << e1.getAve() << ", " << e1.getSem() << endl;




    return 0;
}
