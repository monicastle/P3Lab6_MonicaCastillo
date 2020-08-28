#include <iostream>
#include <string>
#include <cstring>
using namespace std;
class STRING{
    public:

    string cadena;
    
    void operator<<(string cadenaigual){
        cadena = cadenaigual;
    } // Fin Operator <<

    void operator<<(STRING cadenaigual){
        *this = cadenaigual;
    } // Fin Operator <<

    void operator!(){
        cout << cadena << endl;
    } // Fin Operator !

    STRING operator*(int numero_veces){
        string acum = "";
        for (int i = 0; i < numero_veces; i++){
            acum += cadena;
        } // Fin For
        cadena = acum;
        return *this;       
    } // Fin Operator *
    
}; // Fin Class STRING
