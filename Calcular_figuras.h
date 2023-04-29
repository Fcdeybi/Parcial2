#include <iostream>


using namespace std;
 
void menu();
float areaEsfera(float r);
float areaCubo(float a);
float areaCilindro(float r, float h);
 
const float PI = 3.14159265359;
 
int main()
{
    char opcion;
    float a, r, h;
 
    do {
        menu();
        cin >> opcion;
 
        switch(opcion)
        {
            case '1':
                cout << "\nRadio de la Esfera: "; cin >> r;
                cout << "El area de la Esfera es " << areaEsfera(r) << endl;
                break;
 
            case '2':
                cout << "\nArista del Cubo: "; cin >> a;
                cout << "El area del Cubo es " << areaCubo(a) << endl;
                break;
                  case '3':
                cout << "\nRadio del Cilindro: "; cin >> r;
                cout << "Altura del Cilindro: "; cin >> h;
                cout << "El area del Cilindro es " << areaCilindro(r, h) << endl;
                break;
 
            case '4':
                cout << "\n\nFIN DEL PROGRAMA" <<endl;
                break;
 
            default:
                cout << "\n\nOPCION NO VALIDA" << endl;
                break;
        }
 
    } while(opcion != '4');
}
 
void menu()
{
    cout << "\n   MENU PRINCIPAL"
         << "\n======================="
         << "\n1.- Area de la Esfera "
         << "\n2.- Arera del Cubo"
         << "\n3.- Area del Cilinfro"
         << "\n4.- Salir"
         << "\n======================"
         << "\nOPCION (1-4): ";
}
