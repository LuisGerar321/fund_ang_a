#include <stdio.h>
#include "sum.h"

//DataType integer, flotantes, string(cadenas de texto), caracteres
// cajitas que almacenan info, para usarlas despues en codigo:
//Global variables//
int edad = 24;
float estatura = 1.70;
char* name = "Luis Gerardo";
char sexo = 'M';


int main(){
    int after10years = suma(edad, 10);
    printf("mi edad despues de 10 años: %d", after10years);
    return 0;
}