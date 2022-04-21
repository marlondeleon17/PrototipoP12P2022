#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
int selection3;
void informes (void )
{

   do{





    cout << "------------informes--------" <<endl;

	cout << "indica que opcion va a seleccionar: " << endl;

	cout << "(1) estudiantes-------------------------" << endl;

	cout << "(2) maestros----------------------------" << endl;

	cout << "(3) cursos------------------------------" << endl;

	cout << "(4) sedes-------------------------------" << endl;

	cout << "(5) notas-------------------------------" << endl;

	cout << "(6) facultades--------------------------" << endl;

	cout << "(7) salir-------------------------------" << endl;

	cout << "su opcion a elegir es: " << endl;

	cin >> selection3;

	cout << endl << endl;

	}while(selection3!=7);
}
