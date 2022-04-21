#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
int selection2;
void procesos (void )
{

   do{





    cout << "------------procesos--------" <<endl;

	cout << "indica que opcion va a seleccionar: " << endl;

	cout << "(1) pago incripcion--------------------" << endl;

	cout << "(2) pago de colegiatura----------------" << endl;

	cout << "(3) asignacion de clases---------------" << endl;

	cout << "(4) datos del alumno-------------------" << endl;

	cout << "(5)salir-------------------------------" << endl;

	cout << "su opcion a elegir es: " << endl;

	cin >> selection2;

	cout << endl << endl;

	}while(selection2!=5);
}
