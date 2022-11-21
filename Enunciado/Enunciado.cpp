#include <iostream>

using namespace std;

int main()
{
    char e[20];
    int x;

    cout << "Escribe un enunciado (maximo 20 caractres):\n";
    cin.getline(e, 20) ;

    x = 0;
    cout << e[0] << "\n";
    while ('\x0' != e[x]) {
        x = x + 1;
        cout << e[x] << "\n";
   
    }
}
