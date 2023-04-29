#include <iostream>

#include <Calcular_Figuras.h>

using namespace std;
 
void menu();
float areaEsfera(float r);
float areaCubo(float a);
float areaCilindro(float r, float h);
 

 
void menu();
{
    cout << "\n   MENU PRINCIPAL"
         << "\n======================="
         << "\n1.- Area de la Esfera"
         << "\n2.- Area del Cubo"
         << "\n3.- Area del rectangulo"
         << "\n4.- Salir"
         << "\n======================"
         << "\nOPCION (1-4): ";
}
