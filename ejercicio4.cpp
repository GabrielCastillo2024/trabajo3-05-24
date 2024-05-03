/*Realice un programa que permita calcular y dar como salida el
promedio general de una sección, tomando en cuenta que está compuesta
por 10 estudiantes y que se tiene la nota de cada uno de ellos.*/

#include <iostream>
using namespace std;
#define MAX 10
int notas[MAX];
int indice = 0;

void agregarNotasEstudiantes(float nota)
{
    if (indice < MAX)
        notas[indice] = nota;
    else
        cout << "\ntodas las notas han sido guardadas" << endl;
    indice++;
}

void promedioDeNotas()
{
    float suma = 0;
    if (indice < MAX)
        cout << "\nfaltan las notas de " << MAX - indice << " estudiantes" << endl;
    else
    {
        for (int i = 0; i < MAX; i++)
        {
            suma += notas[i];
        }
        float promedio = suma / MAX;
        cout << "\nel promedio de la clase es: " << promedio << endl;
    }
}

main()
{
    int opcion;
    float nota;
    cout << "\n1.notas de los estudiantes" << endl;
    cout << "2. calcular promedio de estudiantes" << endl;
    cout << "3. salir" << endl;
    cout << "Eliga una opcion: ";
    cin >> opcion;

    switch (opcion)
    {
    case 1:
        cout << "\n Introduzca la nota del estudiante ? ";
        cin >> nota;
        agregarNotasEstudiantes(nota);
        break;
    case 2:
        promedioDeNotas();
        break;
    case 3:
        cout << "\nsaliendo..." << endl;
        break;
    default:
        cout << "\nopcion invalida..." << endl;
        break;
    }

    if (opcion != 3)
    {
        main();
    }
}