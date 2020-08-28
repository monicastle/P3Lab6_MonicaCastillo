#include <iostream>
#include <string>
#include "STRING.hpp"
using namespace std;
class CHAR{
    public:

    char caracter;

    void operator<<(char caracterigual){
        caracter = caracterigual;
    } // Fin Operator <<

    void operator<<(CHAR caracterigual){
        *this = caracterigual;
    } // Fin Operator <<

    void operator!(){
        cout << caracter << endl;
    } // Fin Operator !

    STRING operator+(CHAR caractersuma){
        string cadena = "";
        cadena += caracter;
        cadena += caractersuma.caracter;
        STRING suma;
        suma << cadena;
        return suma;
    } // Fin Operator +

}; // Fin Class CHAR