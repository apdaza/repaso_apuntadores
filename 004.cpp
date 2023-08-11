#include <iostream>
using namespace std;

int main(){
    const int t = 5;
    int numeros[t] = {10, 20, 30, 40, 50};

    int* ptr_numeros = numeros;

    cout << "arreglo original " << endl;

    for(int i = 0; i < t; i++){
        cout << "Elemento " << i << " : " << (ptr_numeros +i) << " : " << *(ptr_numeros +i) <<endl;
    }

    *(ptr_numeros + 2) = 300;

    cout << "arreglo despues del cambio " << endl;

    for(int i = 0; i < t; i++){
        cout << "Elemento " << i << " : " << (ptr_numeros +i) << " : " << *(ptr_numeros +i) <<endl;
    }


    return 0;
}