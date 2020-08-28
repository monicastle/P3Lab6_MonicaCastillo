//#include "STRING.hpp"
#include "INTEGER.hpp"
#include "CHAR.hpp"
int main(int argc, char const *argv[]){
    STRING titulos;    
    STRING palabra;    
    STRING fin_linea;
    CHAR letra1;
    CHAR letra2;
    INTEGER x;
    INTEGER y;
    INTEGER z;
    INTEGER w;    

    fin_linea << "";

    x << 1;
    y << -2;
    z << 6;

    titulos << "x+y:";
    !titulos;
    STRING cadena1; 
STRING cadena2;
cadena1<<"hola";
cadena2<<cadena1;
cadena2<<cadena2*2;

!cadena2;
    !(x+y);
    !fin_linea;

    titulos<<"w = z*y+x | (w-y)/z:";
    !titulos;
    w << z*y+x;
    !w;
    //w << 11;
    !((w-x)/z);
    !fin_linea;
    
    titulos<<"Acumulando letras: ";
    !titulos;
    letra1 <<'n';
    letra2 <<'w';
    !(letra1+letra2);
    !fin_linea;

    palabra << letra1+letra2;
    
    titulos<<"palabra*5: ";
    !titulos;
    !(palabra*5);
    !fin_linea;

    titulos<<"Imprimir letra: ";
    !titulos;
    letra1<<letra2;
    !letra2;

    return 0;
}
/*
*************SALIDA ESPERADA*************
x+y:
-1

w = z*y+x | (w-y)/z:
-2

Acumulando letras:  
nw

palabra*3: 
nwnwnw

Imprimir letra: 
w
*/