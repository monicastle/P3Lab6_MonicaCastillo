#include <iostream>
using namespace std;
class INTEGER{
    public:
    
    int numero;

    void operator<<(int numeroigual){
        numero = numeroigual;
    } // Fin Operator <<

    void operator<<(INTEGER numeroigual){
        *this = numeroigual;
    } // Fin Operator <<

    void operator!(){
        cout << numero << endl;
    } // Fin Operator !

    INTEGER operator+(INTEGER numerosuma){
        int suma;
        suma = numero + numerosuma.numero;
        INTEGER entero_suma;
        entero_suma << suma;
        return entero_suma;        
    } // Fin Operator +

    INTEGER operator-(INTEGER numeroresta){
        int resta;
        resta = numero - numeroresta.numero;
        INTEGER entero_resta;
        entero_resta << resta;
        return entero_resta;    
    } // Fin Operator -

    INTEGER operator*(INTEGER numeromult){
        int multiplicacion;
        multiplicacion = numero * numeromult.numero;
        INTEGER entero_mult;
        entero_mult << multiplicacion;
        return entero_mult;      
    } // Fin Operator *

    INTEGER operator/(INTEGER numerodiv){
        int division;
        division = numero / numerodiv.numero;
        INTEGER entero_div;
        entero_div << division;
        return entero_div;      
    } // Fin Operator /

}; // Fin Class INTEGER