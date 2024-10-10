#include <iostream>
using namespace std;
int main() {
    int numero;
    cout << "digite um numero de 1 a 10 e direi se e impar ou par: ";
    cin >> numero;
    switch (numero) {
    case 1: case 3: case 5: case 7: case 9:
        cout << "e um numero impar";
        break;
    case 2:case 4: case 6: case 8: case 10:
        cout << "e um numero par";
        break;
    default:
        cout << "Esse numero n pode";

    }
    return 0;
}