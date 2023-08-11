#include <iostream>
#include <string>

using namespace std;

struct Alumno {
    string nombre;
    int notas[3];
};

int main(){
    Alumno estudiante;
    estudiante.nombre = "Juan";
    estudiante.notas[0] = 45;
    estudiante.notas[1] = 50;
    estudiante.notas[2] = 40;

    Alumno* ptr = &estudiante;

    cout << "Datos del estudiante " << endl;
    cout << "Nombre : " << ptr->nombre << endl;
    cout << "Notas del estudiante : ";
    for(int i = 0; i < 3; i++){
        cout << ptr->notas[i] << "\t";
    }
    cout << endl;

    return 0;
}