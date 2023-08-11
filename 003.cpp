#include <iostream>
using namespace std;

void modificar_referencia(int* ptr){
    *ptr = 10;
}

void modificar_valor(int valor){
    //cout << "el valor original es " << valor << endl;
    valor = 20;
    //cout << "el valor dentro de la funcion es " << valor << endl;
}

int main(){
    int num = 5;
    cout << "Valor de la variable: " << num << endl;
    modificar_valor(num);
    cout << "despues de modificar por valor: " << num << endl;
    modificar_referencia(&num);
    cout << "despues de modificar por referencia: " << num << endl;
    return 0;
}
