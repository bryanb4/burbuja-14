#include <iostream>
#include "arreglo.h"
#include "personaje.h"
using namespace std;

int main()
{
    Arreglo<Personaje> personajes;

    Personaje p01("doroti", "pez", 120.0, 150);
    Personaje p02("bataco", "humano", 95.0, 80);
    Personaje p03("elpepe", "guerrero", 70.0, 30);
    Personaje p04("stesech", "ogro", 10.0, 80);

    personajes << p01 << p02 << p03 << p02 << p02;

    cout << "Personajes sin ordenar : " << endl;
    for (size_t i = 0; i < personajes.size(); i++)  
    {
        Personaje &p = personajes[i];
        cout << p.getNombre() << endl;
    }
    cout << endl;

    personajes.seleccion();
    cout << "Personajes ordenados por nombre, con seleccion :" << endl;
    for (size_t i = 0; i < personajes.size(); i++)  
    {
        Personaje &p = personajes[i];
        cout << p.getNombre() << endl;
    }
    cout << endl;


    Personaje p05("gudman", "humano", 190.0, 30);
    personajes.insertar_inicio(p05);

    cout << "Personajes sin ordenar : " << endl;
        for (size_t i = 0; i < personajes.size(); i++)  
        {
            Personaje &p = personajes[i];
            cout << p.getNombre() << endl;
        }
        cout << endl;
    personajes.burbuja();
    cout << "Personajes ordenados por nombre, con burbuja :" << endl;
    for (size_t i = 0; i < personajes.size(); i++)  
    {
        Personaje &p = personajes[i];
        cout << p.getNombre() << endl;
    }
    cout << endl;

    return 0;
}
