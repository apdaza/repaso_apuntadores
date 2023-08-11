#include <iostream>
using namespace std;

int main() {
    int num = 10;
    int* ptr = &num;
    cout << ptr << " -> " << num << endl;
    num = 100;
    cout << ptr << " -> " << *ptr << endl;
    *ptr = 1000;
    cout << ptr << " -> " << *ptr << endl;
    cout << num << endl;

    return 0;
}