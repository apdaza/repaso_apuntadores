#include <iostream>
using namespace std;

int main() {
    int num = 10;
    int* ptr;
    ptr = &num;
    cout << ptr << " -> " << num << endl;
    return 0;
}